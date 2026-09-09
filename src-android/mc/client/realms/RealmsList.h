#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/RealmsAvailability.h"
#include "mc/client/realms/RealmsListError.h"
#include "mc/client/realms/RealmsListState.h"
#include "mc/client/world/RealmsWorldInfo.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ClubsService;
class IClientInstance;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { struct Player; }
namespace Realms { struct World; }
// clang-format on

namespace Realms {

class RealmsList : public ::std::enable_shared_from_this<Realms::RealmsList> {
public:
    // RealmsList inner types declare
    // clang-format off
    struct AdditionalRealmWorldInfo;
    // clang-format on

    // RealmsList inner types define
    struct AdditionalRealmWorldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>       selectedSlotWorldName;
        ::ll::TypedStorage<1, 1, bool>               storiesNotificationsEnabled;
        ::ll::TypedStorage<4, 8, std::optional<int>> gameMode;
        // NOLINTEND

    public:
        // prevent constructor by default
        AdditionalRealmWorldInfo& operator=(AdditionalRealmWorldInfo const&);
        AdditionalRealmWorldInfo(AdditionalRealmWorldInfo const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<8, 24> mClient;
    ::ll::TypedStorage<1, 1, bool> mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 88> mRealmDataSubscription;
    ::ll::UntypedStorage<8, 88> mRealmPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool> mIsDirty;
    ::ll::TypedStorage<1, 1, bool const> mIsUnpairedRealms;
    ::ll::TypedStorage<8, 24, std::vector<RealmsWorldInfo>> mWorldList;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsListState> mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsListError> mError;
    ::ll::UntypedStorage<4, 4> mCompatibility;
    ::ll::TypedStorage<8, 8, double> mTimestamp;
    ::ll::TypedStorage<1, 1, bool> mFetchingPlayerCounts;
    ::ll::TypedStorage<1, 1, bool> mFirstRealmsFetchComplete;
    ::ll::TypedStorage<1, 1, bool> mIsLoadingAdditionalRealmInfo;
    ::ll::TypedStorage<8, 24, std::map<Realms::RealmId, std::string>> mSelectedSlotWorldNames;
    ::ll::TypedStorage<8, 24, std::map<Realms::RealmId, Realms::RealmsList::AdditionalRealmWorldInfo>> mIndividualWorldCallData;
    ::ll::TypedStorage<4, 4, int> mNumSlotWorldNamesToQuery;
    ::ll::TypedStorage<8, 8, double const> UPDATE_REALMS_PLAYER_COUNT_INTERVAL;
    ::ll::TypedStorage<8, 8, double const> UPDATE_REALMS_LIST_INTERVAL;
    ::ll::TypedStorage<8, 8, double> mLastRealmsListUpdateMs;
    ::ll::TypedStorage<8, 8, double> mLastRealmsCountUpdateMs;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ClubsService>> mClubsService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWorldInfoSet;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fetchAdditionalRealmsWorldsInfo();

    MCNAPI void _fetchRealmsIfNecessary(std::shared_ptr<RealmsAPI>, double, bool);

    MCNAPI std::string _getCurrentXUID() const;

    MCNAPI void _populateRealmsWorlds(std::vector<Realms::World>&, std::string const&);

    MCNAPI bool _updateCompatibilityAndCheckFetching(std::shared_ptr<RealmsAPI>);

    MCNAPI void _updateWorld(::RealmsWorldInfo&, ::Realms::World&);

    MCNAPI void clearRealmUnreadCount(std::string const&);

    MCNAPI bool consumeDirty();

    MCNAPI void fetchPlayerCounts(std::shared_ptr<RealmsAPI>);

    MCNAPI void forceFetchRealmList();

    MCNAPI ::Realms::RealmsListError getError() const;

    MCNAPI std::optional<const RealmsWorldInfo*> getRealm(::Realms::RealmId) const;

    MCNAPI std::optional<RealmsAPI::Compatibility> getRealmsCompatibility() const;

    MCNAPI ::Realms::RealmsListState getState() const;

    MCNAPI std::vector<RealmsWorldInfo>& getWorldList();

    MCNAPI void setRealmAvailability(::Realms::RealmId, ::Realms::RealmsAvailability);

    MCNAPI void setRealmDirtyInCache(::Realms::RealmId);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealms(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmsOnlinePlayers(std::function<void()>);
    // NOLINTEND
};

} // namespace Realms
