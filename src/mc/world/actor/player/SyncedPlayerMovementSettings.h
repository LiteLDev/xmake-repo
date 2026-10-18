#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PlayerMovementSettings;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SyncedPlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mRewindHistorySize;
    ::ll::TypedStorage<1, 1, bool> ServerAuthBlockBreaking;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SyncedPlayerMovementSettings();

    MCNAPI explicit SyncedPlayerMovementSettings(::PlayerMovementSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PlayerMovementSettings const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
