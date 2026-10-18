#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/ScreenControllerProxyType.h"

class CodeScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenControllerProxy() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"

class CodeScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class CodeScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
