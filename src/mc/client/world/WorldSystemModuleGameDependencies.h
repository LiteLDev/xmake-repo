#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CloudSaveSystemWrapper;
class DateManager;
class ExternalContentManager;
class FileArchiver;
class GatheringManager;
class IClientInstance;
class IContentAcquisition;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IDlcValidation;
class IEntitlementManager;
class IExternalServerFile;
class IGameServerStartup;
class ILevelListCache;
class IMinecraftEventing;
class INetworkGameConnector;
class IOfferRepository;
class IResourcePackRepository;
class IStoreCatalogRepository;
class IThirdPartyServerRepository;
class LevelDbEnv;
class LocalPlayer;
class RealmsAPI;
class ResourcePackManager;
class ServerLocator;
class ServicesManager;
class ToastManager;
class WorldTemplateManager;
struct IGameServerShutdown;
struct LocalPlayerChangedConnector;
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CloudSaveSystemWrapper;
class DateManager;
class ExternalContentManager;
class FileArchiver;
class GatheringManager;
class IClientInstance;
class IContentAcquisition;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IDlcValidation;
class IEntitlementManager;
class IExternalServerFile;
class IGameServerStartup;
class ILevelListCache;
class IMinecraftEventing;
class INetworkGameConnector;
class IOfferRepository;
class IResourcePackRepository;
class IStoreCatalogRepository;
class IThirdPartyServerRepository;
class LevelDbEnv;
class LocalPlayer;
class RealmsAPI;
class ResourcePackManager;
class ServerLocator;
class ServicesManager;
class ToastManager;
class WorldTemplateManager;
struct IGameServerShutdown;
struct LocalPlayerChangedConnector;
namespace OreUI { class Router; }
namespace Parties { class IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct WorldSystemModuleGameDependencies {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::TypedStorage<1, 1, bool> mIsEditorMode;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<std::string> const&> mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<std::string> const&> mTempDirectory;
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&> mKeyProvider;
    ::ll::UntypedStorage<8, 24> mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&> mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&> mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::UntypedStorage<8, 8> mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    ::ll::UntypedStorage<8, 24> mResourcePackRepository;
    ::ll::UntypedStorage<8, 24> mContentTierManager;
    ::ll::UntypedStorage<8, 24> mExternalServerFile;
    ::ll::UntypedStorage<8, 24> mOfferRepository;
    ::ll::UntypedStorage<8, 24> mThirdPartyServerRepository;
    ::ll::UntypedStorage<8, 48> mGetMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 48> mGetLocalPlayer;
    ::ll::TypedStorage<8, 8, ::LocalPlayerChangedConnector const&> mLocalPlayerChangedConnector;
    ::ll::TypedStorage<8, 8, ::ServerLocator&> mServerLocator;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&> mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&> mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&> mNetworkGameConnector;
    ::ll::UntypedStorage<8, 24> mArchiver;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&> mUserManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::TypedStorage<8, 8, ::CloudSaveSystemWrapper&> mCloudSaveSystem;
    ::ll::UntypedStorage<8, 24> mDateManager;
    ::ll::UntypedStorage<8, 8> mServicesManager;
    ::ll::UntypedStorage<8, 24> mExternalContentManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ToastManager&> mToastManager;
    ::ll::UntypedStorage<8, 48> mIsRealmJoinable;
    ::ll::UntypedStorage<8, 48> mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 32> mGatheringManager;
    ::ll::UntypedStorage<8, 96> mProgressScreenNavigation;
    ::ll::UntypedStorage<8, 16> mRouter;
    ::ll::UntypedStorage<8, 48> mGetPartyProvider;
    ::ll::UntypedStorage<8, 48> mCanUserDoRealmRoleAction;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystemModuleGameDependencies& operator=(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldSystemModuleGameDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WorldSystemModuleGameDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                                mLevelListCache;
    ::ll::TypedStorage<1, 1, bool>                                                              mIsEduMode;
    ::ll::TypedStorage<1, 1, bool>                                                              mIsEditorMode;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<::std::string> const&>                          mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<::std::string> const&>                          mTempDirectory;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                                mContentManager;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                      mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&>      mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                                 mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                            mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                        mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>             mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                                mClientInstance;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>         mResourcePackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>>       mContentTierManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile>>             mExternalServerFile;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>>                mOfferRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>>
                                                                             mGetMultiplayerServiceManager;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>             mGetLocalPlayer;
    ::ll::TypedStorage<8, 8, ::LocalPlayerChangedConnector const&>           mLocalPlayerChangedConnector;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                               mServerLocator;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                          mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>                         mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>                       mNetworkGameConnector;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>> mArchiver;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                          mMinecraftEventing;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&> mUserManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>                                mRealmsAPI;
    ::ll::TypedStorage<8, 8, ::CloudSaveSystemWrapper&>                                    mCloudSaveSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager>>                mDateManager;
    ::ll::TypedStorage<8, 8, ::ServicesManager&>                                           mServicesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>>     mExternalContentManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                       mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                              mToastManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::RealmId)>>                    mIsRealmJoinable;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                     mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>>           mGatheringManager;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                             mProgressScreenNavigation;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                             mRouter;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()>>
        mGetPartyProvider;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)>>
        mCanUserDoRealmRoleAction;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystemModuleGameDependencies& operator=(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies();
};
#else // @header-generator platform
struct WorldSystemModuleGameDependencies {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
