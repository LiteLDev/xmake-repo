#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
