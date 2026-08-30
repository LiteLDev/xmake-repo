#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct PipelineError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    PipelineError& operator=(PipelineError const&);
    PipelineError();
};

} // namespace ClientBlockPipeline
