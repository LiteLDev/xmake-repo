#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AbstractSceneProxyCallbacks.h"

class AbstractSceneProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractSceneProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AbstractSceneProxy(::AbstractSceneProxyCallbacks const&);

    MCNAPI ~AbstractSceneProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
