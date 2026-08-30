#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace ClientBlockPipeline {

struct PackedPosition {
public:
    // member variables
    // NOLINTBEGIN
    uchar x : 5;
    uchar y : 5;
    uchar z : 5;
    // NOLINTEND

public:
    // prevent constructor by default
    PackedPosition& operator=(PackedPosition const&);
    PackedPosition();
};

} // namespace ClientBlockPipeline
