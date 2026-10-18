#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/network/GameConnectionInfo.h"

struct GameConnectionInfoEx {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 640, ::Social::GameConnectionInfo> connectionInfo;
    ::ll::TypedStorage<8, 24, std::string>                   serverName;
    ::ll::TypedStorage<8, 24, std::string>                   worldName;
    ::ll::TypedStorage<4, 4, ::NetworkType>                  networkTypeOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfoEx();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GameConnectionInfoEx();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/network/GameConnectionInfo.h"

struct GameConnectionInfoEx {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 784, ::Social::GameConnectionInfo> connectionInfo;
    ::ll::TypedStorage<8, 32, ::std::string>                 serverName;
    ::ll::TypedStorage<8, 32, ::std::string>                 worldName;
    ::ll::TypedStorage<4, 4, ::NetworkType>                  networkTypeOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfoEx& operator=(GameConnectionInfoEx const&);
    GameConnectionInfoEx();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameConnectionInfoEx(::GameConnectionInfoEx const&);

    MCAPI ::GameConnectionInfoEx& operator=(::GameConnectionInfoEx&&);

    MCAPI ~GameConnectionInfoEx();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameConnectionInfoEx const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct GameConnectionInfoEx {};
#endif // @header-generator platform
#endif // @header-generator platform
