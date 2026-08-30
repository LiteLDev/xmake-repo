#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/utility/BasicTimer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class DeathScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mImmediateRespawn;
    ::ll::TypedStorage<1, 1, bool> mButtonsVisible;
    ::ll::TypedStorage<1, 1, bool> mRespawnButtonEnabled;
    ::ll::TypedStorage<1, 1, bool> mQuitButtonEnabled;
    ::ll::TypedStorage<1, 1, bool> mQuitButtonVisible;
    ::ll::TypedStorage<1, 1, bool> mLoadingMessageEnabled;
    ::ll::TypedStorage<1, 1, bool> mEverythingVisible;
    ::ll::TypedStorage<1, 1, bool> mForceScreenToLeave;
    ::ll::TypedStorage<1, 1, bool> mStartedBeforeDimensionReady;
    ::ll::UntypedStorage<1, 15>    mDeathInfoAvailable;
    ::ll::UntypedStorage<8, 64>    mDelayButtonDisplayTimer;
    // NOLINTEND

public:
    // prevent constructor by default
    DeathScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeathScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onDelete();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeathScreenController(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& mDelayButtonDisplayDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
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

    MCNAPI void $onDelete();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
