#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
// clang-format on

namespace dragon::framerenderer::modules::rtxpostfx {

struct RayTracePostFXChainMaterials {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&> mPostEffectBloomMaterial;
    ::ll::TypedStorage<8, 8, ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&> mPostEffectTonemapMaterial;
    ::ll::TypedStorage<8, 8, ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&> mScreenBlitMaterial;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracePostFXChainMaterials& operator=(RayTracePostFXChainMaterials const&);
    RayTracePostFXChainMaterials(RayTracePostFXChainMaterials const&);
    RayTracePostFXChainMaterials();
};

} // namespace dragon::framerenderer::modules::rtxpostfx
