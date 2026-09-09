#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/components/SupportShape.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SupportShape> mShape;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSupportComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _stairSupportCheck(::Block const&, uchar);

    MCNAPI static bool canProvideFullSupport(::Block const&, uchar, bool);

    MCNAPI static bool canProvideSupport(::Block const&, uchar, ::BlockSupportType);
    // NOLINTEND
};
