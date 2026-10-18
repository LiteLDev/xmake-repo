#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MaterialFilter.h"
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/frame_renderer/DirectDrawContext.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

namespace mce::framebuilder::bgfxbridge {

struct WaterSurfaceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides>          mUniformOverrides;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter>          mMeshFilter;
    ::ll::TypedStorage<8, 136, ::dragon::frameobject::components::MaterialFilter>     mMaterialFilter;
    ::ll::TypedStorage<4, 380, ::dragon::framerenderer::drawutils::DirectDrawContext> ddc;
    ::ll::TypedStorage<1, 1, bool>                                                    mPointLightsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mGPUBlockLightingEnabled;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
