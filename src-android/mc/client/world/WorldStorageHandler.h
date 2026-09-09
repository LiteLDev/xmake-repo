#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/FileArchiverOutcome.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class FilePickerSettings;
class IContentKeyProvider;
class IContentManager;
class ILevelListCache;
class LevelData;
class LevelDbEnv;
class LevelSettings;
class TaskGroup;
struct LevelSummary;
struct PackManagerContentSource;
namespace Social { class IUserManager; }
// clang-format on

namespace World {

class WorldStorageHandler : public ::World::IWorldStorageHandler,
                            public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // WorldStorageHandler inner types declare
    // clang-format off
    struct ExporWorldTaskData;
    // clang-format on

    // WorldStorageHandler inner types define
    struct ExporWorldTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mBackupWorldId;
        ::ll::UntypedStorage<4, 8>  mStartClearPlayerDataError;
        ::ll::UntypedStorage<8, 16> mClearPlayerDataTask;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                          mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>         mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>         mContentManager;
    ::ll::UntypedStorage<8, 24>                          mKeyProvider;
    ::ll::UntypedStorage<8, 24>                          mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::FileArchiver&>            mFileArchiver;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>    mUserManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mDiskTaskGroup;
    ::ll::UntypedStorage<1, 1>                           mExportWorldStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageHandler& operator=(WorldStorageHandler const&);
    WorldStorageHandler(WorldStorageHandler const&);
    WorldStorageHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldStorageHandler();

    virtual std::variant<World::IWorldStorageHandler::ReadWorldError, World::IWorldStorageHandler::CachedWorldData> readWorld(::World::WorldID const&) const;

    virtual std::optional<World::IWorldStorageHandler::WriteWorldError> updateOrCreateWorld(::LevelData&, ::LevelSummary&, std::shared_ptr<LevelSettings>) const;

    virtual void deleteWorld(::World::WorldID const&);

    virtual void reloadWorld(::World::WorldID const&);

    virtual void duplicateWorld(::World::WorldID const&, std::function<void (const World::WorldID&, World::IWorldStorageHandler::DuplicateWorldResult)>);

    virtual void exportWorld(::World::WorldID const&, ::World::ExportWorldFlags, std::function<void (World::IWorldStorageHandler::ExportWorldResult)>);

    virtual void exportWorldAsTemplate(::World::WorldID const&, ::World::ExportWorldFlags, std::function<void (World::IWorldStorageHandler::ExportWorldResult)>);

    virtual ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const;

    virtual void updateWorldIcon(::World::WorldID const&, ::Core::PathBuffer<std::string> const&, std::string const&, std::function<void (const World::WorldID&)>);

    virtual void resetWorldIcon(::World::WorldID const&, std::function<void (const World::WorldID&)>);

    virtual ::Bedrock::Threading::Async<void> clearPlayerData(::World::WorldID const&, ::World::ClearPlayerDataType, std::optional<World::IWorldStorageHandler::StartClearPlayerDataError>&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _exportWorld(
        ::World::WorldID const&,
        ::FileArchiver::ExportType const,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    );

    MCNAPI void _setupExportWorld(
        ::World::WorldID const&,
        ::FileArchiver::ExportType const,
        ::World::ExportWorldFlags,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::variant<World::IWorldStorageHandler::ReadWorldError, World::IWorldStorageHandler::CachedWorldData>
           $readWorld(::World::WorldID const&) const;

    MCNAPI std::optional<World::IWorldStorageHandler::WriteWorldError>
           $updateOrCreateWorld(::LevelData&, ::LevelSummary&, std::shared_ptr<LevelSettings>) const;

    MCNAPI void $deleteWorld(::World::WorldID const&);

    MCNAPI void $reloadWorld(::World::WorldID const&);

    MCNAPI void $duplicateWorld(
        ::World::WorldID const&,
        std::function<void(const World::WorldID&, World::IWorldStorageHandler::DuplicateWorldResult)>
    );

    MCNAPI void $exportWorld(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    );

    MCNAPI void $exportWorldAsTemplate(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    );

    MCNAPI ::World::IWorldStorageHandler::ExportWorldStatus $exportWorldStatus() const;

    MCNAPI void $updateWorldIcon(
        ::World::WorldID const&,
        ::Core::PathBuffer<std::string> const&,
        std::string const&,
        std::function<void(const World::WorldID&)>
    );

    MCNAPI void $resetWorldIcon(::World::WorldID const&, std::function<void(const World::WorldID&)>);

    MCNAPI ::Bedrock::Threading::Async<void> $clearPlayerData(
        ::World::WorldID const&,
        ::World::ClearPlayerDataType,
        std::optional<World::IWorldStorageHandler::StartClearPlayerDataError>&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
