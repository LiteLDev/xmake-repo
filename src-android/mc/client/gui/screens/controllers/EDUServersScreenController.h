#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/EduRefreshType.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduResponseError.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class EDUAddServerScreenController;
class EDUPasscodeEntryScreenController;
class IContentManager;
class PlayScreenModel;
class UIPropertyBag;
struct PackManagerContentSource;
struct ScreenEvent;
namespace Json { class Value; }
// clang-format on

class EDUServersScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>> mPlayScreenModel;
    ::ll::TypedStorage<1, 1, bool> mShowNestedButtons;
    ::ll::TypedStorage<1, 1, bool> mMatchedServersNeedsRefresh;
    ::ll::TypedStorage<8, 24, std::string> mSearchString;
    ::ll::TypedStorage<8, 24, std::string> mAddServerInfoString;
    ::ll::TypedStorage<8, 24, std::string> mMostRecentlyAddedServer;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mMatchedServers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*> mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::TypedStorage<1, 1, bool> mHasInitializedServerList;
    ::ll::TypedStorage<1, 1, bool> mErrorFromRefresh;
    ::ll::TypedStorage<1, 1, bool> mIsDoneLoadingKnownServers;
    ::ll::TypedStorage<1, 1, bool> mIsDoneLoadingUnknownServers;
    ::ll::TypedStorage<1, 1, bool> mIsDoneFetchHandler;
    ::ll::TypedStorage<1, 1, bool> mNeedsRefocus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastFullServerInfoRefresh;
    ::ll::TypedStorage<8, 48, std::queue<Social::EduResponseError, std::deque<Social::EduResponseError>>> mFetchErrorQueue;
    ::ll::TypedStorage<8, 48, std::queue<Social::EduResponseError, std::deque<Social::EduResponseError>>> mAddErrorQueue;
    ::ll::TypedStorage<8, 24, std::string> mBannerErrorString;
    ::ll::TypedStorage<1, 1, bool> mPopupOpen;
    ::ll::TypedStorage<8, 24, std::string> mAddServerId;
    ::ll::TypedStorage<8, 24, std::string> mJoinServerId;
    ::ll::UntypedStorage<8, 48> mUnmatchedServers;
    ::ll::TypedStorage<8, 16, std::shared_ptr<EDUAddServerScreenController>> mAddServerScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<EDUPasscodeEntryScreenController>> mPasscodeEntryScreenController;
    ::ll::UntypedStorage<8, 88> mServersBox;
    ::ll::UntypedStorage<8, 24> mCacheFilePath;
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenController& operator=(EDUServersScreenController const&);
    EDUServersScreenController(EDUServersScreenController const&);
    EDUServersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUServersScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&);

    virtual void onOpen();

    virtual void onTerminate();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EDUServersScreenController(std::shared_ptr<PlayScreenModel>);

    MCNAPI void _closeAddServerModal();

    MCNAPI void _closePasscodeEntryModal();

    MCNAPI void _closeSharePopup();

    MCNAPI std::optional<Social::EduDedicatedServerDetails> _getServerDetails(::UIPropertyBag&) const;

    MCNAPI ulong _getTileIndex(::UIPropertyBag&) const;

    MCNAPI void _launchShareUri(std::string const&, std::string const&, std::string const&);

    MCNAPI void _refreshServerInfo(std::vector<std::string>, ::Social::EduRefreshType const&);

    MCNAPI void _requestAddServer(std::string const&);

    MCNAPI void _requestJoinServer(::Social::EduDedicatedServerDetails const&, std::string const&);

    MCNAPI void _showAddServerModal();

    MCNAPI void _showPasscodeEntryModal(::Social::EduDedicatedServerDetails const&);

    MCNAPI void cacheAddServer(std::string const&);

    MCNAPI void cacheJoinServer(std::string const&);

    MCNAPI bool getIsDoneLoadingServers() const;

    MCNAPI void setDoneFetchHandler();
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

    MCNAPI ::ui::ViewRequest $handleEvent(::ScreenEvent&);

    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
