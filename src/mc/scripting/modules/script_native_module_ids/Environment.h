#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptNativeModuleIds {

struct Environment {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::TypedStorage<1, 1, bool> mIsPublish;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk173fe3;
    ::ll::UntypedStorage<1, 1> mUnkef7eb7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Environment& operator=(Environment const&);
    Environment(Environment const&);
    Environment();
#endif // @header-generator platform
};

} // namespace ScriptNativeModuleIds
