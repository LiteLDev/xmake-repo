#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/identity/edu_common/AuthToken.h"

// auto generated forward declare list
// clang-format off
struct MessToken;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Identity {

struct EduAuthTokenPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> entraToken;
    ::ll::UntypedStorage<8, 104>                     messToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnkb21695;
    ::ll::UntypedStorage<8, 136> mUnk3fc98a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EduAuthTokenPair& operator=(EduAuthTokenPair const&);
    EduAuthTokenPair(EduAuthTokenPair const&);
    EduAuthTokenPair();
#endif // @header-generator platform

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
