#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/DimensionDimmingScalars.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct FaceDimmingAttributes; }
namespace ClientBlockPipeline { struct FaceNormalAttributes; }
namespace ClientBlockPipeline { struct MaterialFaceAttributes; }
// clang-format on

namespace ClientBlockPipeline {

class FaceDimmingStep : public ::ClientBlockPipeline::Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ClientBlockPipeline::DimensionDimmingScalars> mDimmingScalars;
    // NOLINTEND

public:
    // prevent constructor by default
    FaceDimmingStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FaceDimmingStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FaceDimmingStep(::ClientBlockPipeline::DimensionDimmingScalars const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientBlockPipeline::DimensionDimmingScalars const&);
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
