#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
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
    ::ll::UntypedStorage<8, 88>                                                          mOnPlayerDeathPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerDeathManagerProxy>>> mPlayerDeathManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                          mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerDeathManager();

    virtual ::Bedrock::PubSub::Connector<void(Player&)>& getOnPlayerDeathConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerDeathManager(std::unique_ptr<IPlayerDeathManagerProxy>);

    MCNAPI void playerDied(::Player&, ::ActorDamageSource const&);

    MCNAPI void setPacketSender(::PacketSender&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IPlayerDeathManagerProxy>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(Player&)>& $getOnPlayerDeathConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
