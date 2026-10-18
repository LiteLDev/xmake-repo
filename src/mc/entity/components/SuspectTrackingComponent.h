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
class SuspectTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>> mSuspiciousPos;
    ::ll::TypedStorage<8, 16, std::optional<Tick>>     mLastSuspicionTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearSuspiciousPos();

    MCNAPI std::optional<BlockPos> getSuspiciousPos() const;

    MCNAPI std::optional<ulong> getTicksSinceLastSuspect(::ILevel const&) const;

    MCNAPI void setSuspiciousPos(std::optional<BlockPos>, ::Tick);
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mSuspiciousPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>     mLastSuspicionTick;
#endif // @header-generator platform
    // NOLINTEND
};
