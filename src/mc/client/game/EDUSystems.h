#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/common/IEDUSystems.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AbstractScene;
#else // @header-generator platform
#endif // @header-generator platform
class ActiveDirectoryIdentity;
#if defined(LL_PLAT_A) // @header-generator platform
class ActiveDirectorySystem;
class EduClassroomLevelDataAdapter;
class EduCloudLevelDataAdapter;
class EduGraphService;
class EduScriptingCodingLevelDataAdapter;
class IClientInstance;
class IEDUDiscoveryService;
class IMinecraftGame;
class LessonInfo;
class LibraryDeeplinkListener;
class ServicePackSystem;
class WebviewSystem;
#else // @header-generator platform
#endif // @header-generator platform
struct EDUConfigData;
#if defined(LL_PLAT_A) // @header-generator platform
namespace EduCloud { struct IEduCloudSaveSystem; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { class IEduAuth; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ImmersiveReaderUtils { class ImmersiveReaderHitListener; }
namespace MSGraph { struct IGraphApi; }
namespace Social { class EduMultiplayerHeadlessJoiner; }
namespace Social { class EduMultiplayerP2P; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social { class IEduMultiplayerHeadless; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social { class MultiplayerService; }
#else // @header-generator platform
namespace edu::auth { struct CredsLost; }
class AbstractScene;
class IMinecraftGame;
class ServicePackSystem;
#endif // @header-generator platform
// clang-format on

class EDUSystems : public ::IEDUSystems, public ::edu::auth::CredentialsObserver {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                                 mMinecraft;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ImmersiveReaderUtils::ImmersiveReaderHitListener>> mImmersiveHitListener;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::EduMultiplayerP2P>>                       mDiscovery;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActiveDirectoryIdentity>>              mActiveDirectoryIdentity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActiveDirectorySystem>>                mActiveDirectorySystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WebviewSystem>>                        mWebviewSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServicePackSystem>>                    mServicePackSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LibraryDeeplinkListener>>              mDeepLinkListener;
    ::ll::TypedStorage<8, 16, std::shared_ptr<EduGraphService>>                     mEduGraphService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EduCloud::IEduCloudSaveSystem>>        mEduCloudSaveSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LessonInfo>>                           mLessonInfo;
    ::ll::UntypedStorage<8, 8>                                                      mEduClassroomDataAdapter;
    ::ll::UntypedStorage<8, 8>                                                      mEduCloudDataAdapter;
    ::ll::UntypedStorage<8, 8>                                                      mEduScriptingCodingDataAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::EduMultiplayerHeadlessJoiner>> mEduMultiplayerHeadlessJoiner;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Identity::IEduAuth>>                  mEduAuth;
    ::ll::TypedStorage<8, 24, std::string>                                          mReferrerId;
    ::ll::TypedStorage<8, 24, std::string>                                          mReferrerType;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8>  mUnk5a480a;
    ::ll::UntypedStorage<8, 8>  mUnkd98ae2;
    ::ll::UntypedStorage<8, 16> mUnkbac05e;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8>  mUnk5920c5;
    ::ll::UntypedStorage<8, 8>  mUnkc12117;
    ::ll::UntypedStorage<8, 16> mUnke1280d;
    ::ll::UntypedStorage<8, 8>  mUnk4354d4;
    ::ll::UntypedStorage<8, 8>  mUnkb4e976;
    ::ll::UntypedStorage<8, 8>  mUnke9b64d;
    ::ll::UntypedStorage<8, 8>  mUnkb33b75;
    ::ll::UntypedStorage<8, 8>  mUnkdf3822;
    ::ll::UntypedStorage<8, 16> mUnk64df70;
    ::ll::UntypedStorage<8, 8>  mUnk133fb2;
    ::ll::UntypedStorage<8, 8>  mUnk2e9004;
    ::ll::UntypedStorage<8, 8>  mUnkfcbcee;
    ::ll::UntypedStorage<8, 8>  mUnk69737f;
    ::ll::UntypedStorage<8, 8>  mUnkebf86c;
    ::ll::UntypedStorage<8, 8>  mUnkf20ee4;
    ::ll::UntypedStorage<8, 16> mUnkb5036a;
    ::ll::UntypedStorage<8, 32> mUnkbb5665;
    ::ll::UntypedStorage<8, 32> mUnka4c224;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EDUSystems& operator=(EDUSystems const&);
    EDUSystems(EDUSystems const&);
    EDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EDUSystems();
#else // @header-generator platform
    virtual ~EDUSystems() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Identity::IEduAuth& getEduAuth() const;
#else // @header-generator platform
    virtual ::Identity::IEduAuth& getEduAuth() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;
#else // LL_PLAT_C
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;

    virtual void onNotify(::EDUConfigData const& state) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    virtual void onNotify(::EDUConfigData const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    EDUSystems(::IMinecraftGame&, ::EducationServicesEnvironment, ::Identity::ActiveDirectoryIdentityParameters&&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>> getActiveDirectoryIdentity();

    MCNAPI ::ActiveDirectorySystem& getActiveDirectorySystem();

    MCNAPI ::LibraryDeeplinkListener* getDeepLinkListener() const;

    MCNAPI ::IEDUDiscoveryService& getDiscoveryService();

    MCNAPI ::Bedrock::NonOwnerPointer<EduCloud::IEduCloudSaveSystem> getEduCloudSaveSystem();

    MCNAPI ::LessonInfo& getLessonInfo() const;

    MCNAPI void getMultiplayerServiceListToRegister(std::vector<std::shared_ptr<Social::MultiplayerService>>&);

    MCNAPI std::string getReferrerId() const;

    MCNAPI ::ServicePackSystem* getServicePackSystem() const;

    MCNAPI ::WebviewSystem* getWebviewSystem();

    MCNAPI ::ServicePackSystem*
        initializeServicePackSystem(::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>>);

    MCNAPI bool needsFramePriority(::AbstractScene*) const;

    MCNAPI void onClientLevelExit();

    MCNAPI void onInitFinished();

    MCNAPI void setDeepLinkListener(std::unique_ptr<LibraryDeeplinkListener>);

    MCNAPI void setReferrerId(std::string);

    MCNAPI void setReferrerType(std::string);

    MCNAPI void tick(bool) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI EDUSystems(
        ::IMinecraftGame&                               game,
        ::EducationServicesEnvironment                  environment,
        ::Identity::ActiveDirectoryIdentityParameters&& activeDirectoryIdentityParameters
    );

    MCNAPI ::std::string getReferrerId() const;

    MCNAPI ::ServicePackSystem*
    initializeServicePackSystem(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity);

    MCNAPI bool needsFramePriority(::AbstractScene* activeScene) const;

    MCNAPI void onInitFinished();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::IMinecraftGame&, ::EducationServicesEnvironment, ::Identity::ActiveDirectoryIdentityParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::IMinecraftGame&                               game,
        ::EducationServicesEnvironment                  environment,
        ::Identity::ActiveDirectoryIdentityParameters&& activeDirectoryIdentityParameters
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Identity::IEduAuth& $getEduAuth() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Identity::IEduAuth& $getEduAuth() const;

    MCNAPI ::Social::IEduMultiplayerHeadless& $getMultiplayerHeadless() const;

    MCNAPI void $onNotify(::EDUConfigData const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::IEduMultiplayerHeadless& $getMultiplayerHeadless() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    MCNAPI void $onNotify(::EDUConfigData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
