#define LL_MEMORY_OPERATORS
#include "ll/api/io/FileSink.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/memory/MemoryOperators.h"
#include "ll/api/mod/RegisterHelper.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "nlohmann/json.hpp"

#include <filesystem>
#include <thread>

namespace {
std::weak_ptr<ll::mod::NativeMod> constructorMod = ll::mod::NativeMod::current();
}

class Example {
public:
    static Example& getInstance() {
        static Example instance;
        return instance;
    }

    bool load() {
        auto self = ll::mod::NativeMod::current();
        if (!self || self->getName() != "LeviLaminaP7Example" || constructorMod.lock() != self) return false;
        bool        workerMatches{};
        std::thread worker([&] { workerMatches = ll::mod::NativeMod::current() == self; });
        worker.join();
        if (!workerMatches) return false;

        auto root = Tag::newTag(Tag::Type::Compound);
        if (!root || !*root) return false;
        auto& nbt        = static_cast<CompoundTag&>(**root);
        nbt["cancelled"] = true;
        nbt["message"]   = std::string("LL P7");
        auto const& view = nbt;
        if (!static_cast<bool>(view["cancelled"]) || static_cast<std::string const&>(view["message"]) != "LL P7")
            return false;

        std::filesystem::create_directories(self->getDataDir());
        auto fileSink = std::make_shared<ll::io::FileSink>(
            self->getDataDir() / "p7-example.log",
            ll::makePolymorphic<ll::io::PatternFormatter>("[{2}][{1}] {0}", false)
        );
        fileSink->setFlushLevel(ll::io::LogLevel::Info);
        self->getLogger().addSink(std::move(fileSink));
        nlohmann::json result{
            {               "name",               self->getName()},
            {"constructorIdentity",                          true},
            {     "workerIdentity",                 workerMatches},
            {       "nbtRoundTrip",                          true},
            {       "modDirectory",    self->getModDir().string()},
            {      "dataDirectory",   self->getDataDir().string()},
            {    "configDirectory", self->getConfigDir().string()}
        };
        if (!ll::file_utils::writeFile(self->getDataDir() / "p7-load.json", result.dump(2))) return false;
        self->getLogger().info("Original LL registration, identity, paths and NBT round-trip passed");
        return true;
    }
};

// load is the only required callback; the original helper leaves the rest optional.
LL_REGISTER_MOD(Example, Example::getInstance());
