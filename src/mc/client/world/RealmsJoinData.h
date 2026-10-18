#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ServerRegion.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ServerRegion.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsJoinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            ip;
    ::ll::TypedStorage<4, 4, int>                     port;
    ::ll::TypedStorage<8, 8, ::Realms::World&>        world;
    ::ll::TypedStorage<8, 32, ::Realms::ServerRegion> server;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsJoinData& operator=(RealmsJoinData const&);
    RealmsJoinData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsJoinData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RealmsJoinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          ip;
    ::ll::TypedStorage<4, 4, int>                     port;
    ::ll::TypedStorage<8, 8, ::Realms::World&>        world;
    ::ll::TypedStorage<8, 40, ::Realms::ServerRegion> server;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsJoinData& operator=(RealmsJoinData const&);
    RealmsJoinData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsJoinData(::World::RealmsJoinData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::RealmsJoinData const&);
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsJoinData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
