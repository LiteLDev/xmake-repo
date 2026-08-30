#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MaterialFilter.h"
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/frame_renderer/DirectDrawContext.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

namespace mce::framebuilder::bgfxbridge {

struct WaterExtinctionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides>          mUniformOverrides;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter>          mMeshFilter;
    ::ll::TypedStorage<8, 136, ::dragon::frameobject::components::MaterialFilter>     mMaterialFilter;
    ::ll::TypedStorage<4, 380, ::dragon::framerenderer::drawutils::DirectDrawContext> ddc;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
