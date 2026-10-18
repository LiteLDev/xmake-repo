#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackedPosition {
public:
    // member variables
    // NOLINTBEGIN
    uchar x : 5;
    uchar y : 5;
    uchar z : 5;
    // NOLINTEND
};
#else // @header-generator platform
struct PackedPosition {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
