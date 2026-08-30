#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/StorageManagementScreenData.h"
#include "mc/client/gui/screens/controllers/StorageManagementViews.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class IResourcePackRepository;
class IStorageManagementModel;
class LegacyWorldConverter;
class MainMenuScreenModel;
class StorageDependencyScreenController;
class StorageManagementScreenControllerProxy;
struct ContentItem;
struct ImportResult;
struct LegacyWorldInfo;
// clang-format on

class StorageManagementScreenController : public ::MainMenuScreenController {
public:
    // StorageManagementScreenController inner types define
    enum class ConvertProgressState : int {
        Closed   = 0,
        Active   = 1,
        TryClose = 2,
    };

    using ConvertStateCallback = std::function<LoadingState()>;

    using ConvertProgressHandlerCallback = std::function<float()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager*>                                      mContentManager;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                         mReloadFlag;
    ::ll::TypedStorage<8, 16, std::weak_ptr<StorageDependencyScreenController>>       mDependencyScreenController;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StorageManagementScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<1, 1, bool>                                                    mShowDeleteModal;
    ::ll::TypedStorage<1, 1, bool>                                                    mShowDeleteLocalScreenshotsModal;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsLegacyWorldTabExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                    mLegacySyncOnly;
    ::ll::TypedStorage<4, 4, ::StorageManagementScreenController::ConvertProgressState>  mProgressScreenState;
    ::ll::TypedStorage<8, 8, ::LegacyWorldConverter&>                                    mLegacyWorldConverter;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IStorageManagementModel>>> mModel;
    ::ll::TypedStorage<8, 144, ::StorageManagementViews>                                 mViews;
    ::ll::UntypedStorage<1, 16>                                                          mData;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenController& operator=(StorageManagementScreenController const&);
    StorageManagementScreenController(StorageManagementScreenController const&);
    StorageManagementScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagementScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageManagementScreenController(std::shared_ptr<MainMenuScreenModel>, ::IContentManager&, bool);

    MCNAPI void _convertLegacyWorld(::LegacyWorldInfo const&);

    MCNAPI std::string _getLegacyWorldsSize(uint, ulong);

    MCNAPI ::StorageManagementScreenControllerProxy* getStorageManagementScreenControllerProxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _deleteResources(::IStorageManagementModel&, ::StorageManagementViews&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const&
    SECONDS_BEFORE_CLIENT_SHOULD_CLOSE_PROGRESS_HANDLER();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const&
    SECONDS_BEFORE_USER_CAN_CANCEL_OUT_OF_PROGRESS_HANDLER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::IContentManager&, bool);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
