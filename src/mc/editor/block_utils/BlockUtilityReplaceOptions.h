#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityReplaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka9a2ec;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityReplaceOptions& operator=(BlockUtilityReplaceOptions const&);
    BlockUtilityReplaceOptions(BlockUtilityReplaceOptions const&);
    BlockUtilityReplaceOptions();
};

} // namespace Editor::BlockUtils::Task
#endif // @header-generator platform
