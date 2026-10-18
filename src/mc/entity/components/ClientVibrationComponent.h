#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ClientVibrationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<Tick>> mLastVibrationTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<Tick> getLastVibrationTick() const;

    MCNAPI std::optional<ulong> getTicksSinceLastVibration(::ILevel const&) const;

    MCNAPI void setLastVibrationTick(::Tick);
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>> mLastVibrationTick;
#endif // @header-generator platform
    // NOLINTEND
};
