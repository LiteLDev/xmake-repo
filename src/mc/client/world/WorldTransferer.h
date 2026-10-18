#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class ILevelListCache;
class IMinecraftEventing;
namespace World { class IWorldStorageHandler; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/TransferResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class ILevelListCache;
class IMinecraftEventing;
namespace World { class IWorldStorageHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 24>                              mFileArchiver;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>             mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>          mEventing;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&> mWorldStorageHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferer& operator=(WorldTransferer const&);
    WorldTransferer(WorldTransferer const&);
    WorldTransferer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTransferer(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>,
        ::IMinecraftEventing&,
        ::World::IWorldStorageHandler&,
        bool
    );

    MCNAPI void backupWorld(
        ::World::WorldID const&,
        std::function<void(const World::WorldID&, World::IWorldStorageHandler::DuplicateWorldResult)>
    );

    MCNAPI float getProgress();

    MCNAPI void importWorld(std::function<void(World::TransferResult)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>,
        ::IMinecraftEventing&,
        ::World::IWorldStorageHandler&,
        bool
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>> mFileArchiver;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                             mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                          mEventing;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                 mWorldStorageHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferer& operator=(WorldTransferer const&);
    WorldTransferer(WorldTransferer const&);
    WorldTransferer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _importWorldWindows(::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI float getProgress();

    MCAPI void importWorld(::std::function<void(::World::TransferResult)> onImportComplete);
    // NOLINTEND
};
#else // @header-generator platform
class WorldTransferer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
