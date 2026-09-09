#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/util/DownloadError.h"
#include "mc/util/DownloadState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class FileDownloadScreenController : public ::MainMenuScreenController {
public:
    // FileDownloadScreenController inner types declare
    // clang-format off
    struct RealmData;
    // clang-format on

    // FileDownloadScreenController inner types define
    struct RealmData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> realmID;
        ::ll::TypedStorage<8, 24, std::string> realmName;
        ::ll::TypedStorage<8, 24, std::string> realmVersion;
        ::ll::TypedStorage<8, 24, std::string> realmVersionName;
        ::ll::TypedStorage<8, 24, std::string> currentUserXuid;
        ::ll::TypedStorage<4, 4, int>          slotIndex;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RealmData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::FileDownloadScreenController::RealmData> mRealmData;
    ::ll::TypedStorage<4, 4, float>                                       mDownloadProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mContinueOnWifi;
    ::ll::TypedStorage<8, 24, std::string const>                          mCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                        mWifiWarningDisplaying;
    ::ll::TypedStorage<1, 1, bool>                                        mDownloadStarted;
    ::ll::TypedStorage<1, 1, bool>                                        mIsWaitingForCancel;
    ::ll::UntypedStorage<4, 4>                                            mDownloadState;
    ::ll::UntypedStorage<8, 48>                                           mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDownloadScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual std::string getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileDownloadScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        int const,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(bool)>
    );

    MCNAPI void _startDownload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        int const,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(bool)>
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

    MCNAPI std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
