#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/profiler/ScopeData.h"
#include "mc/deps/profiler/SlotResolveQueryHelper.h"
#include "mc/platform/brstd/flat_map.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Profile::Whisker {

class MinecraftThreadQueryHelpers {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 184> mUnk915216;
    ::ll::UntypedStorage<8, 184> mUnk8eac11;
    ::ll::UntypedStorage<8, 48>  mUnk74009f;
    ::ll::UntypedStorage<8, 24>  mUnkb5465f;
    ::ll::UntypedStorage<8, 24>  mUnkb42daf;
    ::ll::UntypedStorage<8, 16>  mUnkf4e29b;
    ::ll::UntypedStorage<8, 16>  mUnk349e12;
    ::ll::UntypedStorage<8, 16>  mUnk4706ba;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MinecraftThreadQueryHelpers& operator=(MinecraftThreadQueryHelpers const&);
    MinecraftThreadQueryHelpers(MinecraftThreadQueryHelpers const&);
    MinecraftThreadQueryHelpers();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fetchAll();

    MCNAPI void reconcileThreadDivergencesAndEnsureQueriesArePrepped(
        ::gsl::span<const std::string_view>,
        ::gsl::span<const std::string_view>,
        ::gsl::span<const std::string_view>
    );

    MCNAPI ~MinecraftThreadQueryHelpers();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void fetchAll();

    MCNAPI void reconcileThreadDivergencesAndEnsureQueriesArePrepped(
        ::gsl::span<::std::string_view const> clientNames,
        ::gsl::span<::std::string_view const> serverNames,
        ::gsl::span<::std::string_view const> renderNames
    );

    MCNAPI ~MinecraftThreadQueryHelpers();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
