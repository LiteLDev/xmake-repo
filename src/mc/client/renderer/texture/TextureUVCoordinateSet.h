#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
// clang-format on

struct TextureUVCoordinateSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               weight;
    ::ll::TypedStorage<4, 4, float>               _u0;
    ::ll::TypedStorage<4, 4, float>               _v0;
    ::ll::TypedStorage<4, 4, float>               _u1;
    ::ll::TypedStorage<4, 4, float>               _v1;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeW;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeH;
    ::ll::TypedStorage<2, 2, ushort>              _sourceImageWidth;
    ::ll::TypedStorage<2, 2, ushort>              _sourceImageHeight;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> sourceFileLocation;
    ::ll::UntypedStorage<1, 2>                    mIsotropicFaceData;
    ::ll::TypedStorage<2, 2, short>               textureSetTranslationIndex;
    ::ll::TypedStorage<2, 2, ushort>              mPBRTextureDataHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureUVCoordinateSet(::TextureUVCoordinateSet const&);

    MCNAPI ::TextureUVCoordinateSet getFlippedHorizontal() const;

    MCNAPI ::TextureUVCoordinateSet getFlippedVertically() const;

    MCNAPI float offsetHeight(float, float) const;

    MCNAPI float offsetHeightPixel(float, float) const;

    MCNAPI float offsetWidthPixel(float, float) const;

    MCNAPI bool operator==(::TextureUVCoordinateSet const&) const;

    MCNAPI void setTextureFrom(::TextureUVCoordinateSet const&, float, float, float, float);

    MCNAPI ::TextureUVCoordinateSet subTexture(float, float, int, int) const;

    MCNAPI ~TextureUVCoordinateSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TextureUVCoordinateSet fromOldSystem(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureUVCoordinateSet const&);
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
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/deps/core/resource/ResourceLocation.h"

struct TextureUVCoordinateSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               weight;
    ::ll::TypedStorage<4, 4, float>               _u0;
    ::ll::TypedStorage<4, 4, float>               _v0;
    ::ll::TypedStorage<4, 4, float>               _u1;
    ::ll::TypedStorage<4, 4, float>               _v1;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeW;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeH;
    ::ll::TypedStorage<2, 2, ushort>              _sourceImageWidth;
    ::ll::TypedStorage<2, 2, ushort>              _sourceImageHeight;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> sourceFileLocation;
    ::ll::TypedStorage<1, 1, ::IsotropicFaceData> mIsotropicFaceData;
    ::ll::TypedStorage<2, 2, short>               textureSetTranslationIndex;
    ::ll::TypedStorage<2, 2, ushort>              mPBRTextureDataHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureUVCoordinateSet(TextureUVCoordinateSet const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureUVCoordinateSet();

    MCAPI TextureUVCoordinateSet(
        float              u0,
        float              v0,
        float              u1,
        float              v1,
        ushort             texWidth,
        ushort             texHeight,
        ::ResourceLocation file,
        float              w,
        ushort             pbrTextureDataHandle,
        ushort             sourceImageWidth,
        ushort             sourceImageHeight
    );

    MCAPI ::TextureUVCoordinateSet getFlippedHorizontal() const;

    MCAPI ::TextureUVCoordinateSet getFlippedVertically() const;

    MCAPI ::TextureUVCoordinateSet& operator=(::TextureUVCoordinateSet const&);

    MCAPI bool operator==(::TextureUVCoordinateSet const& other) const;

    MCAPI ::TextureUVCoordinateSet subTexture(float u0ffset, float v0ffset, int sizeW, int sizeH) const;

    MCAPI ~TextureUVCoordinateSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        float              u0,
        float              v0,
        float              u1,
        float              v1,
        ushort             texWidth,
        ushort             texHeight,
        ::ResourceLocation file,
        float              w,
        ushort             pbrTextureDataHandle,
        ushort             sourceImageWidth,
        ushort             sourceImageHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextureUVCoordinateSet {};
#endif // @header-generator platform
#endif // @header-generator platform
