#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/certificates/identity/web_services/DemoData.h"
#include "mc/certificates/identity/web_services/TenantData.h"
#include "mc/certificates/identity/web_services/TrialData.h"
#include "mc/certificates/identity/web_services/UserInfo.h"
#include "mc/options/EDUConfigData.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace WebServices::EduSignin {

struct SigninResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                               validated;
    ::ll::TypedStorage<8, 176, ::WebServices::EduSignin::UserInfo>               userInfo;
    ::ll::TypedStorage<8, 32, std::optional<WebServices::EduSignin::TenantData>> tenantData;
    ::ll::TypedStorage<8, 344, std::optional<EDUConfigData>>                     config;
    ::ll::TypedStorage<8, 424, std::optional<ActiveDirectoryPopup>>              popup;
    ::ll::TypedStorage<8, 32, std::optional<WebServices::EduSignin::DemoData>>   demoData;
    ::ll::TypedStorage<4, 8, std::optional<WebServices::EduSignin::TrialData>>   trialData;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk1e58b9;
    ::ll::UntypedStorage<8, 232> mUnk3b364a;
    ::ll::UntypedStorage<8, 40>  mUnk4622a7;
    ::ll::UntypedStorage<8, 392> mUnk2d95bd;
    ::ll::UntypedStorage<8, 552> mUnk9b7949;
    ::ll::UntypedStorage<8, 40>  mUnkd2f5ab;
    ::ll::UntypedStorage<4, 8>   mUnk7bd288;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SigninResponse& operator=(SigninResponse const&);
    SigninResponse(SigninResponse const&);
    SigninResponse();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
