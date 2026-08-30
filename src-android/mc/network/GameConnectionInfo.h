#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/client/social/ResolvedExperienceInfo.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/ThirdPartyInfo.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"

// auto generated forward declare list
// clang-format off
class IIdentityAssertionVerifier;
namespace Json { class Value; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace Social {

class GameConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType>                                      mType;
    ::ll::TypedStorage<8, 24, std::string>                                                  mHostIpAddress;
    ::ll::TypedStorage<8, 24, std::string>                                                  mUnresolvedUrl;
    ::ll::TypedStorage<8, 24, std::string>                                                  mServerRegion;
    ::ll::TypedStorage<8, 24, std::string>                                                  mExternalServerName;
    ::ll::TypedStorage<4, 4, int>                                                           mServiceQuality;
    ::ll::TypedStorage<4, 4, int>                                                           mPort;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                         mRakNetGUID;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                                       mNetherNetId;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>                                 mPlayerMessagingId;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes>                          mSupportedAuth;
    ::ll::TypedStorage<8, 144, ::ThirdPartyInfo>                                            mThirdPartyServerInfo;
    ::ll::TypedStorage<8, 264, std::optional<Social::ResolvedExperienceInfo>>               mResolvedExperienceInfo;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllowSmallDownloads;
    ::ll::UntypedStorage<1, 1>                                                              mDisableTrickleIce;
    ::ll::UntypedStorage<8, 32>                                                             mNonce;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>> mServerIdentityVerifier;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfo& operator=(GameConnectionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionInfo();

    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo&&);

    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo const&);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, ::NetherNet::NetworkID const&);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, std::string const&, int);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, ::NetherNet::NetworkID const&, ::ThirdPartyInfo const&);

    MCNAPI GameConnectionInfo(::RakNet::SystemAddress, ::RakNet::RakNetGUID const&, ::ThirdPartyInfo const&);

    MCNAPI
    GameConnectionInfo(::Social::ConnectionType, ::NetherNet::NetworkID const&, ::PlayerMessaging::NetworkID const&);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, std::string const&, int, ::ThirdPartyInfo const&);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, ::NetherNet::NetworkID const&, std::string&, int);

    MCNAPI GameConnectionInfo(
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID const&,
        ::ThirdPartyInfo const&,
        std::string const&
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType,
        ::NetherNet::NetworkID const&,
        ::PlayerMessaging::NetworkID const&,
        ::ThirdPartyInfo const&
    );

    MCNAPI
    GameConnectionInfo(::Social::ConnectionType, std::string const&, int, ::ThirdPartyInfo const&, std::string const&);

    MCNAPI GameConnectionInfo(::Social::ConnectionType, std::string const&, int, std::string&, int);

    MCNAPI bool getAllowSmallDownloads() const;

    MCNAPI std::string getCorrelationId() const;

    MCNAPI std::string const& getExternalServerName() const;

    MCNAPI std::string const& getHostIpAddress() const;

    MCNAPI ::NetherNet::NetworkID const& getNetherNetId() const;

    MCNAPI std::optional<Social::Nonce> const& getNonce() const;

    MCNAPI ::PlayerMessaging::NetworkID const& getPlayerMessagingId() const;

    MCNAPI int getPort() const;

    MCNAPI std::string const getRakNetGUID() const;

    MCNAPI std::optional<Social::ResolvedExperienceInfo> const& getResolvedExperienceInfo() const;

    MCNAPI std::string const getServerRegionName() const;

    MCNAPI int getServerServiceQuality() const;

    MCNAPI ::ServerSupportedAuthenticationTypes getSupportedAuth() const;

    MCNAPI ::ThirdPartyInfo const& getThirdPartyServerInfo() const;

    MCNAPI ::ThirdPartyInfo& getThirdPartyServerInfo();

    MCNAPI ::Social::ConnectionType getType() const;

    MCNAPI std::string const& getUnresolvedUrl() const;

    MCNAPI bool isExternalConnection() const;

    MCNAPI void setAllowSmallDownloads(bool);

    MCNAPI void setDisableTrickleIce(bool);

    MCNAPI void setIdentityAssertionVerifier(::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>);

    MCNAPI void setNonce(::Social::Nonce const&);

    MCNAPI void setRakNetGUID(std::string const&);

    MCNAPI void setResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    MCNAPI void setSupportedAuth(::ServerSupportedAuthenticationTypes);

    MCNAPI void setUnresolvedUrl(std::string const&);

    MCNAPI void toJson(::Json::Value&) const;

    MCNAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::GameConnectionInfo fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Social::GameConnectionInfo&&);

    MCNAPI void* $ctor(::Social::GameConnectionInfo const&);

    MCNAPI void* $ctor(::Social::ConnectionType, ::NetherNet::NetworkID const&);

    MCNAPI void* $ctor(::Social::ConnectionType, std::string const&, int);

    MCNAPI void* $ctor(::Social::ConnectionType, ::NetherNet::NetworkID const&, ::ThirdPartyInfo const&);

    MCNAPI void* $ctor(::RakNet::SystemAddress, ::RakNet::RakNetGUID const&, ::ThirdPartyInfo const&);

    MCNAPI void* $ctor(::Social::ConnectionType, ::NetherNet::NetworkID const&, ::PlayerMessaging::NetworkID const&);

    MCNAPI void* $ctor(::Social::ConnectionType, std::string const&, int, ::ThirdPartyInfo const&);

    MCNAPI void* $ctor(::Social::ConnectionType, ::NetherNet::NetworkID const&, std::string&, int);

    MCNAPI void*
    $ctor(::RakNet::SystemAddress, ::RakNet::RakNetGUID const&, ::ThirdPartyInfo const&, std::string const&);

    MCNAPI void* $ctor(
        ::Social::ConnectionType,
        ::NetherNet::NetworkID const&,
        ::PlayerMessaging::NetworkID const&,
        ::ThirdPartyInfo const&
    );

    MCNAPI void* $ctor(::Social::ConnectionType, std::string const&, int, ::ThirdPartyInfo const&, std::string const&);

    MCNAPI void* $ctor(::Social::ConnectionType, std::string const&, int, std::string&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
