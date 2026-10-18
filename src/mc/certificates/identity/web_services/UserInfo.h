#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/web_services/EduRole.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace WebServices::EduSignin {

struct UserInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                              isNewUser;
    ::ll::TypedStorage<1, 1, bool>                              licensed;
    ::ll::TypedStorage<1, 1, bool>                              acceptedEula;
    ::ll::TypedStorage<1, 1, ::WebServices::EduSignin::EduRole> role;
    ::ll::TypedStorage<8, 24, std::string>                      tenantType;
    ::ll::TypedStorage<8, 24, std::string>                      skin;
    ::ll::TypedStorage<8, 24, std::string>                      anonimizedOid;
    ::ll::TypedStorage<8, 24, std::string>                      nickname;
    ::ll::TypedStorage<8, 24, std::string>                      shareableIdentityToken;
    ::ll::TypedStorage<8, 24, std::string>                      name;
    ::ll::TypedStorage<8, 24, std::string>                      eduToken;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkf1f7db;
    ::ll::UntypedStorage<1, 1>  mUnkd87f8d;
    ::ll::UntypedStorage<1, 1>  mUnkc971a5;
    ::ll::UntypedStorage<1, 1>  mUnk6665c8;
    ::ll::UntypedStorage<8, 32> mUnk978076;
    ::ll::UntypedStorage<8, 32> mUnk4f365d;
    ::ll::UntypedStorage<8, 32> mUnk1a0aa5;
    ::ll::UntypedStorage<8, 32> mUnkcb106c;
    ::ll::UntypedStorage<8, 32> mUnk1e09fc;
    ::ll::UntypedStorage<8, 32> mUnkf70377;
    ::ll::UntypedStorage<8, 32> mUnk5d895a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UserInfo& operator=(UserInfo const&);
    UserInfo(UserInfo const&);
    UserInfo();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
