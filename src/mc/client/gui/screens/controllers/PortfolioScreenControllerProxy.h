#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/PortfolioScreenControllerProxyCallbacks.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct PhotoRecord;
namespace Core { class Path; }
// clang-format on

class PortfolioScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 432> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortfolioScreenControllerProxy();
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
#include "mc/client/gui/screens/controllers/PortfolioScreenControllerProxyCallbacks.h"

class PortfolioScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 576, ::PortfolioScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortfolioScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class PortfolioScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
