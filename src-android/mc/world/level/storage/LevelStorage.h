#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class ContentIdentity;
class LevelData;
class LevelStorageObserver;
class LevelStorageWriteBatch;
class Player;
struct PlayerStorageIds;
struct SnapshotFilenameAndLength;
namespace Core { struct LevelStorageResult; }
// clang-format on

class LevelStorage {
public:
    // LevelStorage inner types define
    enum class StatsType : uint {
        LEVEL0  = 0,
        LEVEL1  = 1,
        LEVEL2  = 2,
        MEMORY  = 3,
        DEFAULT = 0,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelStorage();

    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>) = 0;

    virtual bool loadedSuccessfully() const;

    virtual std::unique_ptr<CompoundTag> getCompoundTag(std::string const&, ::DBHelpers::Category) = 0;

    virtual bool hasKey(std::string_view, ::DBHelpers::Category) const = 0;

    virtual void forEachKeyWithPrefix(std::string_view, ::DBHelpers::Category, std::function<void (std::string_view, std::string_view)> const&) const = 0;

    virtual bool loadLevelData(::LevelData&) = 0;

    virtual std::unique_ptr<ChunkSource> createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion) = 0;

    virtual void saveLevelData(::LevelData const&) = 0;

    virtual ::Core::PathBuffer<std::string> const& getFullPath() const = 0;

    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&) = 0;

    virtual ::Bedrock::Threading::Async<void> saveData(std::string const&, std::string&&, ::DBHelpers::Category) = 0;

    virtual ::Bedrock::Threading::Async<void> deleteData(std::string const&, ::DBHelpers::Category) = 0;

    virtual void getStatistics(std::string&, ::LevelStorage::StatsType) const = 0;

    virtual bool clonePlayerData(std::string_view, std::string_view, bool);

    virtual ::Core::LevelStorageResult getLevelStorageState() const = 0;

    virtual ::ContentIdentity const* getContentIdentity() const = 0;

    virtual void startShutdown() = 0;

    virtual bool isShuttingDown() const = 0;

    virtual bool checkShutdownDone() = 0;

    virtual bool loadData(std::string_view, std::string&, ::DBHelpers::Category) const;

    virtual ::Core::LevelStorageResult getState() const = 0;

    virtual std::vector<SnapshotFilenameAndLength> createSnapshot(std::string const&, bool) = 0;

    virtual void releaseSnapshot() = 0;

    virtual ::Bedrock::Threading::Async<void> compactStorage() = 0;

    virtual void syncAndSuspendStorage() = 0;

    virtual void resumeStorage() = 0;

    virtual void setFlushAllowed(bool) = 0;

    virtual void flushToPermanentStorage() = 0;

    virtual void freeCaches();

    virtual void setCompactionCallback(std::function<void (CompactionStatus)>) = 0;

    virtual void setCriticalSyncSaveCallback(std::function<void ()>) = 0;

    virtual void corruptLevel();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<LevelStorageWriteBatch> createWriteBatch();

    MCNAPI std::string getServerId(::PlayerStorageIds const&, bool);

    MCNAPI std::string getServerId(::Player const&, bool);

    MCNAPI std::vector<std::string> loadAllPlayerIDs(bool) const;

    MCNAPI std::unique_ptr<CompoundTag> loadLocalPlayerData(bool);

    MCNAPI std::unique_ptr<CompoundTag> loadPlayerDataFromTag(std::string_view, bool);

    MCNAPI std::unique_ptr<CompoundTag> loadServerPlayerData(::Player const&, bool);

    MCNAPI void save(::Player&);

    MCNAPI ::Bedrock::Threading::Async<void> saveData(std::string const&, ::CompoundTag const&, ::DBHelpers::Category);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& LEGACY_CONSOLE_PLAYER_PREFIX();

    MCNAPI static std::string const& LOCAL_PLAYER_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $clonePlayerData(std::string_view, std::string_view, bool);

    MCNAPI void $corruptLevel();
    // NOLINTEND
};
