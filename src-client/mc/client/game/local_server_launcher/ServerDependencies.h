#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class DebugEndPoint;
class IClientDimensionExtensions;
class IClientInstance;
class IContentTierManager;
class ILevelListCache;
class IMinecraftApp;
class IMinecraftEventing;
class IOptionRegistry;
class IPacketSerializationController;
class IResourcePackRepository;
class NetworkSessionOwner;
class ServerInstanceEventCoordinator;
class ServicesManager;
class SignalingService;
namespace Core { class FilePathManager; }
namespace Social { class IUserManager; }
// clang-format on

namespace LocalServerLauncher::Impl {

struct ServerDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                        mApp;
    ::ll::UntypedStorage<8, 24>                                       mCoordinator;
    ::ll::UntypedStorage<8, 24>                                       mPathManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const IOptionRegistry>> mPrimaryUserOptions;
    ::ll::UntypedStorage<8, 24>                                       mPrimaryClientInstance;
    ::ll::TypedStorage<1, 1, bool>                                    mIsServerVisible;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                   mEventing;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>              mResourcePackRepository;
    ::ll::UntypedStorage<8, 24>                                       mContentTierManager;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                      mLevelListCache;
    ::ll::UntypedStorage<8, 24>                                       mUserManager;
    ::ll::TypedStorage<8, 8, ::DebugEndPoint*>                        mDebugEndPoint;
    ::ll::UntypedStorage<8, 24>                                       mNetworkSessionOwner;
    ::ll::UntypedStorage<8, 8>                                        mServicesManager;
    ::ll::UntypedStorage<8, 24>                                       mSignalingService;
    ::ll::UntypedStorage<8, 16>                                       mPacketController;
    ::ll::UntypedStorage<8, 64>                                       mCreateClientExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerDependencies& operator=(ServerDependencies const&);
    ServerDependencies(ServerDependencies const&);
    ServerDependencies();
};

} // namespace LocalServerLauncher::Impl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
