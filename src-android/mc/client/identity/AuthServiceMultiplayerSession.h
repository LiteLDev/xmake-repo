#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/AuthServiceStatus.h"

namespace Social {

struct AuthServiceMultiplayerSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::AuthServiceStatus> status;
    ::ll::TypedStorage<8, 24, std::string>                signedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceMultiplayerSession& operator=(AuthServiceMultiplayerSession const&);
};

} // namespace Social
