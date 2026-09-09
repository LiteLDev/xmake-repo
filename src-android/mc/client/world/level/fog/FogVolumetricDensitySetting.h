#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
