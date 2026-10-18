#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class BlockAdjacencyItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb45b21;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAdjacencyItem& operator=(BlockAdjacencyItem const&);
    BlockAdjacencyItem(BlockAdjacencyItem const&);
    BlockAdjacencyItem();
};

} // namespace Editor
#endif // @header-generator platform
