#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/MergerIndexPair.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace VoxelShapes {

class IterableIndexMerger {
public:
    // IterableIndexMerger inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct StartPoint;
#else // @header-generator platform
#endif // @header-generator platform
    struct Iterator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct StartPoint;
#endif // @header-generator platform
    // clang-format on

    // IterableIndexMerger inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct StartPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, schar> first;
        ::ll::TypedStorage<1, 1, schar> second;
        ::ll::TypedStorage<4, 4, float> coord;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct Iterator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::VoxelShapes::IterableIndexMerger const&> source;
        ::ll::TypedStorage<1, 2, ::VoxelShapes::MergerIndexPair>            indices;
        ::ll::TypedStorage<4, 4, float>                                     coord;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkb372ab;
        ::ll::UntypedStorage<1, 2> mUnk25401a;
        ::ll::UntypedStorage<4, 4> mUnkc36fe4;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ::VoxelShapes::IterableIndexMerger::Iterator& operator++();
#endif
        // NOLINTEND
    };

    struct StartPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk6e5bd0;
        ::ll::UntypedStorage<1, 1> mUnkca3eff;
        ::ll::UntypedStorage<4, 4> mUnk87f8b9;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartPoint& operator=(StartPoint const&);
        StartPoint(StartPoint const&);
        StartPoint();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<float, 12> const&>            mFirst;
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<float, 12> const&>            mSecond;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanTrimExcessOfFirst;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanTrimExcessOfSecond;
    ::ll::TypedStorage<4, 8, ::VoxelShapes::IterableIndexMerger::StartPoint const> mStart;
    ::ll::TypedStorage<1, 1, uchar>                                                mEndOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd610d5;
    ::ll::UntypedStorage<8, 8> mUnkb22d02;
    ::ll::UntypedStorage<1, 1> mUnk232ca0;
    ::ll::UntypedStorage<1, 1> mUnkf13dd0;
    ::ll::UntypedStorage<4, 8> mUnk39f5ae;
    ::ll::UntypedStorage<1, 1> mUnkbbf2f6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    IterableIndexMerger& operator=(IterableIndexMerger const&);
    IterableIndexMerger(IterableIndexMerger const&);
    IterableIndexMerger();
};

} // namespace VoxelShapes
