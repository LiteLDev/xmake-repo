#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/social/EduHeadlessConnectionHandshake.h"
#include "mc/social/EduResponseError.h"

namespace Social {

struct EduJoinServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>>                error;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                             ip;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                      port;
    ::ll::TypedStorage<8, 120, std::optional<Social::EduHeadlessConnectionHandshake>> handshake;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduJoinServerResponse(::Social::EduJoinServerResponse const&);

    MCNAPI EduJoinServerResponse(::Social::EduJoinServerResponse&&);

    MCNAPI ~EduJoinServerResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::EduJoinServerResponse const&);

    MCNAPI void* $ctor(::Social::EduJoinServerResponse&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
