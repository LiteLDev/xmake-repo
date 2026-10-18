#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct BlockCollisionEvaluationQueueComponent {
public:
    // BlockCollisionEvaluationQueueComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // BlockCollisionEvaluationQueueComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPos;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnk683b92;
        ::ll::UntypedStorage<4, 4>  mUnk4793ea;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockCollisionEvaluationQueueComponent::Data>> mToEvaluate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCollisionEvaluationQueueComponent::Data>> mToEvaluate;
#endif // @header-generator platform
    // NOLINTEND
};
