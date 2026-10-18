#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/util/DownloadState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class FileDownloadScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class FileDownloadScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // FileDownloadScreenController inner types declare
    // clang-format off
    struct RealmData;
    // clang-format on

    // FileDownloadScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RealmData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> realmID;
        ::ll::TypedStorage<8, 32, ::std::string> realmName;
        ::ll::TypedStorage<8, 32, ::std::string> realmVersion;
        ::ll::TypedStorage<8, 32, ::std::string> realmVersionName;
        ::ll::TypedStorage<8, 32, ::std::string> currentUserXuid;
        ::ll::TypedStorage<4, 4, int>            slotIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::FileDownloadScreenController::RealmData> mRealmData;
    ::ll::TypedStorage<4, 4, float>                                       mDownloadProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mContinueOnWifi;
    ::ll::TypedStorage<8, 32, ::std::string const>                        mCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                        mWifiWarningDisplaying;
    ::ll::TypedStorage<1, 1, bool>                                        mDownloadStarted;
    ::ll::TypedStorage<1, 1, bool>                                        mIsWaitingForCancel;
    ::ll::TypedStorage<4, 4, ::DownloadState>                             mDownloadState;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDownloadScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileDownloadScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     realmID,
        int                                      slotIndex,
        ::std::string const&                     realmName,
        ::std::string const&                     realmVersion,
        ::std::string const&                     realmVersionName,
        ::std::function<void(bool)>              callback
    );

    MCAPI void _startDownload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     realmID,
        int                                      slotIndex,
        ::std::string const&                     realmName,
        ::std::string const&                     realmVersion,
        ::std::string const&                     realmVersionName,
        ::std::function<void(bool)>              callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;
    // NOLINTEND
#else // @header-generator platform
    struct RealmData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
