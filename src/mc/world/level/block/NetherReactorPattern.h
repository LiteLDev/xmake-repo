#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

class NetherReactorPattern {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 216> pattern;
#else // @header-generator platform
    ::ll::TypedStorage<8, 216, ::BlockType const* [3][3][3]> pattern;
#endif // @header-generator platform
    // NOLINTEND
};
