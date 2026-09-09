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
                                     public ::Bedrock::ImplBase<BossEventSubscriptionManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BossEventSubscriptionManager() = default;

    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType)>) = 0;

    virtual void broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&) = 0;

    virtual void broadcastBossEvent(::BossEventUpdateType) = 0;

    virtual bool areBossEventSubscribersReady() const = 0;
    // clang-format on
    // NOLINTEND
};
