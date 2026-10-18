#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::LanEvents { struct DiscoveryRequest; }
namespace NetherNet::LanEvents { struct DiscoveryResponse; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
// clang-format on

namespace NetherNet {

struct ILanEventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILanEventHandler() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
#else // LL_PLAT_C
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const& event);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);
#else // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);
#else // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
#else // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
#else // LL_PLAT_C
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const& event);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const& event);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
