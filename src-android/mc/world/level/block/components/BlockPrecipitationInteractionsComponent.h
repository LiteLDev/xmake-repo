#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/PrecipitationBehavior.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockPrecipitationInteractionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PrecipitationBehavior> mBehavior;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool accumulatesSnow(::Block const&);

    MCNAPI static bool isSnowLoggable(::Block const&);

    MCNAPI static bool obstructsPrecipitation(::Block const&);
    // NOLINTEND
};
