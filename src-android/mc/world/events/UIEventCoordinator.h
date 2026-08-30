#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

class UIEventCoordinator : public ::EventCoordinator<UIEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendPoppedScreen(::AbstractScene&);

    MCNAPI void sendPushedScreen(::AbstractScene&);
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
