#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XTaskQueueObject;
struct XalUser;
// clang-format on

namespace Social {

class XblApiWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XblApiWrapper();

    virtual void _customInvoke(std::function<void()>&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int cleanupAsync(::XAsyncBlock*);

    MCNAPI int multiplayerGetActivitiesForSocialGroupResultCount(::XAsyncBlock*, ulong*);

    MCNAPI int multiplayerGetActivitiesWithPropertiesForUsersResultSize(::XAsyncBlock*, ulong*);

    MCNAPI int multiplayerManagerInitialize(char const*, ::XTaskQueueObject*);

    MCNAPI int multiplayerManagerJoinLobby(char const*, ::XalUser*);

    MCNAPI int multiplayerManagerLobbySessionAddLocalUser(::XalUser*);

    MCNAPI ulong multiplayerManagerLobbySessionMembersCount();

    MCNAPI char const* multiplayerManagerLobbySessionPropertiesJson();

    MCNAPI int multiplayerManagerLobbySessionRemoveLocalUser(::XalUser*);

    MCNAPI int multiplayerManagerLobbySessionSetProperties(char const*, char const*, void*);

    MCNAPI int presenceGetPresenceForMultipleUsersResultCount(::XAsyncBlock*, ulong*);

    MCNAPI int privacyBatchCheckPermissionResultSize(::XAsyncBlock*, ulong*);

    MCNAPI int privacyGetAvoidListResult(::XAsyncBlock*, ulong, ulong*);

    MCNAPI int privacyGetAvoidListResultCount(::XAsyncBlock*, ulong*);

    MCNAPI int privacyGetMuteListResult(::XAsyncBlock*, ulong, ulong*);

    MCNAPI int privacyGetMuteListResultCount(::XAsyncBlock*, ulong*);

    MCNAPI int profileGetUserProfilesResultCount(::XAsyncBlock*, ulong*);

    MCNAPI int setOverrideConfiguration(char const*, uint);

    MCNAPI int setOverrideLocale(char const*);

    MCNAPI int socialManagerRemoveLocalUser(::XalUser*);

    MCNAPI int socialManagerSetRichPresencePollingStatus(::XalUser*, bool);

    MCNAPI int
    userStatisticsGetMultipleUserStatisticsForMultipleServiceConfigurationsResultSize(::XAsyncBlock*, ulong*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
