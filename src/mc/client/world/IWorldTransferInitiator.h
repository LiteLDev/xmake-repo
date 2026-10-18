#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IMinecraftEventing.h"
#include "mc/network/ConnectionType.h"
#include "mc/world/WorldTransferResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ThirdPartyInfo;
namespace Bedrock::Services::gatherings::model { struct DestinationInfoResponseData; }
namespace NetherNet { struct NetworkID; }
namespace World { class NetworkWorldJoiner; }
// clang-format on

struct IWorldTransferInitiator {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldTransferInitiator();

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, ::NetherNet::NetworkID const&, std::optional<ThirdPartyInfo> const&, std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&) const = 0;

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, std::string const&, ushort, std::optional<ThirdPartyInfo> const&, std::optional<Bedrock::Services::gatherings::model::DestinationInfoResponseData> const&) const = 0;

    virtual ::WorldTransferResult initiateTransferToLocalWorld(::IClientInstance const&, std::string const&) const = 0;

    virtual ::WorldTransferResult initiateTransferToLocalLevel(::IClientInstance const&, std::string const&) const = 0;

    virtual ::WorldTransferResult initiateTransferToRealm(::IClientInstance const&, ::World::NetworkWorldJoiner&, std::string const&, ::IMinecraftEventing::RealmConnectionFlow) const = 0;

    virtual ::WorldTransferResult initiateTransferToServer(::IClientInstance const&, ::Social::ConnectionType const, std::string const&, ushort const, std::string const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct IWorldTransferInitiator {};
#endif // @header-generator platform
