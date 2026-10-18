#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/WhiskerBox.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profile::Whisker {

struct ScopeData {
public:
    // ScopeData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Recent;
#else // @header-generator platform
#endif // @header-generator platform
    struct Historical;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Recent;
#endif // @header-generator platform
    // clang-format on

    // ScopeData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct Historical {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24> mTotalCostPerFrame;
        ::ll::UntypedStorage<8, 24> mHighestIndividualCost;
        ::ll::UntypedStorage<8, 24> mLowestIndividualCost;
        ::ll::UntypedStorage<8, 24> mCountPerFrame;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk3410a4;
        ::ll::UntypedStorage<8, 24> mUnk62193b;
        ::ll::UntypedStorage<8, 24> mUnk9224aa;
        ::ll::UntypedStorage<8, 24> mUnkc75bc3;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Historical& operator=(Historical const&);
        Historical(Historical const&);
        Historical();
    };

    struct Recent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdfb54d;
        ::ll::UntypedStorage<8, 8> mUnkd49f1e;
        ::ll::UntypedStorage<8, 8> mUnkff70b9;
        ::ll::UntypedStorage<8, 8> mUnk7d9d61;
        // NOLINTEND

    public:
        // prevent constructor by default
        Recent& operator=(Recent const&);
        Recent(Recent const&);
        Recent();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                                   mLabel;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profile::Whisker::ScopeData::Recent>     mRecentFrame;
    ::ll::TypedStorage<8, 96, ::Bedrock::Profile::Whisker::ScopeData::Historical> mHistorical;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkbdef23;
    ::ll::UntypedStorage<8, 32> mUnk456e68;
    ::ll::UntypedStorage<8, 96> mUnk225a4d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScopeData& operator=(ScopeData const&);
    ScopeData(ScopeData const&);
    ScopeData();
#endif // @header-generator platform
};

} // namespace Bedrock::Profile::Whisker
