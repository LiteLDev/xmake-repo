#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class GlobalConstantBuffers; }
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderNametagDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                    mMesh;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>           mWorldMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>              mSortOrigin;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                   mOldMat;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mColor;
    ::ll::TypedStorage<8, 8, ::mce::GlobalConstantBuffers const&>                   mConstants;
    ::ll::TypedStorage<2, 2, ushort const>                                          mViewId;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mClipRegion;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderNametagDescription& operator=(RenderNametagDescription const&);
    RenderNametagDescription(RenderNametagDescription const&);
    RenderNametagDescription();
};
#else // @header-generator platform
struct RenderNametagDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
