#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityFindObscuredOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk20a092;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityFindObscuredOptions& operator=(BlockUtilityFindObscuredOptions const&);
    BlockUtilityFindObscuredOptions(BlockUtilityFindObscuredOptions const&);
    BlockUtilityFindObscuredOptions();
};

} // namespace Editor::BlockUtils::Task
#endif // @header-generator platform
