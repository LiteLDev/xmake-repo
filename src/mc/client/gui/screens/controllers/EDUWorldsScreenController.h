#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
struct LocalWorldInfo;
struct PackManagerContentSource;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Json { class Value; }
// clang-format on

class EDUWorldsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
class EDUWorldsScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // EDUWorldsScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class StartWorldCaller : int {
        Play     = 0,
        Host     = 1,
        Download = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                 mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldsClipboardScreenController>> mWorldsClipboardScreenController;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem>> mEduCloudSaveSystem;
    ::ll::TypedStorage<1, 1, bool>                                                         mManageActive;
    ::ll::TypedStorage<1, 1, bool>                                                         mMatchedWorldsNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                         mPlaceholderSelected;
    ::ll::TypedStorage<1, 1, bool>                                                         mChangingScreen;
    ::ll::TypedStorage<1, 1, bool>                                                         mHandlingConflict;
    ::ll::TypedStorage<1, 1, bool>                                                         mSkipNextFetch;
    ::ll::TypedStorage<1, 1, bool>                                                         mWaitingOnWorldCloudChecks;
    ::ll::TypedStorage<1, 1, bool>                              mWaitingOnSettingsCloudChecks;
    ::ll::TypedStorage<8, 32, ::std::string>                    mSearchString;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mMatchedWorlds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>       mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                mContentManager;
    ::ll::TypedStorage<4, 4, int>                               mLastSelectedWorldIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldsScreenController& operator=(EDUWorldsScreenController const&);
    EDUWorldsScreenController(EDUWorldsScreenController const&);
    EDUWorldsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldsScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onEntering() /*override*/;

    virtual void onReload() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUWorldsScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _closeEduCloudConflictPopup(bool keepLocal);

    MCAPI void _openWorldSettings(::std::string const& levelId);

    MCAPI void _openWorldSettings(::LocalWorldInfo* worldInfo);

    MCAPI void _registerBindings();

    MCAPI void _registerControllerCallbacks();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();

    MCAPI void _showEduCloudConflictPopup();

    MCAPI void _startWorld(::std::string const& levelId, ::EDUWorldsScreenController::StartWorldCaller caller);

    MCAPI void _startWorld(::LocalWorldInfo* worldInfo, ::EDUWorldsScreenController::StartWorldCaller caller);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 _getTileIndex(::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onEntering();

    MCAPI void $onReload();

    MCFOLD void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
#else // @header-generator platform
    enum class StartWorldCaller : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
