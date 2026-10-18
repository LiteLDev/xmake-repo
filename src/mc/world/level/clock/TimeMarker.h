#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct TimeMarkerData;
// clang-format on

class TimeMarker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>    mName;
    ::ll::TypedStorage<4, 4, int>                mTime;
    ::ll::TypedStorage<4, 8, std::optional<int>> mPeriod;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>      mName;
    ::ll::TypedStorage<4, 4, int>                  mTime;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mPeriod;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    TimeMarker& operator=(TimeMarker const&);
    TimeMarker();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TimeMarker();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getName() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit TimeMarker(::TimeMarkerData const& data);
#endif

    MCAPI ::TimeMarkerData toData() const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint const& MAX_NAME_LENGTH();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::TimeMarkerData const& data);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
