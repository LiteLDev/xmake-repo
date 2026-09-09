#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
