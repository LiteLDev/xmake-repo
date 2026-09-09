#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/FileUploadType.h"
#include "mc/util/UploadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class FileUploadManager;
class MainMenuScreenModel;
namespace Realms { struct World; }
// clang-format on

class FileUploadScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mRealmID;
    ::ll::TypedStorage<4, 4, int>                                 mSlotIndex;
    ::ll::TypedStorage<8, 24, std::string>                        mFileID;
    ::ll::TypedStorage<1, 1, bool>                                mNeedArchiving;
    ::ll::TypedStorage<4, 4, float>                               mUploadProgress;
    ::ll::TypedStorage<1, 1, bool>                                mContinueOnWifi;
    ::ll::TypedStorage<8, 24, std::string const>                  mCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                mWifiWarningDisplaying;
    ::ll::TypedStorage<1, 1, bool>                                mUploadStarted;
    ::ll::TypedStorage<4, 4, ::UploadState>                       mUploadState;
    ::ll::TypedStorage<1, 1, bool>                                mPostUploadRefreshCompleted;
    ::ll::UntypedStorage<4, 12>                                   mFileUploadType;
    ::ll::UntypedStorage<8, 48>                                   mCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FileUploadManager>> mFileUploadManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FileUploadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileUploadScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual std::string getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileUploadScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        std::string const&,
        int,
        bool,
        ::Core::FileUploadType,
        std::function<void(UploadState, Realms::World)>
    );

    MCNAPI void _displayPostUploadErrorPopup();

    MCNAPI void _startUpload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        std::string const&,
        int,
        bool,
        ::Core::FileUploadType,
        std::function<void(UploadState, Realms::World)>
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

    MCNAPI void $onOpen();

    MCNAPI std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
