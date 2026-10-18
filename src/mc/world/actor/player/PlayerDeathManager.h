#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/player/IPlayerDeathManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class IPlayerDeathManagerProxy;
class PacketSender;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PlayerDeathManager : public ::IPlayerDeathManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88>                                                          mOnPlayerDeathPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerDeathManagerProxy>>> mPlayerDeathManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                          mPacketSender;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                                             mOnPlayerDeathPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDeathManagerProxy>>> mPlayerDeathManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                    mPacketSender;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerDeathManager();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayerDeathManager();
#else // @header-generator platform
    virtual ~PlayerDeathManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(Player&)>& getOnPlayerDeathConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getOnPlayerDeathConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerDeathManager(std::unique_ptr<IPlayerDeathManagerProxy>);

    MCNAPI void playerDied(::Player&, ::ActorDamageSource const&);

    MCNAPI void setPacketSender(::PacketSender&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IPlayerDeathManagerProxy>);
#else // @header-generator platform
    MCAPI void playerDied(::Player& player, ::ActorDamageSource const& source);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Player&)>& $getOnPlayerDeathConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::Player&)>& $getOnPlayerDeathConnector();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
