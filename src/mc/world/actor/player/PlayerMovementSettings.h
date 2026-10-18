#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerTickConfig.h"
#include "mc/entity/components/ReplayStateConfig.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SyncedPlayerMovementSettings;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                ActionDirectionThreshold;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig> mReplay;
    ::ll::TypedStorage<8, 32, ::PlayerTickConfig>  mPlayerTickConfig;
    ::ll::TypedStorage<1, 1, bool>                 ServerAuthBlockBreaking;
    ::ll::TypedStorage<4, 4, float>                mServerPlayerPickRangeScalar;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void syncSettingsWithServerSettings(::SyncedPlayerMovementSettings const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PlayerMovementSettings getDefault();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PlayerMovementSettings const& INVALID();
#else // @header-generator platform
    MCAPI static ::PlayerMovementSettings const& INVALID();
#endif // @header-generator platform
    // NOLINTEND
};
