#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling::WhiskerLists { struct ScopeEntry; }
// clang-format on

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerMetadataParams {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mClientWhiskerScopeEntries;
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mServerWhiskerScopeEntries;
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mRenderWhiskerScopeEntries;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
