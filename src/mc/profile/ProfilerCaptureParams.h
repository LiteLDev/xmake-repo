#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/platform/Statistics.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/profile/PerformanceContext.h"
#include "mc/profile/TriggerContext.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerCaptureParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, ::Bedrock::Profiling::Orchestrator::TriggerContext> mTriggerContext;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::Orchestrator::PerformanceContext> mPerformanceContext;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mClientThreadWhiskerScopes;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mServerThreadWhiskerScopes;
    ::ll::TypedStorage<8, 24, std::optional<const gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>>> mRenderThreadWhiskerScopes;
    ::ll::UntypedStorage<8, 56> mActorCounts;
    ::ll::TypedStorage<8, 256, std::optional<const dragon::platform::Statistics>> mGraphicsStats;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnk46e250;
    ::ll::UntypedStorage<8, 32>  mUnk55ad5a;
    ::ll::UntypedStorage<8, 24>  mUnkaf925b;
    ::ll::UntypedStorage<8, 24>  mUnkca7140;
    ::ll::UntypedStorage<8, 24>  mUnk8da7dd;
    ::ll::UntypedStorage<8, 56>  mUnk2f2732;
    ::ll::UntypedStorage<8, 256> mUnkcd00a4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ProfilerCaptureParams& operator=(ProfilerCaptureParams const&);
    ProfilerCaptureParams(ProfilerCaptureParams const&);
    ProfilerCaptureParams();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
