#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
// clang-format on

namespace ClientBlockPipeline {

class SchematicsMappingStep : public ::ClientBlockPipeline::Step {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mFaceCullingEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    SchematicsMappingStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SchematicsMappingStep();

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
