#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbca24a;
    ::ll::UntypedStorage<8, 24> mUnkb18194;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityManifest& operator=(BlockUtilityManifest const&);
    BlockUtilityManifest(BlockUtilityManifest const&);
    BlockUtilityManifest();
};

} // namespace Editor::BlockUtils::Task
#endif // @header-generator platform
