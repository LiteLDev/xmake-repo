#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB>> mScattering;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB>> mAbsorption;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricCoefficientSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogVolumetricCoefficientSetting(
        ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB> const& scattering,
        ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB> const& absorption
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB> const& scattering,
        ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB> const& absorption
    );
    // NOLINTEND
};
#else // @header-generator platform
struct FogVolumetricCoefficientSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
