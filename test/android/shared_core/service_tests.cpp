#include "gtest/gtest.h"

#include <memory>

#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceManager.h"

namespace {

class TestService final : public ll::service::ServiceImpl<TestService, 0> {
public:
    bool invalidated = false;

    void invalidate() override { invalidated = true; }
};

class TestServiceV1 final : public ll::service::ServiceImpl<TestService, 1> {
public:
    bool invalidated = false;

    void invalidate() override { invalidated = true; }
};

} // namespace

TEST(P7Service, RegistersQueriesAndInvalidates) {
    auto& manager = ll::service::ServiceManager::getInstance();
    auto  service = std::make_shared<TestService>();

    ASSERT_TRUE(manager.registerService(service, nullptr));
    ASSERT_FALSE(manager.registerService(std::make_shared<TestService>(), nullptr));

    auto queried = manager.getService<TestService>();
    ASSERT_TRUE(queried.has_value());
    EXPECT_EQ(queried.value().get(), service.get());

    auto latest = manager.queryService(TestService::ServiceId.name);
    ASSERT_TRUE(latest.has_value());
    EXPECT_EQ(latest->version, 0u);
    EXPECT_EQ(latest->service.get(), service.get());

    EXPECT_TRUE(manager.unregisterService(TestService::ServiceId));
    EXPECT_TRUE(service->invalidated);
    EXPECT_FALSE(manager.getService<TestService>().has_value());
}

TEST(P7Service, SameNameVersionsRemainIndependent) {
    auto& manager = ll::service::ServiceManager::getInstance();
    auto  v0      = std::make_shared<TestService>();
    auto  v1      = std::make_shared<TestServiceV1>();

    ASSERT_TRUE(manager.registerService(v0, nullptr));
    ASSERT_TRUE(manager.registerService(v1, nullptr));

    auto versions = manager.queryServices(TestService::ServiceId.name);
    ASSERT_EQ(versions.size(), 2u);
    EXPECT_EQ(versions[0].version, 0u);
    EXPECT_EQ(versions[1].version, 1u);

    EXPECT_TRUE(manager.unregisterService(TestServiceV1::ServiceId));
    EXPECT_TRUE(v1->invalidated);
    EXPECT_TRUE(manager.getService<TestService>().has_value());
    EXPECT_TRUE(manager.unregisterService(TestService::ServiceId));
    EXPECT_TRUE(v0->invalidated);
}
