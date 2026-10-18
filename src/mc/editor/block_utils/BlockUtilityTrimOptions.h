#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityTrimOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke8aabe;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityTrimOptions& operator=(BlockUtilityTrimOptions const&);
    BlockUtilityTrimOptions(BlockUtilityTrimOptions const&);
    BlockUtilityTrimOptions();
};

} // namespace Editor::BlockUtils::Task
#endif // @header-generator platform
