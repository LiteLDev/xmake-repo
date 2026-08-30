#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/realms/DeletionStatus.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/StatusGroup.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/client/services/clubs/ReportedItem.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Clubs { struct FeedItem; }
namespace Core { class FileSystem; }
namespace Realms::Stories { class FacetStateManager; }
namespace Realms::Stories { class RealmEvent; }
namespace Social { class IUserManager; }
// clang-format on

namespace Realms::Stories {

class RealmsFeedModeration {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int const> REPORTS_PER_PAGE;
    ::ll::TypedStorage<8, 8, double> mLastTimestampMs;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::UntypedStorage<8, 24> mFileSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesManager;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<Clubs::ReportedItem>> mReportedFeed;
    ::ll::TypedStorage<4, 4, int> mStoryFeedPageStart;
    ::ll::TypedStorage<4, 4, int> mStoryFeedPageEnd;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus> mStoryFeedStatus;
    ::ll::UntypedStorage<8, 32> mStoryFetchStatusGroup;
    ::ll::TypedStorage<1, 1, bool> mReportFeedDirty;
    ::ll::TypedStorage<1, 1, bool> mFeedEmpty;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::DeletionStatus> mDeletedStatus;
    ::ll::TypedStorage<8, 24, std::map<std::string, Core::Path>> mStoryImagePaths;
    ::ll::UntypedStorage<8, 32> mFetchStoryImageStatusGroup;
    ::ll::TypedStorage<4, 40, std::mutex> mStoryImagesMutex;
    ::ll::UntypedStorage<8, 32> mDeleteStatusGroup;
    ::ll::UntypedStorage<8, 32> mReportToXboxStatusGroup;
    ::ll::TypedStorage<8, 24, std::string> mCurrentStoryId;
    ::ll::UntypedStorage<8, 88> mNotifyRealmsFeedModerationStateUpdated;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mStoryFetchTimes;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRequestTimeLimit;
    ::ll::TypedStorage<1, 1, bool> mRegenerateAfterFail;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFeedModeration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsFeedModeration(
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        std::shared_ptr<Realms::Stories::FacetStateManager>
    );

    MCNAPI ::Clubs::FeedItem* _getFeedItemPtr(std::string const&);

    MCNAPI ::Clubs::ReportedItem* _getReportItemPtr(std::string const&);

    MCNAPI void clearDeletionStatuses();

    MCNAPI void clearReportStatuses(std::string const&);

    MCNAPI void clearStoryFeedStatus();

    MCNAPI void deleteFeedItem(std::string const&);

    MCNAPI void fetchReportedItemPaths();

    MCNAPI void fetchStoryImage(std::string const&);

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getDeleteStatusGroup();

    MCNAPI ::Clubs::ReportedItem& getFeedItem(int const);

    MCNAPI int getFeedSize() const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::FetchStatus> const& getFetchReportStatusGroup() const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::FetchStatus>& getFetchStoryImageStatusGroup();

    MCNAPI ::Realms::Stories::DeletionStatus getHasNowDeletedStatus() const;

    MCNAPI int getPageLength() const;

    MCNAPI ::Realms::Stories::RealmEvent const* getRealmEvent(std::string) const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getReportToXboxStatusGroup();

    MCNAPI int getStoryFeedPageEnd() const;

    MCNAPI int getStoryFeedPageStart() const;

    MCNAPI ::Realms::Stories::FetchStatus getStoryFeedStatus() const;

    MCNAPI std::map<std::string, Core::Path> const& getStoryImagePaths();

    MCNAPI int getTotalStoryFeedStories() const;

    MCNAPI void ignoreFeedItem(std::string const&, std::string const);

    MCNAPI void loadReportsSlice(int, int);

    MCNAPI ::Bedrock::PubSub::Subscription registerRealmsFeedModerationStateListener(std::function<void(bool)>);

    MCNAPI void reportFeedItemToXbox(std::string const&, std::string const&, std::string const&);

    MCNAPI void reportGamertagToXbox(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void reset();

    MCNAPI void resetFailedFeedItem(int const);

    MCNAPI void update(double);

    MCNAPI ~RealmsFeedModeration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        std::shared_ptr<Realms::Stories::FacetStateManager>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms::Stories
