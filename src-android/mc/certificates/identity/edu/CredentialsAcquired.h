#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

namespace edu::auth {

struct CredentialsAcquired {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         isDemo;
    ::ll::TypedStorage<8, 24, std::string> skin;
    ::ll::TypedStorage<8, 24, std::string> nickname;
    ::ll::TypedStorage<8, 24, std::string> oid;
    ::ll::TypedStorage<8, 24, std::string> token;
    ::ll::TypedStorage<1, 1, ::edu::Role>  role;
    // NOLINTEND
};

} // namespace edu::auth
