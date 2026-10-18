#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
struct FogDistanceSetting {
public:
    // FogDistanceSetting inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class DistanceType : int {
        FIXED  = 0,
        RENDER = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                      mColor;
    ::ll::TypedStorage<4, 4, float>                              mStart;
    ::ll::TypedStorage<4, 4, float>                              mEnd;
    ::ll::TypedStorage<4, 4, ::FogDistanceSetting::DistanceType> mType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::FogDistanceSetting convertToFixedDistance(::FogDistanceSetting const&, float);

    MCNAPI static ::FogDistanceSetting lerp(::FogDistanceSetting const&, ::FogDistanceSetting const&, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogDistanceSetting const& ZERO_SETTING();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class DistanceType : int {
        Fixed  = 0,
        Render = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                      mColor;
    ::ll::TypedStorage<4, 4, float>                              mStart;
    ::ll::TypedStorage<4, 4, float>                              mEnd;
    ::ll::TypedStorage<4, 4, ::FogDistanceSetting::DistanceType> mType;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogDistanceSetting const& ZERO_SETTING();
    // NOLINTEND
#else // @header-generator platform
    enum class DistanceType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
