#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EDUConfigData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ServicePack;
#endif // @header-generator platform
namespace Json { class Value; }
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

namespace WebServices {

struct IEduWebService {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IEduWebService inner types define
    using SigninCallback =
        std::function<void(std::variant<WebServices::EduSignin::SigninResponse, WebServices::EduSignin::SigninError>)>;
#else // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEduWebService() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using GetEduIdentityToken = std::function<const std::string()>;
#else // @header-generator platform
    virtual void setEula() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ClientConfigParser = std::function<std::optional<EDUConfigData>(Json::Value&)>;
#else // @header-generator platform
    virtual void setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SigninCallbackResponse =
        std::variant<WebServices::EduSignin::SigninResponse, WebServices::EduSignin::SigninError>;
#else // @header-generator platform
    virtual void setSkin(::std::string const& newSkin) = 0;

    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    ) = 0;

    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    ) = 0;

    virtual void sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback) = 0;
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace WebServices
