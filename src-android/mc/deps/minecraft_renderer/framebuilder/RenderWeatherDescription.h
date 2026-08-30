#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/objects/WeatherRenderObject.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderWeatherDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::TypedStorage<4, 4, uint>                                        mIndexOffset;
    ::ll::TypedStorage<4, 4, uint>                                        mIndexCount;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::UntypedStorage<8, 24>                                           mWeatherTexture;
    ::ll::UntypedStorage<8, 24>                                           mOcclusionTexture;
    ::ll::UntypedStorage<8, 24>                                           mLightingTexture;
    ::ll::TypedStorage<4, 4, int>                                         mOcclusionHeightOffset;
    ::ll::UntypedStorage<4, 4>                                            mType;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>        mFog;
    ::ll::TypedStorage<4, 4, float>                                       mFarChunkDistance;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mPositionBaseOffset;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mPrevForward;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mPrevPositionBaseOffset;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mPositionForwardOffset;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mViewPosition;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mUVOffsetAndScale;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mVelocity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mDimensions;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderWeatherDescription& operator=(RenderWeatherDescription const&);
    RenderWeatherDescription(RenderWeatherDescription const&);
    RenderWeatherDescription();
};

} // namespace mce::framebuilder
