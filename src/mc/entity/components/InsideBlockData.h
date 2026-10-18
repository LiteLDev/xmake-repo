#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct InsideBlockData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mPos;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk9ba70a;
    ::ll::UntypedStorage<8, 8>  mUnk114996;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockData& operator=(InsideBlockData const&);
    InsideBlockData(InsideBlockData const&);
    InsideBlockData();
};
