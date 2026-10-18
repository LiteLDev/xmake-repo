#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"

class FeaturePlacementFailureLog {
public:
    // FeaturePlacementFailureLog inner types declare
    // clang-format off
    struct SourceMessagePair;
    // clang-format on

    // FeaturePlacementFailureLog inner types define
    struct SourceMessagePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> source;
        ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> message;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        SourceMessagePair& operator=(SourceMessagePair const&);
        SourceMessagePair(SourceMessagePair const&);
        SourceMessagePair();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Log = std::vector<FeaturePlacementFailureLog::SourceMessagePair>;
#else // @header-generator platform
    using Log = ::std::vector<::FeaturePlacementFailureLog::SourceMessagePair>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FeaturePlacementFailureLog::SourceMessagePair>> mFailureLog;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FeaturePlacementFailureLog::SourceMessagePair>> mFailureLog;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void logFailure(::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);

    MCNAPI ~FeaturePlacementFailureLog();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message);
#endif // @header-generator platform
    // NOLINTEND
};
