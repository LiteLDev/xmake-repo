#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>> mLastVibrationPos;
    ::ll::TypedStorage<8, 8, ::Tick>                   mLastVibrationTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearLastVibrationPos();

    MCNAPI std::optional<ulong> getTicksSinceLastVibration(::ILevel const&) const;

    MCNAPI void setLastVibrationPos(::BlockPos, ::Tick);

    MCNAPI void setLastVibrationTick(::Tick);
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mLastVibrationPos;
    ::ll::TypedStorage<8, 8, ::Tick>                       mLastVibrationTick;
#endif // @header-generator platform
    // NOLINTEND
};
