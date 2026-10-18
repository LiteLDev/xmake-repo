#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppConfigs;
class IContentKeyProvider;
class ILevelListCache;
class IMinecraftEventing;
class IOptionRegistry;
class IResourcePackRepository;
class IWorldTemplateManager;
class LevelStorageSource;
class ResourcePackManager;
class TaskGroup;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                 mTaskGroup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>           mLevelListCache;
    ::ll::TypedStorage<8, 8, ::LevelStorageSource const&>  mLevelStorageSource;
    ::ll::UntypedStorage<8, 24>                            mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>        mEventing;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>       mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>       mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>   mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>           mPrimaryUserOptions;
    ::ll::TypedStorage<8, 8, ::IContentKeyProvider const&> mKeyProvider;
    ::ll::TypedStorage<8, 8, ::AppConfigs const&>          mAppConfigs;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDependencies& operator=(GameDependencies const&);
    GameDependencies(GameDependencies const&);
    GameDependencies();
};
#else // @header-generator platform
struct GameDependencies {};
#endif // @header-generator platform

} // namespace LocalServerLauncher
