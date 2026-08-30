#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> token;
    ::ll::TypedStorage<8, 24, std::string> userId;
    ::ll::TypedStorage<8, 8, long>         expiresOn;
    ::ll::TypedStorage<1, 1, bool>         isDemo;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Identity::AuthToken& operator=(::Identity::AuthToken&&);

    MCNAPI ~AuthToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
