#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
namespace mce { struct Image; }
// clang-format on

class TheEndLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color const> END_CHAOS_COLOR;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TheEndLightTextureImageBuilder();

    virtual bool buildImage(::BaseLightData const&, ::mce::Image*, uint, float, float, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $buildImage(::BaseLightData const&, ::mce::Image*, uint, float, float, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
namespace mce { struct Image; }
// clang-format on

class TheEndLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk7c13b0;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndLightTextureImageBuilder& operator=(TheEndLightTextureImageBuilder const&);
    TheEndLightTextureImageBuilder(TheEndLightTextureImageBuilder const&);
    TheEndLightTextureImageBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );
    // NOLINTEND
};
#else // @header-generator platform
class TheEndLightTextureImageBuilder {};
#endif // @header-generator platform
#endif // @header-generator platform
