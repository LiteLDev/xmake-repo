#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "jni.h"
#else // @header-generator platform
#endif // @header-generator platform

struct HCInitArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::_JavaVM*>  javaVM;
    ::ll::TypedStorage<8, 8, ::_jobject*> applicationContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk2ca41b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HCInitArgs& operator=(HCInitArgs const&);
    HCInitArgs(HCInitArgs const&);
    HCInitArgs();
#endif // @header-generator platform
};
