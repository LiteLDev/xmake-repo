#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderCubemapDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                           mCubemap;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    ::ll::TypedStorage<1, 1, bool>                                        mUseForwardPBRPass;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderCubemapDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
