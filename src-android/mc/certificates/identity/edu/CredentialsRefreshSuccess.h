#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredentialsRefreshSuccess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> token;
    // NOLINTEND
};

} // namespace edu::auth
