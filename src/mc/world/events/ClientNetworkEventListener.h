#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkEventListener() = default;

    virtual ::EventResult onMessage(::ClientMessageEvent const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkEventListener() = default;

    virtual ::EventResult onMessage(::ClientMessageEvent const& messageEvent);
    // NOLINTEND
};
#else // @header-generator platform
class ClientNetworkEventListener {};
#endif // @header-generator platform
#endif // @header-generator platform
