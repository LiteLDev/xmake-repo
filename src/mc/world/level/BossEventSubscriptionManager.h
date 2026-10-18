#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class BossEventPacket;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BossEventSubscriptionManager : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                                     public ::Bedrock::ImplBase<BossEventSubscriptionManager> {
#else // @header-generator platform
                                     public ::Bedrock::ImplBase<::BossEventSubscriptionManager> {
public:
    // BossEventSubscriptionManager inner types define
    using onBossEventSignature = void(::BossEventUpdateType);

    using onBossEventWithPacketSignature =
        void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);

#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BossEventSubscriptionManager() = default;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>) = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType)>) = 0;
#else // @header-generator platform
    virtual void broadcastBossEvent(::BossEventUpdateType type) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&) = 0;

    virtual void broadcastBossEvent(::BossEventUpdateType) = 0;
#else // @header-generator platform
    virtual void
    broadcastBossEvent(::BossEventUpdateType type, ::ActorUniqueID const& id, ::BossEventPacket const& packet) = 0;
#endif // @header-generator platform

    virtual bool areBossEventSubscribersReady() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
