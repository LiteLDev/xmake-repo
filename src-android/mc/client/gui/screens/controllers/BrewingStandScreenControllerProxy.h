#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/BrewingStandScreenControllerProxyCallbacks.h"

class BrewingStandScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandScreenControllerProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BrewingStandScreenControllerProxy(::BrewingStandScreenControllerProxyCallbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BrewingStandScreenControllerProxyCallbacks);
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
