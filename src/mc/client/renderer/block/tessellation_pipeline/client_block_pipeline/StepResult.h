#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/PipelineError.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/PipelineError.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class StepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::ClientBlockPipeline::PipelineError, ::std::vector<::std::any>>> mResults;
    // NOLINTEND
};
#else // @header-generator platform
class StepResult {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
