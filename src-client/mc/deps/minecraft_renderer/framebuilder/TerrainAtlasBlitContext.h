#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/BlitTaskContext.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

namespace mce::framebuilder::modules {

struct TerrainAtlasBlitContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides>      globalOverridesCopy;
    ::ll::TypedStorage<8, 128, ::dragon::framerenderer::modules::BlitTaskContext> blitCtx;
    // NOLINTEND
};

} // namespace mce::framebuilder::modules
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
