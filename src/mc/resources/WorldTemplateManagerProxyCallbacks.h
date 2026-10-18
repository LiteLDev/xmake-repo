#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplateManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mFindTemplateWithName;
    ::ll::UntypedStorage<8, 48> mFindInstalledWorldTemplateByUUID;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkf80408;
    ::ll::UntypedStorage<8, 64> mUnkcc2ce5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerProxyCallbacks& operator=(WorldTemplateManagerProxyCallbacks const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateManagerProxyCallbacks(WorldTemplateManagerProxyCallbacks const&);
#endif // @header-generator platform
    WorldTemplateManagerProxyCallbacks();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
