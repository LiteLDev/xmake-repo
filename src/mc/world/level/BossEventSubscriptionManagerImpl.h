#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88> mOnBossEvent;
    ::ll::UntypedStorage<8, 88> mOnBossEventWithPacket;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::BossEventUpdateType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnBossEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnBossEventWithPacket;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BossEventSubscriptionManagerImpl();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>);
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (BossEventUpdateType)>);
#else // @header-generator platform
    virtual void broadcastBossEvent(::BossEventUpdateType type) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);
#else // @header-generator platform
    virtual void broadcastBossEvent(
        ::BossEventUpdateType    type,
        ::ActorUniqueID const&   id,
        ::BossEventPacket const& packet
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastBossEvent(::BossEventUpdateType);

    virtual bool areBossEventSubscribersReady() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool areBossEventSubscribersReady() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription
        $subscribeToBossEvent(std::function<void(BossEventUpdateType, const ActorUniqueID&, const BossEventPacket&)>);
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(::std::function<void(::BossEventUpdateType)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(std::function<void(BossEventUpdateType)>);
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Subscription $subscribeToBossEvent(
        ::std::function<void(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&)> callback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastBossEvent(::BossEventUpdateType, ::ActorUniqueID const&, ::BossEventPacket const&);
#else // @header-generator platform
    MCAPI void $broadcastBossEvent(::BossEventUpdateType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastBossEvent(::BossEventUpdateType);
#else // @header-generator platform
    MCAPI void
    $broadcastBossEvent(::BossEventUpdateType type, ::ActorUniqueID const& id, ::BossEventPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $areBossEventSubscribersReady() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $areBossEventSubscribersReady() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
