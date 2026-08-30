#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

class PoplarTreeCanopy : public ::ITreeCanopy {
public:
    // PoplarTreeCanopy inner types declare
    // clang-format off
    struct WeightedInt;
    // clang-format on

    // PoplarTreeCanopy inner types define
    struct WeightedInt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        ::ll::TypedStorage<4, 4, int> mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                         mLeavesBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                         mBranchBlockDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<PoplarTreeCanopy::WeightedInt>> mWeightedRadius;
    ::ll::TypedStorage<4, 8, ::IntRange>                                  mHeight;
    ::ll::TypedStorage<4, 4, float>                                       mSideHoleChance;
    ::ll::TypedStorage<4, 4, int>                                         mTrunkWidth;
    // NOLINTEND
};
