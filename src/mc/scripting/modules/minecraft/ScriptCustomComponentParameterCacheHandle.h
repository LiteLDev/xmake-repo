#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentParameterCacheHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mHash;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mHash;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
