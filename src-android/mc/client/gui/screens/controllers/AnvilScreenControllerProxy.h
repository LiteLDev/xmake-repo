#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/AnvilScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class AnvilScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilScreenControllerProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AnvilScreenControllerProxy(::AnvilScreenControllerProxyCallbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnvilScreenControllerProxyCallbacks);
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
