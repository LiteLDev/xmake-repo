#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/StartLocalWorldResult.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class IGameServerStartup;
class ILevelListCache;
struct LevelSummary;
namespace Core { class FileSystem; }
namespace World { class IWorldStorageHandler; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/StartLocalWorldResult.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class IGameServerStartup;
class ILevelListCache;
namespace Core { class FileSystem; }
namespace World { class IWorldStorageHandler; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class LocalWorldStarter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                       mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                          mLevelListCache;
    ::ll::TypedStorage<8, 16, ::World::IWorldStorageHandler&>             mWorldStorageHandler;
    ::ll::UntypedStorage<8, 48>                                           mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<8, 8, ::Core::FileSystem&>                         mFileSystem;
    ::ll::UntypedStorage<8, 16>                                           mServerStartupResult;
    ::ll::TypedStorage<4, 8, std::optional<World::StartLocalWorldResult>> mStartLocalWorldErrorOverride;
    ::ll::UntypedStorage<1, 16>                                           mBackupLocalWorldErrorOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldStarter& operator=(LocalWorldStarter const&);
    LocalWorldStarter(LocalWorldStarter const&);
    LocalWorldStarter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalWorldStarter(
        ::IGameServerStartup&,
        ::ILevelListCache&,
        ::World::IWorldStorageHandler&,
        std::function<bool()>,
        ::Core::FileSystem&
    );

    MCNAPI void backupThenStartLocalWorld(
        ::World::WorldID const&,
        std::function<
            void(World::IWorldStorageHandler::DuplicateWorldResult, std::optional<World::StartLocalWorldResult>)>
    );

    MCNAPI bool hasConfirmedPlatformLockedContentForWorld(::World::WorldID const&);

    MCNAPI void setConfirmedPlatformLockedContentForWorld(::World::WorldID const&);

    MCNAPI ::World::StartLocalWorldResult startLocalWorld(::World::WorldID const&);

    MCNAPI ::World::StartLocalWorldResult validateLevelSummary(::LevelSummary const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IGameServerStartup&,
        ::ILevelListCache&,
        ::World::IWorldStorageHandler&,
        std::function<bool()>,
        ::Core::FileSystem&
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LocalWorldStarter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                           mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                              mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                  mWorldStorageHandler;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                        mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<8, 8, ::Core::FileSystem&>                             mFileSystem;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>              mServerStartupResult;
    ::ll::TypedStorage<4, 8, ::std::optional<::World::StartLocalWorldResult>> mStartLocalWorldErrorOverride;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::IWorldStorageHandler::DuplicateWorldResult>>
        mBackupLocalWorldErrorOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldStarter& operator=(LocalWorldStarter const&);
    LocalWorldStarter(LocalWorldStarter const&);
    LocalWorldStarter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void backupThenStartLocalWorld(
        ::World::WorldID const& worldID,
        ::std::function<
            void(::World::IWorldStorageHandler::DuplicateWorldResult, ::std::optional<::World::StartLocalWorldResult>)>
            onComplete
    );

    MCAPI void setConfirmedPlatformLockedContentForWorld(::World::WorldID const& worldID);

    MCAPI ::World::StartLocalWorldResult startLocalWorld(::World::WorldID const& worldID);
    // NOLINTEND
};
#else // @header-generator platform
class LocalWorldStarter {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
