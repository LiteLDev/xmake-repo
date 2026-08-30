#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndicesFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class NormalGenerationStep : public ::ClientBlockPipeline::Step {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NormalGenerationStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
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
