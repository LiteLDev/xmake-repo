#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/certificates/identity/web_services/DemoData.h"
#include "mc/certificates/identity/web_services/TenantData.h"
#include "mc/certificates/identity/web_services/TrialData.h"
#include "mc/certificates/identity/web_services/UserInfo.h"
#include "mc/options/EDUConfigData.h"

namespace WebServices::EduSignin {

struct SigninResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               validated;
    ::ll::TypedStorage<8, 176, ::WebServices::EduSignin::UserInfo>               userInfo;
    ::ll::TypedStorage<8, 32, std::optional<WebServices::EduSignin::TenantData>> tenantData;
    ::ll::TypedStorage<8, 344, std::optional<EDUConfigData>>                     config;
    ::ll::TypedStorage<8, 424, std::optional<ActiveDirectoryPopup>>              popup;
    ::ll::TypedStorage<8, 32, std::optional<WebServices::EduSignin::DemoData>>   demoData;
    ::ll::TypedStorage<4, 8, std::optional<WebServices::EduSignin::TrialData>>   trialData;
    // NOLINTEND
};

} // namespace WebServices::EduSignin
