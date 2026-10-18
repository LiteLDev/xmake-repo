#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/ServiceResponse.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/certificates/PrivateKeyManager.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/identity/edu_common/AuthToken.h"
#include "mc/deps/identity/edu_common/EduIdentityData.h"
#include "mc/options/EducationServicesEnvironment.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ADPopupTelemetryEvent;
class ActiveDirectoryPopup;
class IActiveDirectoryIdentityTelemetry;
#else // @header-generator platform
#endif // @header-generator platform
class IEDUSystems;
#if defined(LL_PLAT_A) // @header-generator platform
class ResponseVerifier;
class WebToken;
#else // @header-generator platform
#endif // @header-generator platform
struct AccessTokenInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct MessToken;
struct ServicePack;
namespace Core { class SingleThreadedLock; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { class IEduAuth; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Identity { class IEduSsoStrategy; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Identity { struct AuthError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Identity { struct AuthToken; }
#endif // @header-generator platform
namespace Identity { struct EduAuthParameters; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Identity { struct ISettingStorageStrategy; }
namespace Identity { struct SignOutResult; }
namespace WebServices { struct IEduWebService; }
#else // @header-generator platform
namespace Identity { struct ServiceResponse; }
#endif // @header-generator platform
namespace WebServices::EduSignin { struct SigninResponse; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace edu::auth { struct CredentialsObserver; }
namespace edu::auth { template<typename T0, typename T1> class CredentialReplaySubject; }
#else // @header-generator platform
namespace Identity { struct SignOutResult; }
#endif // @header-generator platform
// clang-format on

class ActiveDirectoryIdentity : public ::Bedrock::EnableNonOwnerReferences,
                                public ::Bedrock::Threading::EnableQueueForMainThread {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ActiveDirectoryIdentity inner types define
    using ServiceResponse = ::Identity::ServiceResponse;

    using EduAuthCreator = std::function<std::unique_ptr<Identity::IEduAuth>(Identity::EduAuthParameters&&)>;

    using ErrorDetails = std::vector<std::pair<std::string, std::string>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 768, ::Identity::ServiceResponse>                      mResponse;
    ::ll::TypedStorage<1, 1, ::LastClickedSource>                                mLastClickedSource;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState>               mCurrentAuthenticationState;
    ::ll::TypedStorage<8, 96, ::EduIdentityData>                                 mData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::ISettingStorageStrategy>> mSettingsStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::IEduSsoStrategy>>         mSsoStrategy;
    ::ll::UntypedStorage<8, 8>                                                   mSubject;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IActiveDirectoryIdentityTelemetry>> mEventing;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Identity::IEduAuth>>               mEduAuth;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WebServices::IEduWebService>>       mEduWebService;
    ::ll::UntypedStorage<8, 24>                                                  mEduSystems;
    ::ll::TypedStorage<8, 72, std::optional<Identity::AuthToken>>                mGraphToken;
    ::ll::TypedStorage<8, 64, ::PrivateKeyManager>                               mPrivateKeyManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 1000> mUnk46e055;
    ::ll::UntypedStorage<1, 1>    mUnk4d1db4;
    ::ll::UntypedStorage<1, 1>    mUnka7ac16;
    ::ll::UntypedStorage<8, 120>  mUnk27931c;
    ::ll::UntypedStorage<8, 8>    mUnk2243c8;
    ::ll::UntypedStorage<8, 8>    mUnkc35e36;
    ::ll::UntypedStorage<8, 8>    mUnka8221a;
    ::ll::UntypedStorage<8, 8>    mUnk4fb49a;
    ::ll::UntypedStorage<8, 16>   mUnk16c98e;
    ::ll::UntypedStorage<8, 8>    mUnkde78f1;
    ::ll::UntypedStorage<8, 24>   mUnkf84d67;
    ::ll::UntypedStorage<8, 88>   mUnk3ae843;
    ::ll::UntypedStorage<8, 80>   mUnke3078c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActiveDirectoryIdentity& operator=(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity(ActiveDirectoryIdentity const&);
#endif // @header-generator platform
    ActiveDirectoryIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActiveDirectoryIdentity();
#else // @header-generator platform
    virtual ~ActiveDirectoryIdentity() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActiveDirectoryIdentity(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEDUSystems>>,
        ::Identity::ActiveDirectoryIdentityParameters&&
    );

    MCNAPI void _authenticateDemoWithService();

    MCNAPI void _authenticateSignInWithService();

    MCNAPI void _handleAuthenticationResponse(::WebServices::EduSignin::SigninResponse&);

    MCNAPI void _identityGained();

    MCNAPI void _identityLost();

    MCNAPI void _onError(
        std::string const&,
        ::ActiveDirectoryAuthenticationState,
        std::vector<std::pair<std::string, std::string>>
    );

    MCNAPI void _onStatusChanged(::ActiveDirectoryAuthenticationState, ::ActiveDirectoryAuthenticationState);

    MCNAPI ::AccessTokenInfo _parseTokenInfo(std::string const&) const;

    MCNAPI void _populateResponse(::WebServices::EduSignin::SigninResponse const&);

    MCNAPI void _signInCanceled();

    MCNAPI void _updateData(std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>, bool);

    MCNAPI void _updateGraphData(std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>, bool);

    MCNAPI void addObserver(::edu::auth::CredentialsObserver&);

    MCNAPI void fireCodeBuilderLoadPerformanceEvent(::CodeBuilderPerformance::Stage) const;

    MCNAPI void fireEventADPopupEvent(::ADPopupTelemetryEvent const&) const;

    MCNAPI std::string const& getAADIdentityToken() const;

    MCNAPI ::ActiveDirectoryAuthenticationState getAuthenticationState() const;

    MCNAPI void getDemo();

    MCNAPI std::shared_ptr<Identity::IEduAuth> getEduAuth() const;

    MCNAPI std::string const& getEmail() const;

    MCNAPI std::optional<Identity::AuthToken> getGraphToken() const;

    MCNAPI void getIdentity();

    MCNAPI std::string const& getName() const;

    MCNAPI std::string const& getNickname() const;

    MCNAPI std::string const& getOid() const;

    MCNAPI std::optional<ActiveDirectoryPopup> const getPopup() const;

    MCNAPI ::edu::Role getRole() const;

    MCNAPI std::string const& getTenantId() const;

    MCNAPI std::string const& getTenantType() const;

    MCNAPI void initialPackRequest(std::function<void(std::vector<ServicePack>)>);

    MCNAPI bool isDemo() const;

    MCNAPI void resetAuthenticationState();

    MCNAPI void setAuthenticationStateComplete();

    MCNAPI void setAuthenticationStateDemo();

    MCNAPI void setAuthenticationStateOfferPurchase();

    MCNAPI void setEulaAccepted();

    MCNAPI void setLastClickedSource(::LastClickedSource);

    MCNAPI void setPurchaseReceipt(std::string const&, std::function<void(bool)> const&);

    MCNAPI void signOut(std::function<void(Identity::SignOutResult)>) const;

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getServiceEndpoint();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ActiveDirectoryIdentity(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI void _authenticateDemoWithService();

    MCNAPI void _authenticateSignInWithService();

    MCNAPI void _handleAuthenticationResponse(::WebServices::EduSignin::SigninResponse& response);

    MCNAPI void _identityGained();

    MCNAPI void _identityLost();

    MCNAPI void _onError(
        ::std::string const&                                     error,
        ::ActiveDirectoryAuthenticationState                     newState,
        ::std::vector<::std::pair<::std::string, ::std::string>> details
    );

    MCNAPI void _onStatusChanged(::ActiveDirectoryAuthenticationState from, ::ActiveDirectoryAuthenticationState to);

    MCNAPI ::AccessTokenInfo _parseTokenInfo(::std::string const& tokenToParse) const;

    MCNAPI void _populateResponse(::WebServices::EduSignin::SigninResponse const& response);

    MCNAPI void _signInCanceled();

    MCNAPI void _updateData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI void _updateGraphData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI void getIdentity();

    MCNAPI void resetAuthenticationState();

    MCNAPI void signOut(::std::function<void(::Identity::SignOutResult)> callback) const;

    MCNAPI void tick();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& IS_VALID_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& IS_VALID_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& JWT_EXPIRATION_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& JWT_EXPIRATION_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& JWT_REQUEST_ID_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& JWT_REQUEST_ID_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PAYLOAD_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& PAYLOAD_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PUBLIC_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& PUBLIC_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& REQUEST_ID_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& REQUEST_ID_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RESPONSE_FIELD();
#else // @header-generator platform
    MCNAPI static ::std::string const& RESPONSE_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& mCachedServiceEndpoint();
#else // @header-generator platform
    MCNAPI static ::std::string& mCachedServiceEndpoint();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IEDUSystems>>, ::Identity::ActiveDirectoryIdentityParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
