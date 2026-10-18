#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityShrinkWrapOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk362c61;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityShrinkWrapOptions& operator=(BlockUtilityShrinkWrapOptions const&);
    BlockUtilityShrinkWrapOptions(BlockUtilityShrinkWrapOptions const&);
    BlockUtilityShrinkWrapOptions();
};

} // namespace Editor::BlockUtils::Task
#endif // @header-generator platform
