#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class PlayScreenModel;
class UIPropertyBag;
class WorldsClipboardScreenController;
struct LevelSummary;
struct LocalWorldInfo;
struct PackManagerContentSource;
struct WorldsClipboardCallbacks;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Json { class Value; }
// clang-format on

class EDUWorldsScreenController : public ::SettingsScreenControllerBase {
public:
    // EDUWorldsScreenController inner types define
    enum StartWorldCaller : uint {
        Play     = 0,
        Host     = 1,
        Download = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>                 mPlayScreenModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldsClipboardScreenController>> mWorldsClipboardScreenController;
    ::ll::UntypedStorage<8, 24>                                                 mEduCloudSaveSystem;
    ::ll::TypedStorage<1, 1, bool>                                              mManageActive;
    ::ll::TypedStorage<1, 1, bool>                                              mMatchedWorldsNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                                              mPlaceholderSelected;
    ::ll::TypedStorage<1, 1, bool>                                              mChangingScreen;
    ::ll::TypedStorage<1, 1, bool>                                              mHandlingConflict;
    ::ll::TypedStorage<1, 1, bool>                                              mSkipNextFetch;
    ::ll::TypedStorage<1, 1, bool>                                              mWaitingOnWorldCloudChecks;
    ::ll::TypedStorage<1, 1, bool>                                              mWaitingOnSettingsCloudChecks;
    ::ll::TypedStorage<8, 24, std::string>                                      mSearchString;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                               mMatchedWorlds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>>                     mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                       mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                mContentManager;
    ::ll::UntypedStorage<4, 16>                                                 mLastSelectedWorldIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldsScreenController& operator=(EDUWorldsScreenController const&);
    EDUWorldsScreenController(EDUWorldsScreenController const&);
    EDUWorldsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual void onReload();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void onEntering();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EDUWorldsScreenController(std::shared_ptr<PlayScreenModel>);

    MCNAPI void _closeEduCloudConflictPopup(bool);

    MCNAPI ulong _getTileIndex(::UIPropertyBag&) const;

    MCNAPI void _openWorldSettings(::LocalWorldInfo*);

    MCNAPI void _openWorldSettings(std::string const&);

    MCNAPI void _showEduCloudConflictPopup();

    MCNAPI void _startWorld(::LocalWorldInfo*, ::EDUWorldsScreenController::StartWorldCaller);

    MCNAPI void _startWorld(std::string const&, ::EDUWorldsScreenController::StartWorldCaller);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>);
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

    MCNAPI void $onReload();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $onEntering();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
