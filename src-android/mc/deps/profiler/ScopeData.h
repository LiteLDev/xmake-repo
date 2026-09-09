#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/WhiskerBox.h"

namespace Bedrock::Profile::Whisker {

struct ScopeData {
public:
    // ScopeData inner types declare
    // clang-format off
    struct Recent;
    struct Historical;
    // clang-format on

    // ScopeData inner types define
    struct Recent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mTotalCostPerFrame;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>
            mHighestIndividualCost;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mLowestIndividualCost;
        ::ll::TypedStorage<8, 8, ulong>                                                           mCountPerFrame;
        // NOLINTEND
    };

    struct Historical {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mTotalCostPerFrame;
        ::ll::UntypedStorage<8, 24> mHighestIndividualCost;
        ::ll::UntypedStorage<8, 24> mLowestIndividualCost;
        ::ll::UntypedStorage<8, 24> mCountPerFrame;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                                   mLabel;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profile::Whisker::ScopeData::Recent>     mRecentFrame;
    ::ll::TypedStorage<8, 96, ::Bedrock::Profile::Whisker::ScopeData::Historical> mHistorical;
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
