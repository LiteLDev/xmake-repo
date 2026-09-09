#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/IContext.h"
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ILanDiscovery; }
namespace NetherNet { class RtcThreadManager; }
namespace NetherNet { struct GlobalConfiguration; }
// clang-format on

namespace NetherNet {

class ContextProxy : public ::NetherNet::IContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextProxy& operator=(ContextProxy const&);
    ContextProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContextProxy();

    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const;

    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const;

    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const;

    virtual ::NetherNet::ILanDiscovery& getLanDiscovery();

    virtual void onSuspend();

    virtual void onResume();

    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const;

    virtual void _logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const;

    virtual void setLoggingLevel(::NetherNet::LogSeverity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NetherNet::RtcThreadManager const& $getSignalThread() const;

    MCNAPI ::NetherNet::RtcThreadManager const& $getNetworkThread() const;

    MCNAPI ::NetherNet::RtcThreadManager const& $getWorkerThread() const;

    MCNAPI ::NetherNet::ILanDiscovery& $getLanDiscovery();

    MCNAPI void $onSuspend();

    MCNAPI void $onResume();

    MCNAPI ::NetherNet::GlobalConfiguration const& $getGlobalConfig() const;

    MCNAPI void $_logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const;

    MCNAPI void $setLoggingLevel(::NetherNet::LogSeverity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
