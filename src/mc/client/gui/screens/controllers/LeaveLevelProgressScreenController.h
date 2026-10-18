#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ProgressHandler;
namespace Json { class Value; }
// clang-format on

class LeaveLevelProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mNext;
    ::ll::TypedStorage<1, 1, bool> mForceRenderBelow;
    ::ll::TypedStorage<8, 24, std::string> mCalledFrom;
    ::ll::TypedStorage<8, 8, long> mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, long const> mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProgressHandler>> mProgressHandler;
    ::ll::TypedStorage<8, 48, std::deque<std::unique_ptr<ProgressHandler>>> mProgressHandlerList;
    ::ll::TypedStorage<1, 1, bool> mHasTicked;
    ::ll::TypedStorage<1, 1, bool> mPostInitEventFired;
    ::ll::TypedStorage<1, 1, bool> mRunStandaloneProgressHandler;
    ::ll::TypedStorage<1, 1, bool> mShouldExitScreen;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mEduCloudUploadFinishTime;
    ::ll::TypedStorage<1, 1, bool> mEduCloudUploadTimerActive;
    ::ll::TypedStorage<1, 1, bool> mEduCloudConflictPopupShown;
    ::ll::TypedStorage<1, 1, bool> mQueueCloudDownload;
    ::ll::TypedStorage<8, 8, long> mLastSaved;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveLevelProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LeaveLevelProgressScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onReload();

    virtual void onLeave();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LeaveLevelProgressScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>,
        bool const,
        bool
    );

    MCNAPI void _closeEduCloudConflictPopup();

    MCNAPI void _showEduCloudConflictPopup();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mHasShownVRControlScreen();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>,
        bool const,
        bool
    );
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

    MCNAPI void $onReload();

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $_getButtonADescription();
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
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ProgressHandler;
namespace Json { class Value; }
// clang-format on

class LeaveLevelProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mNext;
    ::ll::TypedStorage<1, 1, bool>                                                mForceRenderBelow;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mCalledFrom;
    ::ll::TypedStorage<8, 8, int64>                                               mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, int64 const>                                         mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>>                mProgressHandler;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ProgressHandler>>> mProgressHandlerList;
    ::ll::TypedStorage<1, 1, bool>                                                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                                                mPostInitEventFired;
    ::ll::TypedStorage<1, 1, bool>                                                mRunStandaloneProgressHandler;
    ::ll::TypedStorage<1, 1, bool>                                                mShouldExitScreen;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mEduCloudUploadFinishTime;
    ::ll::TypedStorage<1, 1, bool>                                                mEduCloudUploadTimerActive;
    ::ll::TypedStorage<1, 1, bool>                                                mEduCloudConflictPopupShown;
    ::ll::TypedStorage<1, 1, bool>                                                mQueueCloudDownload;
    ::ll::TypedStorage<8, 8, int64>                                               mLastSaved;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveLevelProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LeaveLevelProgressScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onReload() /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LeaveLevelProgressScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressInterfaces,
        bool                                               loadAssets,
        bool                                               forceRenderBelow
    );

    MCAPI void _closeEduCloudConflictPopup();

    MCAPI bool _exitingErrorScreen() const;

    MCAPI ::std::chrono::milliseconds const _getEduCloudIsDoneInterval() const;

    MCAPI void _showEduCloudConflictPopup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressInterfaces,
        bool                                               loadAssets,
        bool                                               forceRenderBelow
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI void $onLeave();

    MCAPI void $onReload();

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND
};
#else // @header-generator platform
class LeaveLevelProgressScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
