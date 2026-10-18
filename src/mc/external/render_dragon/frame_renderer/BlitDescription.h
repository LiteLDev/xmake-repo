#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/BlitDescriptionTarget.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlitDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::drawutils::BlitDescriptionTarget> mSource;
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::drawutils::BlitDescriptionTarget> mTarget;
    ::ll::TypedStorage<2, 6, std::optional<glm::vec<2, ushort, (glm::qualifier)0>>>      mArea;
    // NOLINTEND
};
#else // @header-generator platform
struct BlitDescription {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawutils
