#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
