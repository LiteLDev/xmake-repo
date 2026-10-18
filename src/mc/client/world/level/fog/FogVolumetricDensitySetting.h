#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>    mMaxDensity;
    ::ll::UntypedStorage<8, 32>    mMaxDensityHeight;
    ::ll::UntypedStorage<8, 32>    mZeroDensityHeight;
    ::ll::TypedStorage<1, 1, bool> mUniform;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogVolumetricDensitySetting(::FogVolumetricDensitySetting&&);

    MCNAPI FogVolumetricDensitySetting(::FogVolumetricDensitySetting const&);

    MCNAPI FogVolumetricDensitySetting(
        ::Core::Keyframes<float, float> const&,
        ::Core::Keyframes<float, float> const&,
        ::Core::Keyframes<float, float> const&
    );

    MCNAPI ~FogVolumetricDensitySetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& UNIFORM_MAX_DENSITY_HEIGHT();

    MCNAPI static float const& UNIFORM_ZERO_DENSITY_HEIGHT();

    MCNAPI static ::FogVolumetricDensitySetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FogVolumetricDensitySetting&&);

    MCNAPI void* $ctor(::FogVolumetricDensitySetting const&);

    MCNAPI void* $ctor(
        ::Core::Keyframes<float, float> const&,
        ::Core::Keyframes<float, float> const&,
        ::Core::Keyframes<float, float> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mMaxDensity;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mMaxDensityHeight;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mZeroDensityHeight;
    ::ll::TypedStorage<1, 1, bool>                             mUniform;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricDensitySetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogVolumetricDensitySetting(
        ::Core::Keyframes<float, float> const& maxDensity,
        ::Core::Keyframes<float, float> const& maxDensityHeight,
        ::Core::Keyframes<float, float> const& zeroDensityHeight
    );

    MCAPI ~FogVolumetricDensitySetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricDensitySetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::Keyframes<float, float> const& maxDensity,
        ::Core::Keyframes<float, float> const& maxDensityHeight,
        ::Core::Keyframes<float, float> const& zeroDensityHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FogVolumetricDensitySetting {};
#endif // @header-generator platform
#endif // @header-generator platform
