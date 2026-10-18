#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "cstdarg"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    IContext& operator=(IContext const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IContext();
#else // @header-generator platform
    virtual ~IContext() /*override*/ = default;
#endif // @header-generator platform

    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const = 0;

    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const = 0;

    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const = 0;

    virtual ::NetherNet::ILanDiscovery& getLanDiscovery() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const = 0;
#else // @header-generator platform
    virtual void _logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;
#else // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity min) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void logMessage(::NetherNet::LogSeverity level, char const* fmt, ...) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
