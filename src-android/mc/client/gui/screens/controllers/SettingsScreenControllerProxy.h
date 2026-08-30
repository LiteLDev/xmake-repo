#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class WorldSettingsScreenControllerProxy;
struct ToggleChangeEventData;
// clang-format on

class SettingsScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenControllerProxy();
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
