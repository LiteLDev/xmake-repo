#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace edu::auth {

struct CredentialsAcquired {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         isDemo;
    ::ll::TypedStorage<8, 24, std::string> skin;
    ::ll::TypedStorage<8, 24, std::string> nickname;
    ::ll::TypedStorage<8, 24, std::string> oid;
    ::ll::TypedStorage<8, 24, std::string> token;
    ::ll::TypedStorage<1, 1, ::edu::Role>  role;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnke1a974;
    ::ll::UntypedStorage<8, 32> mUnkc23503;
    ::ll::UntypedStorage<8, 32> mUnkcef67c;
    ::ll::UntypedStorage<8, 32> mUnk31658b;
    ::ll::UntypedStorage<8, 32> mUnk5a4154;
    ::ll::UntypedStorage<1, 1>  mUnk7e4275;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CredentialsAcquired& operator=(CredentialsAcquired const&);
    CredentialsAcquired(CredentialsAcquired const&);
    CredentialsAcquired();
#endif // @header-generator platform
};

} // namespace edu::auth
