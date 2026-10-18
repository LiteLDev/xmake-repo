#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/EduRefreshType.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/threading/Mutex.h"
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
namespace Social { struct EduDedicatedServerDetails; }
// clang-format on

class EDUServersScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                    mShowNestedButtons;
    ::ll::TypedStorage<1, 1, bool>                                    mMatchedServersNeedsRefresh;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                          mAddServerInfoString;
    ::ll::TypedStorage<8, 32, ::std::string>                          mMostRecentlyAddedServer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mMatchedServers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>       mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>             mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                      mContentManager;
    ::ll::TypedStorage<1, 1, bool>                                    mHasInitializedServerList;
    ::ll::TypedStorage<1, 1, bool>                                    mErrorFromRefresh;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneLoadingKnownServers;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneLoadingUnknownServers;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneFetchHandler;
    ::ll::TypedStorage<1, 1, bool>                                    mNeedsRefocus;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastFullServerInfoRefresh;
    ::ll::TypedStorage<8, 40, ::std::queue<::Social::EduResponseError, ::std::deque<::Social::EduResponseError>>>
        mFetchErrorQueue;
    ::ll::TypedStorage<8, 40, ::std::queue<::Social::EduResponseError, ::std::deque<::Social::EduResponseError>>>
                                             mAddErrorQueue;
    ::ll::TypedStorage<8, 32, ::std::string> mBannerErrorString;
    ::ll::TypedStorage<1, 1, bool>           mPopupOpen;
    ::ll::TypedStorage<8, 32, ::std::string> mAddServerId;
    ::ll::TypedStorage<8, 32, ::std::string> mJoinServerId;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string,
            ::std::string,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::std::string>>>
                                                                                     mUnmatchedServers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUAddServerScreenController>>     mAddServerScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUPasscodeEntryScreenController>> mPasscodeEntryScreenController;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::Threading::BasicLockbox<
            ::brstd::flat_map<
                ::std::string,
                ::Social::EduDedicatedServerDetails,
                ::std::less<::std::string>,
                ::std::vector<::std::string>,
                ::std::vector<::Social::EduDedicatedServerDetails>>,
            ::Bedrock::Threading::Mutex>>
                                                                 mServersBox;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mCacheFilePath;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenController& operator=(EDUServersScreenController const&);
    EDUServersScreenController(EDUServersScreenController const&);
    EDUServersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUServersScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUServersScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _closeAddServerModal();

    MCAPI void _closePasscodeEntryModal();

    MCAPI void _closeSharePopup();

    MCAPI ::std::optional<::Social::EduDedicatedServerDetails> _getServerDetails(::UIPropertyBag& bag) const;

    MCAPI void _launchShareUri(::std::string const& uri, ::std::string const& toastMsg, ::std::string const& eventName);

    MCAPI void _refreshServerInfo(::std::vector<::std::string> serverIds, ::Social::EduRefreshType const& refreshType);

    MCAPI void _requestAddServer(::std::string const& serverId);

    MCAPI void _requestJoinServer(::Social::EduDedicatedServerDetails const& details, ::std::string const& passcode);

    MCAPI void _showAddServerModal();

    MCAPI void _showFetchErrorMessage(::Social::EduResponseError& error);

    MCAPI void _showPasscodeEntryModal(::Social::EduDedicatedServerDetails const& details);
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

    MCAPI void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND
};
#else // @header-generator platform
class EDUServersScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
