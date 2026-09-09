#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  error;
    ::ll::TypedStorage<4, 8, std::optional<int>>                            status;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                           subStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> diagnostics;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthError& operator=(AuthError const&);
    AuthError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AuthError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
