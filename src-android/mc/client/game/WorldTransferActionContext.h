#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGameServerStartup;
class ILevelListCache;
// clang-format on

struct WorldTransferActionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                     mClientInstance;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>    mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&> mGameServerStartup;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferActionContext& operator=(WorldTransferActionContext const&);
    WorldTransferActionContext(WorldTransferActionContext const&);
    WorldTransferActionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTransferActionContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
