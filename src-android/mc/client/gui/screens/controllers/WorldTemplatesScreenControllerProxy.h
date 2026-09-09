#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/WorldTemplatesScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

class WorldTemplatesScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatesScreenControllerProxy();
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
