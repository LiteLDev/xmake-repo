#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EDUConfigData;
namespace Json { class Value; }
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

namespace WebServices {

struct IEduWebService {
public:
    // IEduWebService inner types define
    using SigninCallback =
        std::function<void(std::variant<WebServices::EduSignin::SigninResponse, WebServices::EduSignin::SigninError>)>;

    using GetEduIdentityToken = std::function<const std::string()>;

    using ClientConfigParser = std::function<std::optional<EDUConfigData>(Json::Value&)>;

    using SigninCallbackResponse =
        std::variant<WebServices::EduSignin::SigninResponse, WebServices::EduSignin::SigninError>;
};

} // namespace WebServices
