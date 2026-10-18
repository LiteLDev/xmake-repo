#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling::WhiskerLists { struct ScopeEntry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerMetadataParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mClientWhiskerScopeEntries;
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mServerWhiskerScopeEntries;
    ::ll::TypedStorage<8, 16, ::gsl::span<const Bedrock::Profiling::WhiskerLists::ScopeEntry>> mRenderWhiskerScopeEntries;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkffd737;
    ::ll::UntypedStorage<8, 16> mUnked4547;
    ::ll::UntypedStorage<8, 16> mUnk18e0a6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ProfilerMetadataParams& operator=(ProfilerMetadataParams const&);
    ProfilerMetadataParams(ProfilerMetadataParams const&);
    ProfilerMetadataParams();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
