#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppConfigs;
class ClientNetworkSystem;
class DebugEndPoint;
class IClientDimensionExtensions;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class ILevelListCache;
class IMinecraftApp;
class IMinecraftEventing;
class IOptionRegistry;
class IPacketSerializationController;
class IResourcePackRepository;
class IWorldTemplateManager;
class LevelDbEnv;
class LevelStorageSource;
class NetworkSessionOwner;
class ResourcePackManager;
class ServerInstanceEventCoordinator;
class ServicesManager;
class SignalingService;
class TaskGroup;
class TrialManager;
namespace Core { class FilePathManager; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher::Impl {

#if defined(LL_PLAT_A) // @header-generator platform
struct AllDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                               mTaskGroup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                         mLevelListCache;
    ::ll::TypedStorage<8, 8, ::LevelStorageSource const&>                mLevelStorageSource;
    ::ll::UntypedStorage<8, 24>                                          mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                      mEventing;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                     mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                     mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                 mResourcePackRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>>          mPrimaryUserOptions;
    ::ll::TypedStorage<8, 8, ::IContentKeyProvider const&>               mKeyProvider;
    ::ll::TypedStorage<8, 8, ::AppConfigs const&>                        mAppConfigs;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                           mApp;
    ::ll::UntypedStorage<8, 24>                                          mCoordinator;
    ::ll::UntypedStorage<8, 24>                                          mPathManager;
    ::ll::UntypedStorage<8, 24>                                          mPrimaryClientInstance;
    ::ll::TypedStorage<1, 1, bool>                                       mIsServerVisible;
    ::ll::UntypedStorage<8, 24>                                          mContentTierManager;
    ::ll::UntypedStorage<8, 24>                                          mUserManager;
    ::ll::TypedStorage<8, 8, ::DebugEndPoint*>                           mDebugEndPoint;
    ::ll::UntypedStorage<8, 24>                                          mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                      mTrialManager;
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager const&> mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                         mContentManager;
    ::ll::TypedStorage<8, 8, ::LevelDbEnv&>                              mDBEnv;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem*>                     mClientNetworkSystem;
    ::ll::UntypedStorage<8, 48>                                          mHasAllValidCrossPlatformSkin;
    ::ll::UntypedStorage<8, 8>                                           mServicesManager;
    ::ll::UntypedStorage<8, 24>                                          mSignalingService;
    ::ll::UntypedStorage<8, 16>                                          mPacketController;
    ::ll::UntypedStorage<8, 64>                                          mCreateClientExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    AllDependencies& operator=(AllDependencies const&);
    AllDependencies(AllDependencies const&);
    AllDependencies();
};
#else // @header-generator platform
struct AllDependencies {};
#endif // @header-generator platform

} // namespace LocalServerLauncher::Impl
