#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduJoinerResponse.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
namespace Social { struct EduAddServerResponse; }
namespace Social { struct EduDedicatedServerDetails; }
namespace Social { struct EduFetchServersResponse; }
namespace Social { struct EduFetchTenantSettingsResponse; }
namespace Social { struct EduHeadlessConnectionHandshake; }
namespace Social { struct EduJoinServerResponse; }
// clang-format on

namespace Social {

class IEduMultiplayerHeadless : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IEduMultiplayerHeadless inner types define
    enum class ServerHealth : int {
        Unknown = -1,
        Poor    = 0,
        Mid     = 1,
        Good    = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual void hostServer();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Social::EduJoinerResponse tryAcceptJoiner(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::Social::EduJoinerResponse
    tryAcceptJoiner(::std::string const& sessionToken, ::std::string const& joinerToHostNonce);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getHostToJoinerNonce(std::string const&) const;
#else // @header-generator platform
    virtual ::std::string getHostToJoinerNonce(::std::string const& sessionToken) const;
#endif // @header-generator platform

    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Social::EduFetchTenantSettingsResponse> requestTenantSettings();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Social::EduFetchTenantSettingsResponse> requestTenantSettings();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Social::EduFetchServersResponse> requestBroadcastedServers();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse> requestBroadcastedServers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Social::EduFetchServersResponse> requestServerInfo(std::vector<std::string> const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse>
    requestServerInfo(::std::vector<::std::string> const& currentServerIds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Social::EduAddServerResponse> requestAddServer(std::string const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Social::EduAddServerResponse> requestAddServer(::std::string const& serverId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Social::EduJoinServerResponse> requestJoinServer(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Social::EduJoinServerResponse>
    requestJoinServer(::std::string const& serverId, ::std::string const& passcode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveCachedServersToDisk(::brstd::flat_map<std::string, Social::EduDedicatedServerDetails, std::less<std::string>, std::vector<std::string>, std::vector<Social::EduDedicatedServerDetails>> const&);
#else // @header-generator platform
    virtual void saveCachedServersToDisk(
        ::brstd::flat_map<
            ::std::string,
            ::Social::EduDedicatedServerDetails,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::Social::EduDedicatedServerDetails>> const& servers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::brstd::flat_map<std::string, Social::EduDedicatedServerDetails, std::less<std::string>, std::vector<std::string>, std::vector<Social::EduDedicatedServerDetails>> loadCachedServersFromDisk();
#else // @header-generator platform
    virtual ::brstd::flat_map<
        ::std::string,
        ::Social::EduDedicatedServerDetails,
        ::std::less<::std::string>,
        ::std::vector<::std::string>,
        ::std::vector<::Social::EduDedicatedServerDetails>>
    loadCachedServersFromDisk();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool tryJoinWorld(::Social::GameConnectionInfo const&);
#else // @header-generator platform
    virtual bool tryJoinWorld(::Social::GameConnectionInfo const& connection);
#endif // @header-generator platform

    virtual void clearConnection();

    virtual ::Social::EduHeadlessConnectionHandshake getHandshake() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getHostIp() const;
#else // @header-generator platform
    virtual ::std::string getHostIp() const;
#endif // @header-generator platform

    virtual int getHostPort() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getServicesEndpoint();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hostServer();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $hostServer();

    MCNAPI ::Social::EduJoinerResponse
    $tryAcceptJoiner(::std::string const& sessionToken, ::std::string const& joinerToHostNonce);

    MCNAPI ::std::string $getHostToJoinerNonce(::std::string const& sessionToken) const;

    MCNAPI ::Bedrock::Threading::Async<void> $onNextFetchJoiners();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::EduJoinerResponse $tryAcceptJoiner(std::string const&, std::string const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getHostToJoinerNonce(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<void> $onNextFetchJoiners();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
