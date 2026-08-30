#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/AsynchronousIPResolver.h"

struct ExternalServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    id;
    ::ll::TypedStorage<4, 4, int>                                    port;
    ::ll::TypedStorage<4, 4, int>                                    protocol;
    ::ll::TypedStorage<4, 4, int>                                    players;
    ::ll::TypedStorage<4, 4, int>                                    maxPlayers;
    ::ll::TypedStorage<8, 24, std::string>                           name;
    ::ll::TypedStorage<8, 24, std::string>                           title;
    ::ll::TypedStorage<8, 24, std::string>                           version;
    ::ll::TypedStorage<8, 24, std::string>                           address;
    ::ll::TypedStorage<8, 8, long>                                   lastAccessedTime;
    ::ll::TypedStorage<8, 64, std::optional<AsynchronousIPResolver>> mFutureIP;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalServer(::ExternalServer const&);

    MCNAPI ::AsynchronousIPResolver const& getFutureIP() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExternalServer const&);
    // NOLINTEND
};
