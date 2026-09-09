#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/ITrait.h"
#include "mc/world/level/block/traits/block_trait/MultiBlockPlacementDirectionBehavior.h"

namespace BlockTrait {

class MultiBlock : public ::BlockTrait::ITrait {
public:
    // MultiBlock inner types declare
    // clang-format off
    struct EnabledStates;
    // clang-format on

    // MultiBlock inner types define
    struct EnabledStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mEnableMultiBlockState;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlock::EnabledStates>            mStates;
    ::ll::TypedStorage<1, 1, uchar>                                              mDirection;
    ::ll::TypedStorage<1, 1, uchar>                                              mPartCount;
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlockPlacementDirectionBehavior> mPlacementBehavior;
    // NOLINTEND
};

} // namespace BlockTrait
