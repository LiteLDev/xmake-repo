#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptRealmsStoryCompleteIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka20bfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsStoryCompleteIntermediateData& operator=(ScriptRealmsStoryCompleteIntermediateData const&);
    ScriptRealmsStoryCompleteIntermediateData(ScriptRealmsStoryCompleteIntermediateData const&);
    ScriptRealmsStoryCompleteIntermediateData();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
#endif // @header-generator platform
