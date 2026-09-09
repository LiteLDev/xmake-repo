#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/DlcProgressState.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class DlcProgressScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel&>  mDlcBatch;
    ::ll::UntypedStorage<4, 16>                  mLastActiveImportIndex;
    ::ll::UntypedStorage<8, 48>                  mOnCompleteCallback;
    ::ll::TypedStorage<1, 1, bool>               mLeaveScreen;
    ::ll::TypedStorage<1, 1, bool>               mShowCloseButton;
    ::ll::TypedStorage<1, 1, bool>               mProcessingUpdates;
    ::ll::TypedStorage<1, 1, bool>               mDisableExitWhileInProgress;
    ::ll::TypedStorage<8, 8, long>               mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, long const>         mProgressMessageInterval;
    ::ll::TypedStorage<4, 4, ::DlcProgressState> mProgressState;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcProgressScreenController& operator=(DlcProgressScreenController const&);
    DlcProgressScreenController(DlcProgressScreenController const&);
    DlcProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcProgressScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual bool canExit();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcProgressScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::vector<DlcId> const&,
        std::function<void(bool, bool)>,
        bool,
        bool,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::vector<DlcId> const&,
        std::function<void(bool, bool)>,
        bool,
        bool,
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

    MCNAPI bool $canExit();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
