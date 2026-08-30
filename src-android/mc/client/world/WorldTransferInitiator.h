#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldTransferInitiator.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/network/ConnectionType.h"
#include "mc/world/WorldTransferResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ThirdPartyInfo;
struct IGameMultiplayerDisabledTextProvider;
struct IGameServerShutdown;
struct IOptionalServerInfoGetter;
struct IWorldTransfer;
struct IWorldTransferInitiationValidator;
struct TransferToLocalWorldContext;
namespace Bedrock::Services::gatherings::model { struct DestinationInfoResponseData; }
namespace NetherNet { struct NetworkID; }
namespace Social { class GameConnectionInfo; }
namespace World { class NetworkWorldJoiner; }
// clang-format on

class WorldTransferInitiator : public ::IWorldTransferInitiator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionalServerInfoGetter const&>            mOptionalServerInfoGetter;
    ::ll::TypedStorage<8, 8, ::IGameMultiplayerDisabledTextProvider const&> mGameMultiplayerDisabledTextProvider;
    ::ll::TypedStorage<8, 8, ::IWorldTransferInitiationValidator const&>    mTransferInitiationValidator;
    ::ll::TypedStorage<8, 8, ::IWorldTransfer&>                             mWorldTransfer;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>                        mGameServerShutdown;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferInitiator& operator=(WorldTransferInitiator const&);
    WorldTransferInitiator(WorldTransferInitiator const&);
    WorldTransferInitiator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldTransferInitiator();

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, ::NetherNet::NetworkID const&, std::optional<ThirdPartyInfo> const&, std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&) const;

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, std::string const&, ushort, std::optional<ThirdPartyInfo> const&, std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&) const;

    virtual ::WorldTransferResult initiateTransferToLocalWorld(::IClientInstance const&, std::string const&) const;

    virtual ::WorldTransferResult initiateTransferToLocalLevel(::IClientInstance const&, std::string const&) const;

    virtual ::WorldTransferResult initiateTransferToRealm(::IClientInstance const&, ::World::NetworkWorldJoiner&, std::string const&, ::IMinecraftEventing::RealmConnectionFlow) const;

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, ::Social::ConnectionType const, std::string const&, ushort const, std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldTransferResult
    _initiateTransferToLocalTransferContext(::IClientInstance const&, ::TransferToLocalWorldContext const&) const;

    MCNAPI ::WorldTransferResult
    _initiateTransferToServer(::IClientInstance const&, ::Social::GameConnectionInfo const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::WorldTransferResult $initiateTransferToServer(
        ::IClientInstance const&,
        ::NetherNet::NetworkID const&,
        std::optional<ThirdPartyInfo> const&,
        std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&
    ) const;

    MCNAPI ::WorldTransferResult $initiateTransferToServer(
        ::IClientInstance const&,
        std::string const&,
        ushort,
        std::optional<ThirdPartyInfo> const&,
        std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&
    ) const;

    MCNAPI ::WorldTransferResult $initiateTransferToLocalWorld(::IClientInstance const&, std::string const&) const;

    MCNAPI ::WorldTransferResult $initiateTransferToLocalLevel(::IClientInstance const&, std::string const&) const;

    MCNAPI ::WorldTransferResult $initiateTransferToRealm(
        ::IClientInstance const&,
        ::World::NetworkWorldJoiner&,
        std::string const&,
        ::IMinecraftEventing::RealmConnectionFlow
    ) const;

    MCNAPI ::WorldTransferResult $initiateTransferToServer(
        ::IClientInstance const&,
        ::Social::ConnectionType const,
        std::string const&,
        ushort const,
        std::string const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
