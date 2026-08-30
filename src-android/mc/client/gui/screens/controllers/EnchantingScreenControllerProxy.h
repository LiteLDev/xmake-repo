#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/EnchantingScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class EnchantingScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingScreenControllerProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnchantingScreenControllerProxy(::EnchantingScreenControllerProxyCallbacks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EnchantingScreenControllerProxyCallbacks&);
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
