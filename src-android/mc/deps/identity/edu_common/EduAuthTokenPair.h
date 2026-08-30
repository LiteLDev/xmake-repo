#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/identity/edu_common/AuthToken.h"

// auto generated forward declare list
// clang-format off
struct MessToken;
// clang-format on

namespace Identity {

struct EduAuthTokenPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> entraToken;
    ::ll::UntypedStorage<8, 104>                     messToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduAuthTokenPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
