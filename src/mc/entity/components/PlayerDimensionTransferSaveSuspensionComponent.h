#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/PlayerSuspendLevelStorageSaveToken.h"

class PlayerDimensionTransferSaveSuspensionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PlayerSuspendLevelStorageSaveToken const> mPlayerSuspendLevelStorageSaveToken;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerDimensionTransferSaveSuspensionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerDimensionTransferSaveSuspensionComponent(::PlayerSuspendLevelStorageSaveToken);

    MCNAPI ~PlayerDimensionTransferSaveSuspensionComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerSuspendLevelStorageSaveToken);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
