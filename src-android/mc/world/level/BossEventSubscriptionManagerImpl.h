#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/BossEventSubscriptionManager.h"

// auto generated forward declare list
// clang-format off
class BossEventPacket;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class BossEventSubscriptionManagerImpl : public ::BossEventSubscriptionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mOnBossEvent;
    ::ll::UntypedStorage<8, 88> mOnBossEventWithPacket;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BossEventSubscriptionManagerImpl();

    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>);

    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType)>);

    virtual void broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);

    virtual void broadcastBossEvent(::BossEventUpdateType);

    virtual bool areBossEventSubscribersReady() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Subscription
        $subscribeToBossEvent(std::function<void(BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>);

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(std::function<void(BossEventUpdateType)>);

    MCNAPI void $broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);

    MCNAPI void $broadcastBossEvent(::BossEventUpdateType);

    MCNAPI bool $areBossEventSubscribersReady() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
