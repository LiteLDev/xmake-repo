#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderLegacyCubemapDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                mMesh;
    ::ll::UntypedStorage<8, 24>                                                 mTexture;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&> mWorldMatrix;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&> mCubemapRotationMatrix;
    ::ll::TypedStorage<4, 4, float>                                             mCloudRenderDistance;
    ::ll::TypedStorage<2, 2, short>                                             mCloudHeight;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>          mSortOrigin;
    ::ll::TypedStorage<2, 2, ushort>                                            mViewId;
    ::ll::TypedStorage<1, 1, bool>                                              mInMenu;
    ::ll::TypedStorage<1, 1, bool>                                              mHDRTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderLegacyCubemapDescription& operator=(RenderLegacyCubemapDescription const&);
    RenderLegacyCubemapDescription(RenderLegacyCubemapDescription const&);
    RenderLegacyCubemapDescription();
};

} // namespace mce::framebuilder
