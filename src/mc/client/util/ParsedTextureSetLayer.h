#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ParsedTextureSetLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkb42cfe;
    ::ll::UntypedStorage<8, 56> mUnk19041c;
    ::ll::UntypedStorage<4, 16> mUnkf47021;
    ::ll::UntypedStorage<1, 1>  mUnk5dc33f;
    ::ll::UntypedStorage<4, 4>  mUnk469263;
    ::ll::UntypedStorage<4, 16> mUnk226562;
    ::ll::UntypedStorage<4, 16> mUnkeedc2e;
    ::ll::UntypedStorage<4, 64> mUnk750fc9;
    ::ll::UntypedStorage<4, 64> mUnkca47a8;
    ::ll::UntypedStorage<4, 4>  mUnk1ca79d;
    ::ll::UntypedStorage<1, 1>  mUnke9c873;
    ::ll::UntypedStorage<1, 1>  mUnkb4e110;
    ::ll::UntypedStorage<1, 1>  mUnk9939eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedTextureSetLayer& operator=(ParsedTextureSetLayer const&);
    ParsedTextureSetLayer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParsedTextureSetLayer(::ParsedTextureSetLayer const&);

    MCNAPI ParsedTextureSetLayer(::ParsedTextureSetLayer&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ParsedTextureSetLayer const&);

    MCNAPI void* $ctor(::ParsedTextureSetLayer&&);
    // NOLINTEND
};
#else // @header-generator platform
struct ParsedTextureSetLayer {};
#endif // @header-generator platform
#endif // @header-generator platform
