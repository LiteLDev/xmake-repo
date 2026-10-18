#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduHeadlessConnectionHandshake.h"
#include "mc/social/IEduMultiplayerHeadless.h"

// auto generated forward declare list
// clang-format off
class EDUSystems;
namespace Social { class GameConnectionInfo; }
namespace Social { struct EduAddServerResponse; }
namespace Social { struct EduDedicatedServerDetails; }
namespace Social { struct EduFetchServersResponse; }
namespace Social { struct EduFetchTenantSettingsResponse; }
namespace Social { struct EduJoinServerResponse; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class EduMultiplayerHeadlessJoiner : public ::Social::IEduMultiplayerHeadless {
#else // @header-generator platform
class EduMultiplayerHeadlessJoiner {
#endif // @header-generator platform
public:
    // EduMultiplayerHeadlessJoiner inner types declare
    // clang-format off
    struct Connection;
    // clang-format on

    // EduMultiplayerHeadlessJoiner inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Connection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, ::Social::EduHeadlessConnectionHandshake> handshake;
        ::ll::TypedStorage<8, 24, std::string>                               ip;
        ::ll::TypedStorage<4, 4, int>                                        port;
        // NOLINTEND

    public:
        // prevent constructor by default
        Connection& operator=(Connection const&);
        Connection(Connection const&);
        Connection();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Connection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EDUSystems&> mEduSystems;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 184>            mConnection;
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerHeadlessJoiner& operator=(EduMultiplayerHeadlessJoiner const&);
    EduMultiplayerHeadlessJoiner(EduMultiplayerHeadlessJoiner const&);
    EduMultiplayerHeadlessJoiner();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EduMultiplayerHeadlessJoiner();

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
    // member functions
    // NOLINTBEGIN
    MCNAPI EduMultiplayerHeadlessJoiner(::EDUSystems&, ::EducationServicesEnvironment);

    MCNAPI ::Core::PathBuffer<std::string> _getServerListCacheFilePath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EDUSystems&, ::EducationServicesEnvironment);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::EduFetchTenantSettingsResponse> $requestTenantSettings();

    MCNAPI ::Bedrock::Threading::Async<Social::EduFetchServersResponse> $requestBroadcastedServers();

    MCNAPI ::Bedrock::Threading::Async<Social::EduFetchServersResponse>
    $requestServerInfo(std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<Social::EduAddServerResponse> $requestAddServer(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::EduJoinServerResponse>
    $requestJoinServer(std::string const&, std::string const&);

    MCNAPI void $saveCachedServersToDisk(
        ::brstd::flat_map<
            std::string,
            Social::EduDedicatedServerDetails,
            std::less<std::string>,
            std::vector<std::string>,
            std::vector<Social::EduDedicatedServerDetails>> const&
    );

    MCNAPI ::brstd::flat_map<
        std::string,
        Social::EduDedicatedServerDetails,
        std::less<std::string>,
        std::vector<std::string>,
        std::vector<Social::EduDedicatedServerDetails>>
    $loadCachedServersFromDisk();

    MCNAPI bool $tryJoinWorld(::Social::GameConnectionInfo const&);

    MCNAPI void $clearConnection();

    MCNAPI ::Social::EduHeadlessConnectionHandshake $getHandshake() const;

    MCNAPI std::string $getHostIp() const;

    MCNAPI int $getHostPort() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct Connection {};
#endif // @header-generator platform
};

} // namespace Social
