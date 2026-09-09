#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/messaging/InboxCategoryData.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class AnnouncementSurface;
class ButtonArtSurface;
class ContentCatalogService;
class DateManager;
class GuiData;
class InboxSurface;
class PlayerMessagingServiceCache;
class PlayerMessagingServiceInteractionQueue;
class PlayerMessagingServiceSession;
class SystemWhisperSurface;
class ToastAnnouncementSurface;
struct InboxSettingsData;
struct MessageServiceInteraction;
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
namespace Social { class IUserManager; }
namespace Social { class User; }
// clang-format on

class PlayerMessagingService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mDateManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>> mContentCatalogService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayerMessagingServiceInteractionQueue>> mInteractionQueue;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayerMessagingServiceSession>> mSession;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerMessagingServiceCache>> mCacheManager;
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<8, 24, std::map<std::pair<std::string, std::string>, MessageData>> mMessages;
    ::ll::TypedStorage<1, 1, bool> mFoundMarketplaceButtonArt;
    ::ll::TypedStorage<1, 1, bool> mFoundPlayButtonArt;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastMessageUpdate;
    ::ll::UntypedStorage<8, 88> mNewMessagePublisher;
    ::ll::UntypedStorage<8, 88> mImageLoadedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentMonitorSubscription;
    ::ll::UntypedStorage<8, 88> mInboxSettingsLoadedPublisher;
    ::ll::UntypedStorage<8, 88> mCategoriesLoadedPublisher;
    ::ll::UntypedStorage<8, 88> mCategoryImageLoadedPublisher;
    ::ll::UntypedStorage<8, 88> mCategoryContinuationChangedPublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AnnouncementSurface>> mLoginAnnouncementSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AnnouncementSurface>> mMarketplaceAnnouncementSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ButtonArtSurface>> mMarketplaceButtonArtSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ButtonArtSurface>> mPlayButtonArtSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InboxSurface>> mInboxSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ToastAnnouncementSurface>> mToastAnnouncementSurface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SystemWhisperSurface>> mSystemWhisperSurface;
    ::ll::TypedStorage<1, 1, bool> mDependenciesReady;
    ::ll::TypedStorage<1, 1, bool> mDoReset;
    ::ll::TypedStorage<1, 1, bool> mForceReset;
    ::ll::TypedStorage<8, 24, std::string> mlastLoginPlayFabId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserSignOutSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLanguageChangeSubscription;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerMessagingService();

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::string const&) const;

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerMessagingService(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const
    );

    MCNAPI ::Bedrock::Threading::Async<std::string> _getAuthorizationHeader() const;

    MCNAPI bool _resetSession();

    MCNAPI void activatePlayerSafetySessionRefreshWindow();

    MCNAPI bool areDependenciesReady();

    MCNAPI std::map<std::pair<std::string, std::string>, MessageData> const& getAnnouncementMessages() const;

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getCachePath() const;

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::vector<InboxCategoryData>&)>& getCategoriesLoadedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::string&, const std::string&)>&
    getCategoryContinuationChangedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::string&, const Core::Path&)>& getCategoryImageLoadedConnector();

    MCNAPI std::string getHostUrl() const;

    MCNAPI ::Bedrock::PubSub::Connector<void(const InboxSettingsData&)>& getInboxSettingsLoadedConnector();

    MCNAPI ::Bedrock::NonOwnerPointer<InboxSurface> getInboxSurface() const;

    MCNAPI ::Bedrock::NonOwnerPointer<AnnouncementSurface> getLoginAnnouncementSurface() const;

    MCNAPI ::Bedrock::NonOwnerPointer<AnnouncementSurface> getMarketplaceAnnouncementSurface() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ButtonArtSurface> getMarketplaceButtonArtSurface() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ButtonArtSurface> getPlayButtonArtSurface() const;

    MCNAPI ::PlayerMessagingServiceSession& getSession() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ToastAnnouncementSurface> getToastAnnouncementSurface() const;

    MCNAPI void handleInboxJson(::Json::Value const&);

    MCNAPI void handleMessagesJson(::Json::Value const&);

    MCNAPI void handleRetrieveMessagesJson(std::string const&, ::Json::Value const&);

    MCNAPI bool isSessionFailed() const;

    MCNAPI bool isSessionStarted() const;

    MCNAPI bool isSessionValid() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerImageLoadedListener(
        std::function<
            void(const std::string&, const std::string&, const std::string&, const Core::Path&, const Core::Path&)>
    );

    MCNAPI ::Bedrock::PubSub::Subscription registerListener(std::function<void(std::vector<MessageData>&)>);

    MCNAPI void reportInteraction(std::unique_ptr<MessageServiceInteraction>&&);

    MCNAPI bool shouldSuppressAnnouncements() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const
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
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthorizationHeader(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<std::string>
    $getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
