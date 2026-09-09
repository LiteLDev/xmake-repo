#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/BasicToggle.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DebugScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 3, ::BasicToggle> mIsVisible;
    ::ll::TypedStorage<1, 1, bool>          mOptionEnabled;
    ::ll::TypedStorage<1, 3, ::BasicToggle> mConsoleIsShowing;
    ::ll::TypedStorage<1, 1, bool>          mDirty;
    ::ll::UntypedStorage<8, 24>             mDevConsoleOptionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DebugScreenController(std::shared_ptr<MinecraftScreenModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
