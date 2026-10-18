#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldStorageHandler : public ::World::IWorldStorageHandler,
                            public ::Bedrock::Threading::EnableQueueForMainThread {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldStorageHandler : public ::World::IWorldStorageHandler,
                            public ::Bedrock::Threading::EnableQueueForMainThread {
#else // @header-generator platform
class WorldStorageHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WorldStorageHandler inner types declare
    // clang-format off
    struct ExporWorldTaskData;
    // clang-format on

    // WorldStorageHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ExporWorldTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::World::WorldID> mBackupWorldId;
        ::ll::TypedStorage<4, 8, ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>>
                                                                     mStartClearPlayerDataError;
        ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mClearPlayerDataTask;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>                    mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                          mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::FileArchiver&>                                             mFileArchiver;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                                     mUserManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mDiskTaskGroup;
    ::ll::TypedStorage<1, 1, ::World::IWorldStorageHandler::ExportWorldStatus>            mExportWorldStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageHandler& operator=(WorldStorageHandler const&);
    WorldStorageHandler(WorldStorageHandler const&);
    WorldStorageHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::
        variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>
        readWorld(::World::WorldID const& id) const /*override*/;

    virtual ::std::optional<::World::IWorldStorageHandler::WriteWorldError> updateOrCreateWorld(
        ::LevelData&                       levelData,
        ::LevelSummary&                    levelSummary,
        ::std::shared_ptr<::LevelSettings> levelSettings
    ) const /*override*/;

    virtual void deleteWorld(::World::WorldID const& id) /*override*/;

    virtual void reloadWorld(::World::WorldID const& id) /*override*/;

    virtual ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&                                                    worldId,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    ) /*override*/;

    virtual void duplicateWorld(
        ::World::WorldID const&                                                                             worldId,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)> onComplete
    ) /*override*/;

    virtual void exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) /*override*/;

    virtual void exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) /*override*/;

    virtual ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const /*override*/;

    virtual void updateWorldIcon(
        ::World::WorldID const&                        worldId,
        ::Core::PathBuffer<::std::string> const&       screenshotPath,
        ::std::string const&                           id,
        ::std::function<void(::World::WorldID const&)> onComplete
    ) /*override*/;

    virtual void resetWorldIcon(
        ::World::WorldID const&                        worldId,
        ::std::function<void(::World::WorldID const&)> onComplete
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::FileArchiver::ExportType const                                        exportType,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCAPI void _onExportComplete(
        ::FileArchiverOutcome                                                   outcome,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete,
        ::std::shared_ptr<::FilePickerSettings>                                 settings
    );

    MCAPI void _setupExportWorld(
        ::World::WorldID const&                                                 worldId,
        ::FileArchiver::ExportType const                                        exportType,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>
    $readWorld(::World::WorldID const& id) const;

    MCAPI ::std::optional<::World::IWorldStorageHandler::WriteWorldError> $updateOrCreateWorld(
        ::LevelData&                       levelData,
        ::LevelSummary&                    levelSummary,
        ::std::shared_ptr<::LevelSettings> levelSettings
    ) const;

    MCAPI void $deleteWorld(::World::WorldID const& id);

    MCAPI void $reloadWorld(::World::WorldID const& id);

    MCAPI ::Bedrock::Threading::Async<void> $clearPlayerData(
        ::World::WorldID const&                                                    worldId,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    );

    MCAPI void $duplicateWorld(
        ::World::WorldID const&                                                                             worldId,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)> onComplete
    );

    MCAPI void $exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCAPI void $exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCAPI ::World::IWorldStorageHandler::ExportWorldStatus $exportWorldStatus() const;

    MCAPI void $updateWorldIcon(
        ::World::WorldID const&                        worldId,
        ::Core::PathBuffer<::std::string> const&       screenshotPath,
        ::std::string const&                           id,
        ::std::function<void(::World::WorldID const&)> onComplete
    );

    MCAPI void
    $resetWorldIcon(::World::WorldID const& worldId, ::std::function<void(::World::WorldID const&)> onComplete);
    // NOLINTEND
#else // @header-generator platform
    struct ExporWorldTaskData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace World
