#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeData.h"
#include "mc/deps/profiler/SlotResolveQueryHelper.h"
#include "mc/platform/brstd/flat_map.h"

namespace Bedrock::Profile::Whisker {

class MinecraftThreadQueryHelpers {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 184, std::optional<Bedrock::Profile::Whisker::SlotResolveQueryHelper>> mClientQueryHelper;
    ::ll::TypedStorage<8, 184, std::optional<Bedrock::Profile::Whisker::SlotResolveQueryHelper>> mServerQueryHelper;
    ::ll::UntypedStorage<8, 48> mRenderQueryHelpers;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::ScopeData>> mBackingRenderScopeAccumulation;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>> mBackingRenderScopeIndirections;
    ::ll::TypedStorage<8, 16, ::gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>> mLastClientFetch;
    ::ll::TypedStorage<8, 16, ::gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>> mLastServerFetch;
    ::ll::TypedStorage<8, 16, ::gsl::span<const gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>> mLastRenderFetch;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchAll();

    MCNAPI void reconcileThreadDivergencesAndEnsureQueriesArePrepped(
        ::gsl::span<const std::string_view>,
        ::gsl::span<const std::string_view>,
        ::gsl::span<const std::string_view>
    );

    MCNAPI ~MinecraftThreadQueryHelpers();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
