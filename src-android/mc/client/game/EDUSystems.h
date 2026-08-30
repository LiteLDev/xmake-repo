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
class AbstractScene;
class ActiveDirectoryIdentity;
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
struct EDUConfigData;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Identity { class IEduAuth; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace ImmersiveReaderUtils { class ImmersiveReaderHitListener; }
namespace MSGraph { struct IGraphApi; }
namespace Social { class EduMultiplayerHeadlessJoiner; }
namespace Social { class EduMultiplayerP2P; }
namespace Social { class IEduMultiplayerHeadless; }
namespace Social { class MultiplayerService; }
// clang-format on

class EDUSystems : public ::IEDUSystems, public ::edu::auth::CredentialsObserver {
public:
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
    // NOLINTEND

public:
    // prevent constructor by default
    EDUSystems& operator=(EDUSystems const&);
    EDUSystems(EDUSystems const&);
    EDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUSystems();

    virtual ::Identity::IEduAuth& getEduAuth() const;

    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    virtual void onNotify(::EDUConfigData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::IMinecraftGame&, ::EducationServicesEnvironment, ::Identity::ActiveDirectoryIdentityParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Identity::IEduAuth& $getEduAuth() const;

    MCNAPI ::Social::IEduMultiplayerHeadless& $getMultiplayerHeadless() const;

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    MCNAPI void $onNotify(::EDUConfigData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
