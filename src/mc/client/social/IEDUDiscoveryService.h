#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/Availability.h"
#include "mc/client/social/edu_discovery/ServerStatus.h"

// auto generated forward declare list
// clang-format off
namespace EDUDiscovery { class DiscoveryObserver; }
namespace EDUDiscovery { struct ConnectionInfo; }
namespace EDUDiscovery { struct Dialog; }
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct JoinRequest; }
namespace EDUDiscovery { struct JoinServerQueryState; }
namespace EDUDiscovery { struct ListServersResponse; }
namespace EDUDiscovery { template<typename T0> class QueryContext; }
// clang-format on

class IEDUDiscoveryService {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IEDUDiscoveryService() = default;

    virtual ::EDUDiscovery::JoinCode const* getJoinCode() const = 0;

    virtual int getJoinCodeLength() const = 0;

    virtual ::EDUDiscovery::ServerStatus getServerStatus() = 0;

    virtual bool hasValidCredentials() const = 0;

    virtual std::unique_ptr<EDUDiscovery::Dialog> getNextDialog() = 0;

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::Availability>> checkServiceAvailability(std::function<void (EDUDiscovery::Availability)>) = 0;

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::ListServersResponse>> listServers(std::function<void (const EDUDiscovery::ListServersResponse&)>) = 0;

    virtual void joinServer(std::string const&, std::string const&) = 0;

    virtual std::shared_ptr<EDUDiscovery::QueryContext<EDUDiscovery::JoinServerQueryState>> joinServer(::EDUDiscovery::JoinRequest const&, std::function<void (const EDUDiscovery::JoinServerQueryState&)>) = 0;

    virtual void requestNewJoinCode() = 0;

    virtual void addDiscoveryObserver(::EDUDiscovery::DiscoveryObserver&) = 0;

    virtual ::EDUDiscovery::ConnectionInfo getConnectionInfo() const = 0;

    virtual bool isInMultiplayerSession() const = 0;

    virtual bool isInMultiplayerSessionState() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IEDUDiscoveryService {};
#endif // @header-generator platform
