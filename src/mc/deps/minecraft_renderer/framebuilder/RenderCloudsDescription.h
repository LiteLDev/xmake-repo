#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderCloudsDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPrevWorldMatrix;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mColor;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFancy;
    ::ll::TypedStorage<1, 1, bool>                                        mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                                        mIsCloudLightingEnabled;
    ::ll::TypedStorage<4, 4, float>                                       mRenderDistance;
    ::ll::TypedStorage<2, 2, ushort>                                      mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderCloudsDescription& operator=(RenderCloudsDescription const&);
    RenderCloudsDescription(RenderCloudsDescription const&);
    RenderCloudsDescription();
};
#else // @header-generator platform
struct RenderCloudsDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
