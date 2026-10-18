#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/web_services/IEduWebService.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/certificates/identity/web_services/SigninContext.h"
#endif // @header-generator platform
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/EDUConfigData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ResponseVerifier;
class TaskGroup;
#else // @header-generator platform
struct ServicePack;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
#endif // @header-generator platform
// clang-format on

namespace WebServices {

class EduWebService : public ::WebServices::IEduWebService, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                           mResponseVerifier;
    ::ll::UntypedStorage<8, 48>                          mGetEduIdentityToken;
    ::ll::UntypedStorage<8, 48>                          mConfigParser;
    ::ll::TypedStorage<8, 24, std::string>               mAppSessionId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc8518d;
    ::ll::UntypedStorage<8, 64> mUnk94a7fb;
    ::ll::UntypedStorage<8, 64> mUnk3498df;
    ::ll::UntypedStorage<8, 32> mUnkc05d61;
    ::ll::UntypedStorage<8, 8>  mUnkc67318;
    // NOLINTEND

public:
    // prevent constructor by default
    EduWebService& operator=(EduWebService const&);
    EduWebService(EduWebService const&);
    EduWebService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduWebService() /*override*/ = default;

    virtual void setEula() /*override*/;

    virtual void setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    ) /*override*/;

    virtual void setSkin(::std::string const& newSkin) /*override*/;

    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    ) /*override*/;

    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    ) /*override*/;

    virtual void
    sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void _authenticateWithService(
        ::Bedrock::Http::Response response,
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                                     callback,
        ::WebServices::SigninContext context
    );

    MCNAPI ::Bedrock::Http::Request
    getRequest(::std::string_view url, ::std::string apiVersion, bool includeAuth, ::Json::Value&& body);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setEula();

    MCNAPI void $setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    );

    MCNAPI void $setSkin(::std::string const& newSkin);

    MCNAPI void $signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    );

    MCNAPI void $signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    );

    MCNAPI void $sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback);
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace WebServices
