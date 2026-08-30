#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes { struct ColorNormRGB; }
// clang-format on

struct FogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mScattering;
    ::ll::UntypedStorage<8, 32> mAbsorption;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogVolumetricCoefficientSetting(::FogVolumetricCoefficientSetting&&);

    MCNAPI FogVolumetricCoefficientSetting(::FogVolumetricCoefficientSetting const&);

    MCNAPI FogVolumetricCoefficientSetting(
        ::Core::Keyframes<float, SharedTypes::ColorNormRGB> const&,
        ::Core::Keyframes<float, SharedTypes::ColorNormRGB> const&
    );

    MCNAPI ~FogVolumetricCoefficientSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FogVolumetricCoefficientSetting&&);

    MCNAPI void* $ctor(::FogVolumetricCoefficientSetting const&);

    MCNAPI void* $ctor(
        ::Core::Keyframes<float, SharedTypes::ColorNormRGB> const&,
        ::Core::Keyframes<float, SharedTypes::ColorNormRGB> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
