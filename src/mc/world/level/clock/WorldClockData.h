#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/clock/TimeMarkerData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct TimeMarkerData;
// clang-format on
#endif // @header-generator platform

struct WorldClockData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<4, 4, int>                          mTime;
    ::ll::TypedStorage<1, 1, bool>                         mIsPaused;
    ::ll::TypedStorage<8, 24, std::vector<TimeMarkerData>> mTimeMarkers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                           mId;
    ::ll::TypedStorage<8, 32, ::std::string>                   mName;
    ::ll::TypedStorage<4, 4, int>                              mTime;
    ::ll::TypedStorage<1, 1, bool>                             mIsPaused;
    ::ll::TypedStorage<8, 24, ::std::vector<::TimeMarkerData>> mTimeMarkers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorldClockData& operator=(WorldClockData const&);
    WorldClockData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::WorldClockData const&) const;
#else // @header-generator platform
    MCAPI WorldClockData(::WorldClockData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~WorldClockData();
#else // @header-generator platform
    MCAPI bool operator==(::WorldClockData const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::WorldClockData const&);
#endif // @header-generator platform
    // NOLINTEND
};
