#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/WorldTemplateManagerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class WorldTemplateManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 96> mCallbacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnk812f17;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateManagerProxy& operator=(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy(WorldTemplateManagerProxy const&);
#endif // @header-generator platform
    WorldTemplateManagerProxy();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTemplateManagerProxy(::WorldTemplateManagerProxyCallbacks const&);

    MCNAPI ~WorldTemplateManagerProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateManagerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
