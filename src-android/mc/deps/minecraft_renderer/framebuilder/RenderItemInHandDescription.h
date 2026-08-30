#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderItemInHandDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::UntypedStorage<8, 24>                                           mTexture;
    ::ll::UntypedStorage<8, 24>                                           mGlintTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                         mMaterial;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<1, 1, ::ItemContextFlags>                          mItemContextFlags;
    ::ll::TypedStorage<1, 1, bool>                                        mIsInUIPass;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsBlending;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>                                        mAlphaMaskedTint;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDitheringEnabled;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mGlintColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mOverlayColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mChangeColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mMultiplicativeTintColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mTileLightColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>     mTileLightIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mBlockLightColor;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>        mFog;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>     mUVOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>     mUVRotation;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>     mUVScale;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const>             mRenderMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderItemInHandDescription& operator=(RenderItemInHandDescription const&);
    RenderItemInHandDescription(RenderItemInHandDescription const&);
    RenderItemInHandDescription();
};

} // namespace mce::framebuilder
