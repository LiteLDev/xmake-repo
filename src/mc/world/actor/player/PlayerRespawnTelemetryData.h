#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mSearchTimeMS;
    ::ll::TypedStorage<4, 4, uint>   mLongJumpCount;
    ::ll::TypedStorage<4, 4, uint>   mShortJumpCount;
    ::ll::TypedStorage<8, 8, double> mJumpDistance;
    ::ll::TypedStorage<4, 4, uint>   mPositionSourceType;
    ::ll::TypedStorage<1, 1, bool>   mChangedDimension;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void WriteEventData(::Social::Events::Event&) const;
#else // @header-generator platform
    MCAPI void WriteEventData(::Social::Events::Event& event) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& mEventName();
#else // @header-generator platform
    MCAPI static ::std::string const& mEventName();
#endif // @header-generator platform
    // NOLINTEND
};
