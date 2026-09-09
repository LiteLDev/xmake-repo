#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGameServerStartup;
class ILevelListCache;
struct TransferToLocalWorldContext;
struct TransferToRealmContext;
struct TransferToServerContext;
namespace World { class NetworkWorldJoiner; }
// clang-format on

struct IWorldTransferHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldTransferHandler();

    virtual void handleTransferToServer(::TransferToServerContext const&, ::IClientInstance&) const = 0;

    virtual void handleTransferToLocalWorld(::TransferToLocalWorldContext const&, ::ILevelListCache&, ::IGameServerStartup&) const = 0;

    virtual void handleTransferToRealm(::TransferToRealmContext const&, ::World::NetworkWorldJoiner&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
