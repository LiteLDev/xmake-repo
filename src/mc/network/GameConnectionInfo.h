#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/client/social/ResolvedExperienceInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/ResolvedExperienceInfo.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType>                                          mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mHostIpAddress;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mUnresolvedUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mServerRegion;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mExternalServerName;
    ::ll::TypedStorage<4, 4, int>                                                               mServiceQuality;
    ::ll::TypedStorage<4, 4, int>                                                               mPort;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                             mRakNetGUID;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                                           mNetherNetId;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>                                     mPlayerMessagingId;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes>                              mSupportedAuth;
    ::ll::TypedStorage<8, 200, ::ThirdPartyInfo>                                                mThirdPartyServerInfo;
    ::ll::TypedStorage<8, 312, ::std::optional<::Social::ResolvedExperienceInfo>>               mResolvedExperienceInfo;
    ::ll::TypedStorage<1, 1, bool>                                                              mAllowSmallDownloads;
    ::ll::TypedStorage<1, 1, bool>                                                              mDisableTrickleIce;
    ::ll::TypedStorage<8, 40, ::std::optional<::Social::Nonce>>                                 mNonce;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>>> mServerIdentityVerifier;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    GameConnectionInfo& operator=(GameConnectionInfo const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GameConnectionInfo(GameConnectionInfo const&);

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameConnectionInfo();
#else // @header-generator platform
    MCAPI GameConnectionInfo();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI GameConnectionInfo(::Social::GameConnectionInfo&&);

    MCAPI GameConnectionInfo(::Social::GameConnectionInfo const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo const&);
#else // @header-generator platform
    MCAPI GameConnectionInfo(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI GameConnectionInfo(
        ::RakNet::SystemAddress     connection,
        ::RakNet::RakNetGUID const& rakGuid,
        ::ThirdPartyInfo const&     serverInfo
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType,
        ::NetherNet::NetworkID const&,
        ::PlayerMessaging::NetworkID const&,
        ::ThirdPartyInfo const&
    );
#else // @header-generator platform
    MCAPI GameConnectionInfo(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    GameConnectionInfo(::Social::ConnectionType, std::string const&, int, ::ThirdPartyInfo const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCAPI GameConnectionInfo(
        ::RakNet::SystemAddress     connection,
        ::RakNet::RakNetGUID const& rakGuid,
        ::ThirdPartyInfo const&     serverInfo,
        ::std::string const&        externalServerName
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo,
        ::std::string const&     externalServerName
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );

    MCFOLD ::std::string const getServerRegionName() const;

    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameConnectionInfo(::Social::ConnectionType, std::string const&, int, std::string&, int);
#else // @header-generator platform
    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAllowSmallDownloads() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void toJson(::Json::Value& connectionJson) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~GameConnectionInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Social::GameConnectionInfo fromJson(::Json::Value const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Social::GameConnectionInfo fromJson(::Json::Value const& properties);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::GameConnectionInfo&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Social::GameConnectionInfo&&);

    MCAPI void* $ctor(::Social::GameConnectionInfo const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::GameConnectionInfo const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::ConnectionType, ::NetherNet::NetworkID const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::RakNet::SystemAddress connection, ::RakNet::RakNetGUID const& rakGuid, ::ThirdPartyInfo const& serverInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::ConnectionType, std::string const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCAPI void* $ctor(
        ::RakNet::SystemAddress     connection,
        ::RakNet::RakNetGUID const& rakGuid,
        ::ThirdPartyInfo const&     serverInfo,
        ::std::string const&        externalServerName
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo,
        ::std::string const&     externalServerName
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
