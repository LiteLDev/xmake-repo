#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/ServiceResponse.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/certificates/PrivateKeyManager.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#include "mc/deps/identity/edu_common/AuthToken.h"
#include "mc/deps/identity/edu_common/EduIdentityData.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ADPopupTelemetryEvent;
class ActiveDirectoryPopup;
class IActiveDirectoryIdentityTelemetry;
class IEDUSystems;
class ResponseVerifier;
class WebToken;
struct AccessTokenInfo;
struct MessToken;
struct ServicePack;
namespace Core { class SingleThreadedLock; }
namespace Identity { class IEduAuth; }
namespace Identity { class IEduSsoStrategy; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Identity { struct AuthError; }
namespace Identity { struct EduAuthParameters; }
namespace Identity { struct ISettingStorageStrategy; }
namespace Identity { struct SignOutResult; }
namespace WebServices { struct IEduWebService; }
namespace WebServices::EduSignin { struct SigninResponse; }
namespace edu::auth { struct CredentialsObserver; }
namespace edu::auth { template<typename T0, typename T1> class CredentialReplaySubject; }
// clang-format on

class ActiveDirectoryIdentity : public ::Bedrock::EnableNonOwnerReferences,
                                public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // ActiveDirectoryIdentity inner types define
    using ServiceResponse = ::Identity::ServiceResponse;

    using EduAuthCreator = std::function<std::unique_ptr<Identity::IEduAuth>(Identity::EduAuthParameters&&)>;

    using ErrorDetails = std::vector<std::pair<std::string, std::string>>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryIdentity();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& IS_VALID_FIELD();

    MCNAPI static std::string const& JWT_EXPIRATION_FIELD();

    MCNAPI static std::string const& JWT_REQUEST_ID_FIELD();

    MCNAPI static std::string const& PAYLOAD_FIELD();

    MCNAPI static std::string const& PUBLIC_KEY();

    MCNAPI static std::string const& REQUEST_ID_FIELD();

    MCNAPI static std::string const& RESPONSE_FIELD();

    MCNAPI static std::string& mCachedServiceEndpoint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
