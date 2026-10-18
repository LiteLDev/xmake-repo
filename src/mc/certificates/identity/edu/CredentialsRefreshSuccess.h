#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredentialsRefreshSuccess {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> token;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke3e762;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CredentialsRefreshSuccess& operator=(CredentialsRefreshSuccess const&);
    CredentialsRefreshSuccess(CredentialsRefreshSuccess const&);
    CredentialsRefreshSuccess();
#endif // @header-generator platform
};

} // namespace edu::auth
