#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/HowToPlayScreenControllerProxyCallbacks.h"

class HowToPlayScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    HowToPlayScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HowToPlayScreenControllerProxy();
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/HowToPlayScreenControllerProxyCallbacks.h"

class HowToPlayScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::HowToPlayScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HowToPlayScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class HowToPlayScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
