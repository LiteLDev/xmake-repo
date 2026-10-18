#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IServerURLResolver.h"

// auto generated forward declare list
// clang-format off
struct PingedCompatibleServer;
namespace RakNet { struct RakNetGUID; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IServerURLResolver.h"

// auto generated forward declare list
// clang-format off
struct PingedCompatibleServer;
namespace RakNet { struct RakNetGUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class ServerURLResolver : public ::World::IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerURLResolver();

    virtual bool fromStringExplicitPort(::PingedCompatibleServer&, char const*, ushort, int);

    virtual void fromString(::RakNet::RakNetGUID&, char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $fromStringExplicitPort(::PingedCompatibleServer&, char const*, ushort, int);

    MCNAPI void $fromString(::RakNet::RakNetGUID&, char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ServerURLResolver : public ::World::IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerURLResolver() /*override*/ = default;

    virtual bool
    fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion) /*override*/;

    virtual void fromString(::RakNet::RakNetGUID& guid, char const* source) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion);

    MCAPI void $fromString(::RakNet::RakNetGUID& guid, char const* source);
    // NOLINTEND
};
#else // @header-generator platform
class ServerURLResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
