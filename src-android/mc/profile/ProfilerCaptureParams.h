#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/platform/Statistics.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/profile/PerformanceContext.h"
#include "mc/profile/TriggerContext.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerCaptureParams {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::Bedrock::Profiling::Orchestrator::TriggerContext> mTriggerContext;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::Orchestrator::PerformanceContext> mPerformanceContext;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mClientThreadWhiskerScopes;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mServerThreadWhiskerScopes;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mRenderThreadWhiskerScopes;
    ::ll::UntypedStorage<8, 56> mActorCounts;
    ::ll::TypedStorage<8, 256, std::optional<const dragon::platform::Statistics>> mGraphicsStats;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
