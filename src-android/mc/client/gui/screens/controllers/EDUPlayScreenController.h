#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/library/EduDeeplinkObserver.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class JoincodeEntryScreenController;
class PlayScreenModel;
// clang-format on

class EDUPlayScreenController : public ::MainMenuScreenController, public ::EduDeeplinkObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mJoincode;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                     mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                              mWasDedicatedServerEnabled;
    ::ll::TypedStorage<1, 1, bool>                              mPollingForDedicatedServerStatus;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>> mPlayScreenModel;
    ::ll::UntypedStorage<8, 24>                                 mJoincodeScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPlayScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;

    virtual void onEntered();

    virtual bool onJoincodeReceived(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EDUPlayScreenController(std::shared_ptr<PlayScreenModel>, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>, std::string);
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

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onEntered();

    MCNAPI bool $onJoincodeReceived(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
