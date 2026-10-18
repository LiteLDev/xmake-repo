#include "gtest/gtest.h"

#include <atomic>
#include <chrono>
#include <filesystem>
#include <stdexcept>
#include <string>
#include <system_error>

#include "ll/api/data/KeyValueDB.h"

namespace {

class TemporaryDirectory {
    std::filesystem::path path;

public:
    TemporaryDirectory() {
        static std::atomic_uint64_t sequence{0};
        auto const                  timestamp = std::chrono::steady_clock::now().time_since_epoch().count();
        path                                  = std::filesystem::temp_directory_path()
             / ("levilamina-key-value-db-test-" + std::to_string(timestamp) + "-"
                + std::to_string(sequence.fetch_add(1, std::memory_order_relaxed)));
    }

    TemporaryDirectory(TemporaryDirectory const&)            = delete;
    TemporaryDirectory& operator=(TemporaryDirectory const&) = delete;

    ~TemporaryDirectory() {
        std::error_code ec;
        std::filesystem::remove_all(path, ec);
    }

    std::filesystem::path const& get() const { return path; }
};

} // namespace

TEST(KeyValueDBTest, WriteBatchAppliesMixedOperationsInOrder) {
    TemporaryDirectory directory;

    {
        ll::data::KeyValueDB db(directory.get());
        ASSERT_TRUE(db.set("removed", "old"));
        ASSERT_TRUE(db.set("replaced", "old"));

        std::string source = "owned by the batch";

        ll::data::KeyValueDB::WriteBatch batch;
        batch.set("inserted", source)
            .set("replaced", "new")
            .del("removed")
            .set("ordered", "first")
            .del("ordered")
            .set("ordered", "last");

        source = "changed after set";

        EXPECT_FALSE(db.has("inserted"));
        EXPECT_TRUE(db.has("removed"));

        ASSERT_TRUE(db.write(batch));

        auto inserted = db.get("inserted");
        ASSERT_TRUE(inserted.has_value());
        EXPECT_EQ(*inserted, "owned by the batch");

        auto replaced = db.get("replaced");
        ASSERT_TRUE(replaced.has_value());
        EXPECT_EQ(*replaced, "new");

        EXPECT_FALSE(db.has("removed"));

        auto ordered = db.get("ordered");
        ASSERT_TRUE(ordered.has_value());
        EXPECT_EQ(*ordered, "last");
    }
}

TEST(KeyValueDBTest, PersistsAcrossReopen) {
    TemporaryDirectory directory;
    auto const path = directory.get() / "database";
    {
        ll::data::KeyValueDB db(path);
        EXPECT_TRUE(db.empty());
        ASSERT_TRUE(db.set("binary", std::string("a\0b", 3)));
        ASSERT_TRUE(db.set("removed", "value"));
        ASSERT_TRUE(db.del("removed"));
    }
    {
        ll::data::KeyValueDB db(path, false, false, 10);
        EXPECT_EQ(db.get("binary"), std::string("a\0b", 3));
        EXPECT_FALSE(db.has("removed"));
        EXPECT_FALSE(db.empty());
        size_t count = 0;
        for (auto [key, value] : db.iter()) {
            EXPECT_EQ(key, "binary");
            EXPECT_EQ(value, std::string_view("a\0b", 3));
            ++count;
        }
        EXPECT_EQ(count, 1u);
    }
}

#if defined(__ANDROID__)
TEST(KeyValueDBTest, PersistsAtUnicodePath) {
    TemporaryDirectory directory;
    auto const path = directory.get() / std::filesystem::path(u8"\u6570\u636e\u5e93");
    {
        ll::data::KeyValueDB db(path);
        ASSERT_TRUE(db.set("unicode-path", "persisted"));
    }
    {
        ll::data::KeyValueDB db(path, false, false, 0);
        EXPECT_EQ(db.get("unicode-path"), "persisted");
    }
}
#endif

TEST(KeyValueDBTest, RejectsMissingAndAlreadyLockedDatabase) {
    TemporaryDirectory directory;
    EXPECT_THROW((ll::data::KeyValueDB(directory.get(), false, false, 0)), std::runtime_error);
    ll::data::KeyValueDB db(directory.get());
    EXPECT_THROW((ll::data::KeyValueDB(directory.get(), false, false, 0)), std::runtime_error);
}
