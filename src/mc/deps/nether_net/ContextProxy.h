#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "cstdarg"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mTarget;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkaedcad;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContextProxy& operator=(ContextProxy const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextProxy(ContextProxy const&);
#endif // @header-generator platform
    ContextProxy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContextProxy();
#else // @header-generator platform
    virtual ~ContextProxy() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const;
#else // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getSignalThread() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const;
#else // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getNetworkThread() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const;
#else // @header-generator platform
    virtual ::NetherNet::RtcThreadManager const& getWorkerThread() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::ILanDiscovery& getLanDiscovery();
#else // @header-generator platform
    virtual ::NetherNet::ILanDiscovery& getLanDiscovery() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSuspend();
#else // @header-generator platform
    virtual void onSuspend() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onResume();
#else // @header-generator platform
    virtual void onResume() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const;
#else // @header-generator platform
    virtual ::NetherNet::GlobalConfiguration const& getGlobalConfig() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const;
#else // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity min) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoggingLevel(::NetherNet::LogSeverity);
#else // @header-generator platform
    virtual void _logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContextProxy(::NetherNet::IContext& target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::IContext& target);
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_logMessage(::NetherNet::LogSeverity, char const*, ::__va_list) const;
#else // @header-generator platform
    MCNAPI void $setLoggingLevel(::NetherNet::LogSeverity min);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLoggingLevel(::NetherNet::LogSeverity);
#else // @header-generator platform
    MCNAPI void $_logMessage(::NetherNet::LogSeverity level, char const* fmt, char* args) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
