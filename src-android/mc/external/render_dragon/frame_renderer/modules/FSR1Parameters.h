#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/FidelityFXPrecision.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon::frameobject::components { struct MeshFilter; }
// clang-format on

namespace dragon::framerenderer::modules::fidelityfx {

struct FSR1Parameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&> mFSRMaterial;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MeshFilter const&>                  mScreenQuadFilter;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::fidelityfx::FidelityFXPrecision>     mPrecisionMode;
    ::ll::TypedStorage<1, 1, bool>                                                                  mDebugUseBilinear;
    ::ll::TypedStorage<1, 1, bool>                                                                  mUseComputePass;
    ::ll::TypedStorage<1, 1, bool>                                                                  mUseRCAS;
    ::ll::TypedStorage<4, 4, float>                                                                 mRCASSharpness;
    // NOLINTEND

public:
    // prevent constructor by default
    FSR1Parameters& operator=(FSR1Parameters const&);
    FSR1Parameters(FSR1Parameters const&);
    FSR1Parameters();
};

} // namespace dragon::framerenderer::modules::fidelityfx
