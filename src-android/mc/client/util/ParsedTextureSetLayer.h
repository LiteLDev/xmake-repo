#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"

struct ParsedTextureSetLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>       mLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>       mTintMapLocation;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mOverlay;
    ::ll::UntypedStorage<1, 4>                          mIsotropicFaceData;
    ::ll::TypedStorage<4, 4, float>                     mMipFadeAmount;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mMipFadeColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mTintColor;
    ::ll::TypedStorage<4, 64, ::TintMapColor>           mMultiChannelTintBaseColor;
    ::ll::TypedStorage<4, 64, ::TintMapColor>           mMultiChannelTintColor;
    ::ll::TypedStorage<4, 4, float>                     mWeight;
    ::ll::TypedStorage<1, 1, bool>                      mIsAdditive;
    ::ll::TypedStorage<1, 1, bool>                      mMultiChannelTint;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType> mTextureSetLayerType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParsedTextureSetLayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
