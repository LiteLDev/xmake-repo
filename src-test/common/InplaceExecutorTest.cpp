#include "gtest/gtest.h"

#include <stdexcept>
#include <thread>

#include "ll/api/thread/InplaceExecutor.h"

TEST(InplaceExecutorTest, RunsOnCallerAndPropagatesExceptions) {
    ll::thread::InplaceExecutor executor("inline-test");
    auto const                 caller = std::this_thread::get_id();
    bool                       called = false;
    executor.execute([&] {
        EXPECT_EQ(std::this_thread::get_id(), caller);
        called = true;
    });
    EXPECT_TRUE(called);
    EXPECT_THROW(executor.execute([] { throw std::runtime_error("inline"); }), std::runtime_error);
}

TEST(InplaceExecutorTest, DelayedWorkCompletesBeforeReturning) {
    ll::thread::InplaceExecutor executor("delayed-inline-test");
    bool                       called = false;
    EXPECT_EQ(executor.executeAfter([&] { called = true; }, std::chrono::milliseconds{1}), nullptr);
    EXPECT_TRUE(called);
    EXPECT_EQ(executor.getName(), "delayed-inline-test");
}
