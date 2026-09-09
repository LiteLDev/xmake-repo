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
    // clang-format off
    virtual void hostServer();

    virtual ::Social::EduJoinerResponse tryAcceptJoiner(std::string const&, std::string const&);

    virtual std::string getHostToJoinerNonce(std::string const&) const;

    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners();

    virtual ::Bedrock::Threading::Async<Social::EduFetchTenantSettingsResponse> requestTenantSettings();

    virtual ::Bedrock::Threading::Async<Social::EduFetchServersResponse> requestBroadcastedServers();

    virtual ::Bedrock::Threading::Async<Social::EduFetchServersResponse> requestServerInfo(std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<Social::EduAddServerResponse> requestAddServer(std::string const&);

    virtual ::Bedrock::Threading::Async<Social::EduJoinServerResponse> requestJoinServer(std::string const&, std::string const&);

    virtual void saveCachedServersToDisk(::brstd::flat_map<std::string, Social::EduDedicatedServerDetails, std::less<std::string>, std::vector<std::string>, std::vector<Social::EduDedicatedServerDetails>> const&);

    virtual ::brstd::flat_map<std::string, Social::EduDedicatedServerDetails, std::less<std::string>, std::vector<std::string>, std::vector<Social::EduDedicatedServerDetails>> loadCachedServersFromDisk();

    virtual bool tryJoinWorld(::Social::GameConnectionInfo const&);

    virtual void clearConnection();

    virtual ::Social::EduHeadlessConnectionHandshake getHandshake() const;

    virtual std::string getHostIp() const;

    virtual int getHostPort() const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getServicesEndpoint();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $hostServer();

    MCNAPI ::Social::EduJoinerResponse $tryAcceptJoiner(std::string const&, std::string const&);

    MCNAPI std::string $getHostToJoinerNonce(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<void> $onNextFetchJoiners();
    // NOLINTEND
};

} // namespace Social
