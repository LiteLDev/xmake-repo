#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
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

struct HudIconRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                  mMesh;
    ::ll::UntypedStorage<8, 24>                                                   mTexture;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::vec<3, float, (glm::qualifier)0>>> mHudIconPositions;
    ::ll::TypedStorage<4, 4, float>                                               mHudOpacity;
    // NOLINTEND

public:
    // prevent constructor by default
    HudIconRenderObjectCollection& operator=(HudIconRenderObjectCollection const&);
    HudIconRenderObjectCollection(HudIconRenderObjectCollection const&);
    HudIconRenderObjectCollection();
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
