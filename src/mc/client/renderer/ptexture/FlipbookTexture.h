#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class ScreenContext;
class Tessellator;
struct FlipbookTextureDescription;
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

class FlipbookTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<int>>         mFrames;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet> mTexUVCoordSet;
    ::ll::TypedStorage<4, 4, int>                       mReplicate;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>        mTexturePtr;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       m2DBlitMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>             mMesh;
    ::ll::TypedStorage<8, 48, ::ResourceLocation const> mResourceLocation;
    ::ll::TypedStorage<4, 4, float>                     mCurrFrame;
    ::ll::TypedStorage<4, 4, int>                       mNumFrames;
    ::ll::TypedStorage<4, 4, int>                       mFrameSequenceLength;
    ::ll::TypedStorage<4, 4, int>                       mTicksPerFrame;
    ::ll::TypedStorage<4, 4, int>                       mWidth;
    ::ll::TypedStorage<4, 4, int>                       mHeight;
    ::ll::TypedStorage<4, 4, int>                       mPadSize;
    ::ll::TypedStorage<1, 1, bool>                      mBlendFrames;
    ::ll::TypedStorage<1, 1, bool>                      mAnimationDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipbookTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    FlipbookTexture(::mce::TexturePtr, ::FlipbookTextureDescription const&, ::TextureUVCoordinateSet const&, int const);

    MCNAPI FlipbookTexture(
        std::shared_ptr<mce::TextureGroup>,
        ::FlipbookTextureDescription const&,
        ::TextureUVCoordinateSet const&,
        int const,
        ::cg::TextureSetLayerType
    );

    MCNAPI ::mce::framebuilder::BlitFlipbookSingleTextureDescription
    createDescription(::ScreenContext&, ::mce::ViewportInfo const&) const;

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI ::TextureUVCoordinateSet& getTextureUVCoordinateSet();

    MCNAPI void load(::Tessellator&);

    MCNAPI void tick();

    MCNAPI void unload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::TexturePtr, ::FlipbookTextureDescription const&, ::TextureUVCoordinateSet const&, int const);

    MCNAPI void* $ctor(
        std::shared_ptr<mce::TextureGroup>,
        ::FlipbookTextureDescription const&,
        ::TextureUVCoordinateSet const&,
        int const,
        ::cg::TextureSetLayerType
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
struct FlipbookTextureDescription;
struct TextureUVCoordinateSet;
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

class FlipbookTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbca3d9;
    ::ll::UntypedStorage<8, 96>  mUnkba2b97;
    ::ll::UntypedStorage<4, 4>   mUnk3e9001;
    ::ll::UntypedStorage<8, 32>  mUnk662201;
    ::ll::UntypedStorage<8, 16>  mUnk31f342;
    ::ll::UntypedStorage<8, 616> mUnk3657f7;
    ::ll::UntypedStorage<8, 56>  mUnk350955;
    ::ll::UntypedStorage<4, 4>   mUnkdd2ba5;
    ::ll::UntypedStorage<4, 4>   mUnkaf5df3;
    ::ll::UntypedStorage<4, 4>   mUnk1eb372;
    ::ll::UntypedStorage<4, 4>   mUnk6d4e38;
    ::ll::UntypedStorage<4, 4>   mUnka8d2ff;
    ::ll::UntypedStorage<4, 4>   mUnk6cbe4c;
    ::ll::UntypedStorage<4, 4>   mUnk802493;
    ::ll::UntypedStorage<1, 1>   mUnke903e9;
    ::ll::UntypedStorage<1, 1>   mUnk618aa7;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipbookTexture& operator=(FlipbookTexture const&);
    FlipbookTexture(FlipbookTexture const&);
    FlipbookTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlipbookTexture(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FlipbookTextureDescription const&    flipbookTextureDescription,
        ::TextureUVCoordinateSet const&        uvs,
        int                                    padSize,
        ::cg::TextureSetLayerType              textureType
    );

    MCNAPI ::mce::framebuilder::BlitFlipbookSingleTextureDescription
    createDescription(::ScreenContext& screenContext, ::mce::ViewportInfo const& viewportInfo) const;

    MCNAPI void load(::Tessellator& tessellator);

    MCNAPI ~FlipbookTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FlipbookTextureDescription const&    flipbookTextureDescription,
        ::TextureUVCoordinateSet const&        uvs,
        int                                    padSize,
        ::cg::TextureSetLayerType              textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class FlipbookTexture {};
#endif // @header-generator platform
#endif // @header-generator platform
