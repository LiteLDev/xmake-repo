#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/client/game/ExternalServer.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/client/world/WorldInfo.h"
#include "mc/client/world/WorldPingStatus.h"
#include "mc/network/PingedCompatibleServer.h"

// auto generated forward declare list
// clang-format off
class ThirdPartyServer;
// clang-format on

struct NetworkWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mPlayerCount;
    ::ll::TypedStorage<8, 24, std::string>                         mOwnerName;
    ::ll::TypedStorage<8, 24, std::string>                         mOwnerXuid;
    ::ll::TypedStorage<8, 24, std::string>                         mWorldName;
    ::ll::TypedStorage<8, 24, std::string>                         mGameTypeString;
    ::ll::TypedStorage<8, 24, std::string>                         mVersion;
    ::ll::TypedStorage<1, 1, bool>                                 mWasDiscoveredOnLAN;
    ::ll::TypedStorage<1, 1, bool>                                 mIsHardcore;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mAuthNegotiation;
    ::ll::TypedStorage<8, 192, ::ExternalServer>                   mExternalServer;
    ::ll::UntypedStorage<8, 352>                                   mRemoteServer;
    ::ll::TypedStorage<8, 544, ::Social::MultiplayerGameInfo>      mFriendGame;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ThirdPartyServer>>   mThirdPartyServer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldInfo();

    MCNAPI explicit NetworkWorldInfo(::ExternalServer&);

    MCNAPI explicit NetworkWorldInfo(::PingedCompatibleServer const&);

    MCNAPI explicit NetworkWorldInfo(::Social::MultiplayerGameInfo const&);

    MCNAPI explicit NetworkWorldInfo(std::shared_ptr<ThirdPartyServer> const&);

    MCNAPI NetworkWorldInfo(::NetworkWorldInfo const&);

    MCNAPI ::ExternalServer const& getExternalServer() const;

    MCNAPI ::ExternalServer& getExternalServer();

    MCNAPI long getExternalServerTimeStamp() const;

    MCNAPI ::Social::MultiplayerGameInfo const& getFriendGame() const;

    MCNAPI bool getIsHardcore() const;

    MCNAPI std::string const& getOwnerName() const;

    MCNAPI std::string const& getOwnerXuid() const;

    MCNAPI std::string const getPingLatency() const;

    MCNAPI ::WorldPingStatus getPingStatus() const;

    MCNAPI std::string const getPingTextureName(bool) const;

    MCNAPI std::string const& getPlayerCount() const;

    MCNAPI ::PingedCompatibleServer const& getRemoteServer() const;

    MCNAPI ::PingedCompatibleServer& getRemoteServer();

    MCNAPI std::shared_ptr<ThirdPartyServer> getThirdPartyServer() const;

    MCNAPI std::string getUpdatedHeader() const;

    MCNAPI std::string const getWorldName(bool const) const;

    MCNAPI bool hasRoomForPlayers(::NetworkWorldType const) const;

    MCNAPI ::NetworkWorldInfo& operator=(::NetworkWorldInfo const&);

    MCNAPI void setDiscoveredOnLAN();

    MCNAPI void setOwnerName(std::string const&);

    MCNAPI void setRemoteServer(::PingedCompatibleServer const&);

    MCNAPI void setWorldName(std::string const&);

    MCNAPI void updateExternalServer();

    MCNAPI void updateThirdPartyServer();

    MCNAPI bool wasDiscoveredOnLAN() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& mHighPingRateThreshold();

    MCNAPI static float const& mMediumPingRateThreshold();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ExternalServer&);

    MCNAPI void* $ctor(::PingedCompatibleServer const&);

    MCNAPI void* $ctor(::Social::MultiplayerGameInfo const&);

    MCNAPI void* $ctor(std::shared_ptr<ThirdPartyServer> const&);

    MCNAPI void* $ctor(::NetworkWorldInfo const&);
    // NOLINTEND
};
#else // @header-generator platform
struct NetworkWorldInfo {};
#endif // @header-generator platform
