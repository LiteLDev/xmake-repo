#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/FurnaceScreenControllerProxyCallbacks.h"

class FurnaceScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceScreenControllerProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FurnaceScreenControllerProxy(::FurnaceScreenControllerProxyCallbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FurnaceScreenControllerProxyCallbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
