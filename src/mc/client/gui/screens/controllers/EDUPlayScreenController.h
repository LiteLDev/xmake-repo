#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::std::string>                                      mJoincode;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                       mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                mWasDedicatedServerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mPollingForDedicatedServerStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>               mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::JoincodeEntryScreenController>> mJoincodeScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPlayScreenController() /*override*/ = default;

    virtual void onEntered() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual bool onJoincodeReceived(::std::string const& encodedJoincode) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUPlayScreenController(::std::shared_ptr<::PlayScreenModel> model, ::std::string encodedJoincode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model, ::std::string encodedJoincode);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onEntered();

    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI bool $onJoincodeReceived(::std::string const& encodedJoincode);
    // NOLINTEND
};
#else // @header-generator platform
class EDUPlayScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
