#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorInitParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mEnableNetworkMetrics;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkc9607b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EditorInitParams& operator=(EditorInitParams const&);
    EditorInitParams(EditorInitParams const&);
    EditorInitParams();
#endif // @header-generator platform
};

} // namespace Editor
