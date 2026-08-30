#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ExperienceJoinRequestInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/file/Path.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/Nonce.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/brstd/basic_cstring_view.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

class MultiplayerGameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Social::GameConnectionInfo>>        supportedConnections;
    ::ll::TypedStorage<8, 24, std::string>                                    ownerId;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                             playerIds;
    ::ll::TypedStorage<8, 24, std::string>                                    ownerNickname;
    ::ll::TypedStorage<8, 24, std::string>                                    handleId;
    ::ll::TypedStorage<8, 24, std::string>                                    levelId;
    ::ll::TypedStorage<8, 24, std::string>                                    sessionId;
    ::ll::TypedStorage<8, 24, std::string>                                    rakNetGUID;
    ::ll::TypedStorage<8, 24, std::string>                                    worldName;
    ::ll::TypedStorage<8, 24, std::string>                                    gameType;
    ::ll::TypedStorage<8, 24, std::string>                                    version;
    ::ll::TypedStorage<8, 8, long>                                            realmId;
    ::ll::TypedStorage<8, 24, std::string>                                    thirdPartyServerId;
    ::ll::TypedStorage<8, 24, std::string>                                    thirdPartyServerIp;
    ::ll::TypedStorage<4, 4, int>                                             thirdPartyServerPort;
    ::ll::TypedStorage<8, 112, std::optional<ExperienceJoinRequestInfo>>      experienceJoinRequest;
    ::ll::TypedStorage<4, 4, int>                                             protocol;
    ::ll::TypedStorage<4, 4, int>                                             maxMemberCount;
    ::ll::TypedStorage<4, 4, int>                                             memberCount;
    ::ll::TypedStorage<4, 4, ::Social::MultiplayerServiceIdentifier>          serviceProvider;
    ::ll::UntypedStorage<1, 24>                                               serviceIconPath;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                    broadcastSetting;
    ::ll::TypedStorage<1, 1, bool>                                            lanGame;
    ::ll::TypedStorage<1, 1, bool>                                            onlineCrossPlatformGame;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                                transportLayer;
    ::ll::TypedStorage<4, 4, uint>                                            titleId;
    ::ll::TypedStorage<1, 1, bool>                                            crossPlayDisabled;
    ::ll::TypedStorage<1, 1, bool>                                            isEditorWorld;
    ::ll::TypedStorage<1, 1, bool>                                            isHardcore;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Nonce>> playerNonces;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerGameInfo& operator=(MultiplayerGameInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerGameInfo();

    MCNAPI MultiplayerGameInfo(::Social::MultiplayerGameInfo const&);

    MCNAPI MultiplayerGameInfo(::Social::MultiplayerServiceIdentifier, std::string const&);

    MCNAPI ::Social::GameConnectionInfo getBackupConnection() const;

    MCNAPI void getConnectionsAsJson(::Json::Value&) const;

    MCNAPI std::string getCorrelationId() const;

    MCNAPI ::Social::GameConnectionInfo getOptimumConnection(bool) const;

    MCNAPI bool isCrossPlatform() const;

    MCNAPI bool isExperience() const;

    MCNAPI bool isExternal() const;

    MCNAPI bool isRealm() const;

    MCNAPI bool isThirdPartyServer() const;

    MCNAPI ~MultiplayerGameInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::MultiplayerGameInfo createEduGameInfo();

    MCNAPI static ::Social::MultiplayerGameInfo createFromSessionProperties(::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& BROADCAST_SETTING_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& CROSS_PLATFORM_GAME_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& CROSS_PLAY_DISABLED_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& EXPERIENCE_FRIEND_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& EXPERIENCE_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& EXPERIENCE_WORLD_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& HANDLE_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& HOST_NAME_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& IS_EDITOR_WORLD_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& IS_HARDCORE_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& LAN_GAME_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& LEVEL_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& MAX_MEMBER_COUNT_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& MEMBER_COUNT_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& NONCES_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& OWNER_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& PROTOCOL_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& RAKNET_GUID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& REALM_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& SESSION_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& SUPPORTED_CONNECTIONS_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& THIRD_PARTY_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& THIRD_PARTY_IP_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& THIRD_PARTY_PORT_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& TITLE_ID_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& TRANSPORT_LAYER_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& VERSION_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& WORLD_NAME_KEY();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& WORLD_TYPE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Social::MultiplayerGameInfo const&);

    MCNAPI void* $ctor(::Social::MultiplayerServiceIdentifier, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
