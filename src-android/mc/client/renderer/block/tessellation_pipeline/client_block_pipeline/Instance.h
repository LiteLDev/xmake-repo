#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/StepResult.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Step; }
// clang-format on

namespace ClientBlockPipeline {

class Instance {
public:
    // Instance inner types declare
    // clang-format off
    struct StepCache;
    // clang-format on

    // Instance inner types define
    struct StepCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                              mDependenciesCount;
        ::ll::TypedStorage<8, 8, ulong>                              mDependentsCount;
        ::ll::TypedStorage<8, 32, ::ClientBlockPipeline::StepResult> mResult;
        // NOLINTEND
    };

    using CallbackFunctionType = std::function<void(const ClientBlockPipeline::Inputs&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Description const*>                             mDescription;
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::Instance::StepCache>>                mStepCache;
    ::ll::TypedStorage<8, 48, std::queue<ulong, std::deque<ulong>>>                                 mStepsToProcess;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void(const ClientBlockPipeline::Inputs&)>>> mCallbackFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    Instance();
};

} // namespace ClientBlockPipeline
