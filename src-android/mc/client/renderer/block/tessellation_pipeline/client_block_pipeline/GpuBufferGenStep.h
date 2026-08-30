#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct CulledFaceAttribute; }
namespace ClientBlockPipeline { struct FaceDimmingAttributes; }
namespace ClientBlockPipeline { struct FaceDirectionFaceAttributes; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct GeoTypeVertexAttributes; }
namespace ClientBlockPipeline { struct ImageUvFaceAttributes; }
namespace ClientBlockPipeline { struct LightUvFaceAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
namespace ClientBlockPipeline { struct NamedMeshStreams; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
namespace ClientBlockPipeline { struct SmoothLightingUvAttributes; }
namespace ClientBlockPipeline { struct TextureShiftNoiseVertexAttributes; }
namespace ClientBlockPipeline { struct TintFaceAttributes; }
namespace ClientBlockPipeline { struct Transforms; }
namespace ClientBlockPipeline { struct VertexAOAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class GpuBufferGenStep : public ::ClientBlockPipeline::Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEmitColors;
    ::ll::TypedStorage<1, 1, bool> mEmitPBRTextures;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GpuBufferGenStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GpuBufferGenStep(bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
