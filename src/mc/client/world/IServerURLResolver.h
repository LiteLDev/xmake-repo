#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
class IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerURLResolver();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerURLResolver() = default;

    virtual bool
    fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion) = 0;

    virtual void fromString(::RakNet::RakNetGUID& guid, char const* source) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IServerURLResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
