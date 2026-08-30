#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/web_services/EduRole.h"

namespace WebServices::EduSignin {

struct UserInfo {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace WebServices::EduSignin
