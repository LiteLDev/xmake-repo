#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldTransferHandler.h"

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

struct WorldTransferHandler : public ::IWorldTransferHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldTransferHandler();

    virtual void handleTransferToServer(::TransferToServerContext const&, ::IClientInstance&) const;

    virtual void handleTransferToLocalWorld(::TransferToLocalWorldContext const&, ::ILevelListCache&, ::IGameServerStartup&) const;

    virtual void handleTransferToRealm(::TransferToRealmContext const&, ::World::NetworkWorldJoiner&) const;
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
    MCNAPI void $handleTransferToServer(::TransferToServerContext const&, ::IClientInstance&) const;

    MCNAPI void
    $handleTransferToLocalWorld(::TransferToLocalWorldContext const&, ::ILevelListCache&, ::IGameServerStartup&) const;

    MCNAPI void $handleTransferToRealm(::TransferToRealmContext const&, ::World::NetworkWorldJoiner&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct WorldTransferHandler {};
#endif // @header-generator platform
