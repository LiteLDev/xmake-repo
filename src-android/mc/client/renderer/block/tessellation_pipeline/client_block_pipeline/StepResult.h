#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/PipelineError.h"

namespace ClientBlockPipeline {

class StepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<ClientBlockPipeline::PipelineError, std::vector<std::any>>> mResults;
    // NOLINTEND

public:
    // prevent constructor by default
    StepResult& operator=(StepResult const&);
    StepResult(StepResult const&);
    StepResult();
};

} // namespace ClientBlockPipeline
