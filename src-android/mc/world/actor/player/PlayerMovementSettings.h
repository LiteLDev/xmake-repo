#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerTickConfig.h"
#include "mc/entity/components/ReplayStateConfig.h"

// auto generated forward declare list
// clang-format off
struct SyncedPlayerMovementSettings;
// clang-format on

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
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PlayerMovementSettings const& INVALID();
    // NOLINTEND
};
