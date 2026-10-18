#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/OptInState.h"
#include "mc/client/network/realms/RealmEvent.h"
#include "mc/client/network/realms/Session.h"
#include "mc/client/network/realms/StoriesSettings.h"
#include "mc/client/realms/MemberFilterOption.h"
#include "mc/client/realms/MemberSortOption.h"
#include "mc/client/realms/Player.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/RealmStoriesPlayerRole.h"
#include "mc/client/realms/StatusGroup.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/client/services/clubs/ActivityFeed.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Clubs { struct FeedItem; }
namespace Core { class FileSystem; }
namespace Realms { struct World; }
namespace Realms::Stories { class RealmEventsManager; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
class FacetStateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                               mTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::World>>             mCurrentRealmWorld;
    ::ll::TypedStorage<1, 1, bool>                                        mFetchingRealmWorld;
    ::ll::TypedStorage<1, 1, bool>                                        mStoryDataDirty;
    ::ll::TypedStorage<8, 56, ::Clubs::ActivityFeed>                      mStoryFeed;
    ::ll::TypedStorage<4, 4, int>                                         mStoryFeedPageStart;
    ::ll::TypedStorage<4, 4, int>                                         mStoryFeedPageEnd;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>              mStoryFeedStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mHasFetchedStoryFeedOnce;
    ::ll::TypedStorage<1, 1, bool>                                        mStoryFeedFirstPageReady;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mStoryFeedMutex;
    ::ll::TypedStorage<8, 24, std::map<std::string, Core::Path>>          mStoryImagePaths;
    ::ll::UntypedStorage<8, 32>                                           mFetchStoryImageStatusGroup;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mStoryImagesMutex;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>               mPostStoryStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mStoryFeedDirty;
    ::ll::TypedStorage<4, 4, int>                                         mUnreadStoryCount;
    ::ll::TypedStorage<1, 1, bool>                                        mUnreadStoryCountDirty;
    ::ll::TypedStorage<1, 1, bool>                                        mHasFetchedRealmEventsOnce;
    ::ll::TypedStorage<1, 1, bool>                                        mRealmEventsRemainToBeFetched;
    ::ll::TypedStorage<8, 24, std::map<std::string, Clubs::ActivityFeed>> mCommentFeeds;
    ::ll::UntypedStorage<8, 32>                                           mFetchCommentFeedStatusGroup;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mCommentFeedsMutex;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>               mPostCommentStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mCommentFeedsDirty;
    ::ll::TypedStorage<1, 1, bool>                                        mBlockPostingComments;
    ::ll::UntypedStorage<8, 32>                                           mToggleLikeStatusGroup;
    ::ll::UntypedStorage<8, 32>                                           mSetViewedStatusGroup;
    ::ll::UntypedStorage<8, 32>                                           mDeleteStatusGroup;
    ::ll::UntypedStorage<8, 32>                                           mReportToClubOwnerStatusGroup;
    ::ll::UntypedStorage<8, 32>                                           mReportToXboxStatusGroup;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Stories::Player>>       mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>              mFetchMembersStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>              mFetchOnlineMembersStatus;
    ::ll::UntypedStorage<8, 32>                                           mFetchPlayerProfilesStatusGroup;
    ::ll::TypedStorage<8, 8, ulong>                                       mPlayersWithProfile;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mPlayersMutex;
    ::ll::TypedStorage<1, 1, bool>                                        mPlayersDirty;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Session>>               mSessions;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>              mFetchSessionsStatus;
    ::ll::TypedStorage<4, 16, ::Realms::StoriesSettings>                  mSettings;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>              mFetchSettingsStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>               mPostSettingsStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mSettingsDirty;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldFetchSettingsFromApi;
    ::ll::TypedStorage<8, 24, std::string>                                mCurrentStoryId;
    ::ll::TypedStorage<8, 24, std::string>                                mPostInProgressBody;
    ::ll::TypedStorage<8, 24, std::string>                                mCommentInProgressBody;
    ::ll::TypedStorage<8, 24, std::string>                                mStoryScreenshotSelectionFilePath;
    ::ll::TypedStorage<8, 24, std::string>                                mPostingStoryScreenshotSelectionFilePath;
    ::ll::TypedStorage<8, 24, std::string>                                mCurrentMemberSearchText;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::MemberFilterOption>       mCurrentMemberFilterOption;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::MemberSortOption>         mCurrentMemberSortOption;
    ::ll::TypedStorage<1, 1, bool>                                        mNewPostAvailable;
    ::ll::UntypedStorage<8, 24>                                           mUserManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                   mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::Stories::RealmEventsManager>> mRealmEventsManager;
    ::ll::UntypedStorage<8, 24>                                                   mFileSystem;
    ::ll::TypedStorage<4, 40, std::mutex>                                         mRealmEventsMutex;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Stories::RealmEvent>>           mRealmEvents;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                      mFetchRealmEventsStatus;
    ::ll::TypedStorage<1, 1, bool>                                                mRealmEventsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                              isAlive;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetStateManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addCommentStatuses(::Clubs::FeedItem const&);

    MCNAPI void _addStoryStatuses(::Clubs::FeedItem const&, bool);

    MCNAPI ::Clubs::FeedItem* _getFeedItemPtr(std::string const&, std::string const&);

    MCNAPI void _knitEventsToPostsAndUpdateFirstPageReady();

    MCNAPI void _setStoriesSettingsWithCallback(std::string const&, std::function<void(Realms::GenericStatus)>);

    MCNAPI void addNewStory(::Clubs::FeedItem, std::string const&);

    MCNAPI void clearFetchMembersStatus();

    MCNAPI void clearFetchRealmEventsStatus();

    MCNAPI void clearFetchSessionsStatus();

    MCNAPI void clearPostCommentStatus();

    MCNAPI void clearPostStoryStatus();

    MCNAPI void clearSettingsStatus();

    MCNAPI void clearStoryFeedStatus();

    MCNAPI bool consumeCommentFeedsDirty();

    MCNAPI bool consumePlayersDirty();

    MCNAPI bool consumeProfilesDirty();

    MCNAPI bool consumeRealmEventsDirty();

    MCNAPI bool consumeSettingsDirty();

    MCNAPI bool consumeStoryDataDirty();

    MCNAPI bool consumeStoryFeedDirty();

    MCNAPI bool consumeUnreadStoryCountDirty();

    MCNAPI void decrementUnreadStoryCount();

    MCNAPI void deleteFeedItem(std::string const&, std::string const&);

    MCNAPI void fetchCommentFeed(std::string const&);

    MCNAPI void fetchMembers();

    MCNAPI void fetchPlayerProfiles();

    MCNAPI void fetchPlayersStoriesSettings(std::string const&);

    MCNAPI void fetchRealmEvents();

    MCNAPI void fetchSessions();

    MCNAPI void fetchStories();

    MCNAPI void fetchStoryImage(std::string const&);

    MCNAPI std::map<std::string, Clubs::ActivityFeed>& getCommentFeeds();

    MCNAPI std::string& getCommentInProgressBody();

    MCNAPI ::Realms::Stories::MemberFilterOption& getCurrentMemberFilterOption();

    MCNAPI std::string& getCurrentMemberSearchText();

    MCNAPI ::Realms::Stories::MemberSortOption& getCurrentMemberSortOption();

    MCNAPI std::weak_ptr<Realms::World> getCurrentRealmWorld();

    MCNAPI std::string& getCurrentStoryId();

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getDeleteStatusGroup();

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::FetchStatus>& getFetchCommentFeedStatusGroup();

    MCNAPI ::Realms::Stories::FetchStatus getFetchMembersStatus() const;

    MCNAPI ::Realms::Stories::FetchStatus getFetchOnlineMembersStatus() const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::FetchStatus>& getFetchPlayerProfilesStatusGroup();

    MCNAPI ::Realms::Stories::FetchStatus getFetchRealmEventsStatus() const;

    MCNAPI ::Realms::Stories::FetchStatus getFetchSessionsStatus() const;

    MCNAPI ::Realms::Stories::FetchStatus getFetchSettingsStatus() const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::FetchStatus>& getFetchStoryImageStatusGroup();

    MCNAPI bool getMostRecentStoriesViewed(int);

    MCNAPI bool& getNewPostAvailable();

    MCNAPI std::vector<Realms::Stories::Player>& getPlayers();

    MCNAPI ::Realms::Stories::PostStatus getPostCommentStatus() const;

    MCNAPI std::string& getPostInProgressBody();

    MCNAPI ::Realms::Stories::PostStatus getPostSettingsStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getPostStoryStatus() const;

    MCNAPI std::vector<Realms::Stories::RealmEvent> const& getRealmEvents() const;

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getReportToClubOwnerStatusGroup();

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getReportToXboxStatusGroup();

    MCNAPI std::vector<Realms::Session>& getSessions();

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getSetViewedStatusGroup();

    MCNAPI ::Realms::StoriesSettings const& getSettings() const;

    MCNAPI ::Clubs::ActivityFeed& getStoryFeed();

    MCNAPI bool getStoryFeedFirstPageReady() const;

    MCNAPI int getStoryFeedPageEnd() const;

    MCNAPI int getStoryFeedPageStart() const;

    MCNAPI ::Realms::Stories::FetchStatus getStoryFeedStatus() const;

    MCNAPI std::map<std::string, Core::Path> const& getStoryImagePaths();

    MCNAPI std::string& getStoryScreenshotSelectionFilePath();

    MCNAPI ::Realms::Stories::StatusGroup<Realms::Stories::PostStatus>& getToggleLikeStatusGroup();

    MCNAPI int getTotalStoryFeedStories() const;

    MCNAPI int getUnreadStoryCount() const;

    MCNAPI void init(std::string const&);

    MCNAPI bool isCurrentRealmWorldValid() const;

    MCNAPI bool isFetchingCurrentRealmWorld() const;

    MCNAPI void loadStoriesSlice(int, int);

    MCNAPI void postComment();

    MCNAPI void postStory();

    MCNAPI bool realmEventsRemainToBeFetched() const;

    MCNAPI void removeStory(std::string const&, std::string const&);

    MCNAPI void reportFeedItemToXbox(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void reportGamertagToXbox(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void reportToClubOwner(std::string const&, std::string const&);

    MCNAPI void reset();

    MCNAPI void setBlockPostingComments(bool);

    MCNAPI void setPlayerNonMember(std::string const&);

    MCNAPI void setPlayerOptInStatusAndPostWithOptInTelemetry(
        std::string const&,
        ::Realms::OptInState,
        std::string const&,
        std::string const&,
        bool const
    );

    MCNAPI void setRealmCoordinatesState(bool);

    MCNAPI void setRealmEventsState(bool);

    MCNAPI void setRealmNotificationsState(bool);

    MCNAPI void setRealmOptin(::Realms::OptInState);

    MCNAPI void setRealmTimelineRequiredState(bool);

    MCNAPI void setRealmTimelineState(bool);

    MCNAPI void setStoriesSettings(std::string const&);

    MCNAPI void setStoriesSettingsOnExit(std::string const&);

    MCNAPI void setViewed(std::string const&, std::string const&);

    MCNAPI void toggleLike(std::string const&, std::string const&);

    MCNAPI bool tryAddNewXuid(
        std::string const&,
        ::Realms::Stories::RealmStoriesPlayerRole,
        std::optional<Realms::PlayerRole>,
        bool,
        bool,
        long,
        bool
    );
    // NOLINTEND
};
#else // @header-generator platform
class FacetStateManager {};
#endif // @header-generator platform

} // namespace Realms::Stories
