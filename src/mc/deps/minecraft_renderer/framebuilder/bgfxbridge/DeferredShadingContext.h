#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MaterialFilter.h"
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/frame_renderer/DirectDrawContext.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct DeferredShadingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides>          mPBRUniformOverrides;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter>          mMeshFilter;
    ::ll::TypedStorage<8, 136, ::dragon::frameobject::components::MaterialFilter>     mMaterialFilter;
    ::ll::TypedStorage<4, 380, ::dragon::framerenderer::drawutils::DirectDrawContext> ddc;
    ::ll::TypedStorage<1, 1, bool>                                                    mVolumeScatteringEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mPointLightsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mGpuBlockLightingEnabled;
    ::ll::TypedStorage<4, 4, float>                                                   mUpscaleFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredShadingContext& operator=(DeferredShadingContext const&);
    DeferredShadingContext(DeferredShadingContext const&);
    DeferredShadingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredShadingContext(::mce::framebuilder::bgfxbridge::DeferredShadingContext&&);

    MCNAPI ~DeferredShadingContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::DeferredShadingContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DeferredShadingContext {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
