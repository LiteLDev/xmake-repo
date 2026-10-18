#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct BlockCullingData {
public:
    // BlockCullingData inner types declare
    // clang-format off
    struct CullingRule;
    // clang-format on

    // BlockCullingData inner types define
    struct CullingRule {
    public:
        // CullingRule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // CullingRule inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum Condition : uchar {
            SameCullingLayer     = 0,
            SameBlock            = 1,
            SameBlockPermutation = 2,
        };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class Condition : uchar {
            SameCullingLayer     = 0,
            SameBlock            = 1,
            SameBlockPermutation = 2,
        };
#else // @header-generator platform
        enum class Condition : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string> mBoneName;
            ::ll::TypedStorage<4, 4, int>          mCubeIndex;
            ::ll::TypedStorage<1, 1, uchar>        mFaceToCull;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                   mNeighborToCheck;
        ::ll::TypedStorage<1, 2, std::optional<BlockCullingData::CullingRule::Condition>> mCondition;
        ::ll::TypedStorage<1, 1, bool>                                                    mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<8, 32, ::BlockCullingData::CullingRule::GeometryPart>          mGeometryPart;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::std::string> mBoneName;
            ::ll::TypedStorage<4, 4, int>            mCubeIndex;
            ::ll::TypedStorage<1, 1, uchar>          mFaceToCull;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                       mNeighborToCheck;
        ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCondition;
        ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<8, 40, ::BlockCullingData::CullingRule::GeometryPart>              mGeometryPart;
        // NOLINTEND
#else // @header-generator platform
        struct GeometryPart {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<BlockCullingData::CullingRule>> mCullingRules;
    ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming>        mLoadTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockCullingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mCullIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCullingData::CullingRule>> mCullingRules;
    ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming>            mLoadTime;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
