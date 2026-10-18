#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/PFLobbyAccessPolicy.h"
#include "mc/PFLobbyMemberConnectionStatus.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
struct PFEntityKey;
struct PFLobby;
struct PFLobbyStateChange;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct PFFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mMultiplayerInitialize;
    ::ll::UntypedStorage<8, 64> mMultiplayerUninitialize;
    ::ll::UntypedStorage<8, 64> mMultiplayerGetErrorMessage;
    ::ll::UntypedStorage<8, 64> mMultiplayerSetEntityToken;
    ::ll::UntypedStorage<8, 64> mMultiplayerCreateAndJoinLobby;
    ::ll::UntypedStorage<8, 64> mMultiplayerJoinLobby;
    ::ll::UntypedStorage<8, 64> mMultiplayerConnectToLobby;
    ::ll::UntypedStorage<8, 64> mLobbyLeave;
    ::ll::UntypedStorage<8, 64> mLobbyAddMember;
    ::ll::UntypedStorage<8, 64> mLobbyForceRemoveMember;
    ::ll::UntypedStorage<8, 64> mMultiplayerFindLobbies;
    ::ll::UntypedStorage<8, 64> mMultiplayerJoinArrangedLobby;
    ::ll::UntypedStorage<8, 64> mLobbySendInvite;
    ::ll::UntypedStorage<8, 64> mLobbyGetLobbyId;
    ::ll::UntypedStorage<8, 64> mLobbyGetMembers;
    ::ll::UntypedStorage<8, 64> mLobbyGetOwner;
    ::ll::UntypedStorage<8, 64> mLobbyGetLobbyProperty;
    ::ll::UntypedStorage<8, 64> mLobbyGetMemberProperty;
    ::ll::UntypedStorage<8, 64> mLobbyGetServerProperty;
    ::ll::UntypedStorage<8, 64> mLobbyGetAccessPolicy;
    ::ll::UntypedStorage<8, 64> mLobbyGetMaxMemberCount;
    ::ll::UntypedStorage<8, 64> mLobbyGetMemberConnectionStatus;
    ::ll::UntypedStorage<8, 64> mMultiplayerStartProcessingLobbyStateChanges;
    ::ll::UntypedStorage<8, 64> mMultiplayerFinishProcessingLobbyStateChanges;
    ::ll::UntypedStorage<8, 64> mMultiplayerStartListeningForLobbyInvites;
    ::ll::UntypedStorage<8, 64> mMultiplayerStopListeningForLobbyInvites;
    // NOLINTEND
};
#else // @header-generator platform
struct PFFunctions {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
