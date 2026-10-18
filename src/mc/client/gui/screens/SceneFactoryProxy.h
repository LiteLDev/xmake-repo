#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactoryProxyCallbacks.h"

class SceneFactoryProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 960, ::SceneFactoryProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactoryProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SceneFactoryProxy(::SceneFactoryProxyCallbacks const&);

    MCNAPI ~SceneFactoryProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SceneFactoryProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactoryProxyCallbacks.h"

class SceneFactoryProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1280, ::SceneFactoryProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class SceneFactoryProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
