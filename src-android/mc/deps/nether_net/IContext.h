#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ILanDiscovery; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { struct GlobalConfiguration; }
// clang-format on

namespace NetherNet {

class IContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IContext& operator=(IContext const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContext();

    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const = 0;

    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const = 0;

    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const = 0;

    virtual ::NetherNet::ILanDiscovery& getLanDiscovery() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const = 0;

    virtual void _logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const = 0;

    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void logMessage(::NetherNet::LogSeverity, char const*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
