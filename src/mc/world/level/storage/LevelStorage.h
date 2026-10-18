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
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerStorageIds;
#else // @header-generator platform
#endif // @header-generator platform
struct SnapshotFilenameAndLength;
namespace Core { struct LevelStorageResult; }
// clang-format on

class LevelStorage {
public:
    // LevelStorage inner types define
    enum class StatsType : uint {
#if defined(LL_PLAT_A) // @header-generator platform
        LEVEL0  = 0,
        LEVEL1  = 1,
        LEVEL2  = 2,
        MEMORY  = 3,
        DEFAULT = 0,
#else // @header-generator platform
        Level0  = 0,
        Level1  = 1,
        Level2  = 2,
        Memory  = 3,
        Default = 0,
#endif // @header-generator platform
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelStorage();
#else // @header-generator platform
    virtual ~LevelStorage() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>) = 0;
#else // @header-generator platform
    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver> observer) = 0;
#endif // @header-generator platform

    virtual bool loadedSuccessfully() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> getCompoundTag(std::string const&, ::DBHelpers::Category) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag>
    getCompoundTag(::std::string const& key, ::DBHelpers::Category category) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasKey(std::string_view, ::DBHelpers::Category) const = 0;
#else // @header-generator platform
    virtual bool hasKey(::std::string_view key, ::DBHelpers::Category category) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachKeyWithPrefix(std::string_view, ::DBHelpers::Category, std::function<void (std::string_view, std::string_view)> const&) const = 0;
#else // @header-generator platform
    virtual void forEachKeyWithPrefix(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadLevelData(::LevelData&) = 0;
#else // @header-generator platform
    virtual bool loadLevelData(::LevelData& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkSource> createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkSource> createChunkStorage(::std::unique_ptr<::ChunkSource>, ::StorageVersion) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(::LevelData const&) = 0;
#else // @header-generator platform
    virtual void saveLevelData(::LevelData const& levelData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getFullPath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void>
    saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(std::string const&, std::string&&, ::DBHelpers::Category) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const& batch) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> deleteData(std::string const&, ::DBHelpers::Category) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> deleteData(::std::string const& key, ::DBHelpers::Category category) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getStatistics(std::string&, ::LevelStorage::StatsType) const = 0;
#else // @header-generator platform
    virtual void getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool clonePlayerData(std::string_view, std::string_view, bool);
#else // @header-generator platform
    virtual bool clonePlayerData(::std::string_view fromKey, ::std::string_view toKey, bool isEditorPlayer);
#endif // @header-generator platform

    virtual ::Core::LevelStorageResult getLevelStorageState() const = 0;

    virtual ::ContentIdentity const* getContentIdentity() const = 0;

    virtual void startShutdown() = 0;

    virtual bool isShuttingDown() const = 0;

    virtual bool checkShutdownDone() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadData(std::string_view, std::string&, ::DBHelpers::Category) const;
#else // @header-generator platform
    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;
#endif // @header-generator platform

    virtual ::Core::LevelStorageResult getState() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<SnapshotFilenameAndLength> createSnapshot(std::string const&, bool) = 0;
#else // @header-generator platform
    virtual ::std::vector<::SnapshotFilenameAndLength>
    createSnapshot(::std::string const& filePrefix, bool flushWriteCache) = 0;
#endif // @header-generator platform

    virtual void releaseSnapshot() = 0;

    virtual ::Bedrock::Threading::Async<void> compactStorage() = 0;

    virtual void syncAndSuspendStorage() = 0;

    virtual void resumeStorage() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFlushAllowed(bool) = 0;
#else // @header-generator platform
    virtual void setFlushAllowed(bool flushAllowed) = 0;
#endif // @header-generator platform

    virtual void flushToPermanentStorage() = 0;

    virtual void freeCaches();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCompactionCallback(std::function<void (CompactionStatus)>) = 0;
#else // @header-generator platform
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCriticalSyncSaveCallback(std::function<void ()>) = 0;
#else // @header-generator platform
    virtual void setCriticalSyncSaveCallback(::std::function<void()> callback) = 0;
#endif // @header-generator platform

    virtual void corruptLevel();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<LevelStorageWriteBatch> createWriteBatch();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::LevelStorageWriteBatch> createWriteBatch();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getServerId(::PlayerStorageIds const&, bool);
#else // @header-generator platform
    MCAPI ::std::string getServerId(::Player const& client, bool isXboxLive);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getServerId(::Player const&, bool);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> loadAllPlayerIDs(bool includeLocalPlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> loadAllPlayerIDs(bool) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> loadServerPlayerData(::Player const& client, bool isXboxLive);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> loadLocalPlayerData(bool);
#else // @header-generator platform
    MCAPI void save(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> loadPlayerDataFromTag(std::string_view, bool);

    MCNAPI std::unique_ptr<CompoundTag> loadServerPlayerData(::Player const&, bool);

    MCNAPI void save(::Player&);

    MCNAPI ::Bedrock::Threading::Async<void> saveData(std::string const&, ::CompoundTag const&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void>
    saveData(::std::string const& key, ::CompoundTag const& tag, ::DBHelpers::Category category);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& LEGACY_CONSOLE_PLAYER_PREFIX();
#else // @header-generator platform
    MCAPI static ::std::string const& LEGACY_CONSOLE_PLAYER_PREFIX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& LOCAL_PLAYER_TAG();
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::std::string const& LOCAL_PLAYER_EDITOR_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& LOCAL_PLAYER_TAG();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $clonePlayerData(std::string_view, std::string_view, bool);
#else // @header-generator platform
    MCAPI bool $clonePlayerData(::std::string_view fromKey, ::std::string_view toKey, bool isEditorPlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $corruptLevel();
#else // @header-generator platform
    MCFOLD void $corruptLevel();


#endif // @header-generator platform
    // NOLINTEND
};
