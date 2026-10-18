#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class IGameServerStartup;
class ILevelListCache;
struct IWorldTransferHandler;
// clang-format on

class LocalWorldConnectArgumentHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                  mGameServerStartup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IWorldTransferHandler>> mWorldTransferHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldConnectArgumentHandler& operator=(LocalWorldConnectArgumentHandler const&);
    LocalWorldConnectArgumentHandler(LocalWorldConnectArgumentHandler const&);
    LocalWorldConnectArgumentHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldConnectArgumentHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LocalWorldConnectArgumentHandler {};
#endif // @header-generator platform
