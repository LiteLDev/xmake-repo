#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/ILevelListCache.h"
#include "mc/world/level/storage/LevelCache.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelListCacheObserver;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class LevelStorageObserver;
class LevelStorageSource;
class Scheduler;
namespace Core { class Path; }
namespace Core { class SingleThreadedLock; }
// clang-format on

class LevelListCache : public ::ILevelListCache, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // LevelListCache inner types define
    using LevelAddedType = ::LevelListCacheObserver::LevelAddedType;

    using LockGuard = ::Bedrock::Threading::LockGuard<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                          mLevelStorageSource;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LevelCache>>   mCachedLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LevelSummary>> mCachedUnSyncedLevelData;
    ::ll::TypedStorage<1, 1, bool>                                           mDiscoverLevels;
    ::ll::UntypedStorage<8, 32>                                              mSubject;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>                          mCacheLock;
    ::ll::UntypedStorage<8, 32>                                              mAppPlatform;
    ::ll::UntypedStorage<8, 48>                                              mCheckIsSafeToFlushCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelListCache();

    virtual void addLevel(std::string const&, ::LevelData&&);

    virtual void deleteLevel(std::string const&);

    virtual void refreshLevel(std::string const&);

    virtual void ensureLevelInitialized(std::string const&);

    virtual void deleteLevelFiles(std::string const&);

    virtual void postDeleteLevel(std::string const&);

    virtual void renameLevel(std::string const&, std::string const&);

    virtual void renameAndSaveLevelData(std::string const&, std::string const&, ::LevelData const&);

    virtual void saveLevelData(std::string const&, ::LevelData const&);

    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);

    virtual bool hasLevelWithId(std::string const&);

    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&);

    virtual bool checkIfLevelIsCorruptOrMissing(std::string const&);

    virtual void addObserver(::LevelListCacheObserver&);

    virtual void removeObserver(::LevelListCacheObserver&);

    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>);

    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    virtual ::LevelSummary* getLevelSummary(std::string const&);

    virtual ::LevelSummary const* getLevelSummaryByName(std::string const&);

    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&);

    virtual ::LevelData* getLevelData(std::string const&);

    virtual ::Bedrock::NonOwnerPointer<LevelData> getLevelDataNonOwnerPointer(std::string const&);

    virtual ::LevelSummary* getShallowLevelSummary(std::string const&);

    virtual void getLevelList(std::vector<LevelSummary>&, bool, bool, bool, bool);

    virtual bool hasCachedLevels(bool) const;

    virtual void updateLevelCache(std::string const&);

    virtual std::unique_ptr<LevelStorageObserver> createLevelStorageObserver();

    virtual void onSave(std::string const&);

    virtual void onStorageChanged();

    virtual ::Core::PathBuffer<std::string> const getBasePath() const;

    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelListCache(
        ::LevelStorageSource&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const AppPlatform>>,
        std::function<bool()>&&
    );

    MCNAPI ::LevelCache* _addOrReplaceCache(::Core::Path const&);

    MCNAPI ::LevelCache* _addToCache(std::string const&, ::LevelCache&&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI ::LevelCache*
    _createAndAddToCache(std::string const&, ::Core::Path const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI ::LevelSummary* _getLevelSummary(std::string const&);

    MCNAPI void _notifyLevelUpdated(std::string const&);

    MCNAPI void _notifyNewLevelFound(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI void _refreshSummary(std::string const&, ::LevelCache&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::LevelStorageSource&, ::gsl::not_null<Bedrock::NonOwnerPointer<const AppPlatform>>, std::function<bool()>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addLevel(std::string const&, ::LevelData&&);

    MCNAPI void $deleteLevel(std::string const&);

    MCNAPI void $refreshLevel(std::string const&);

    MCNAPI void $ensureLevelInitialized(std::string const&);

    MCNAPI void $deleteLevelFiles(std::string const&);

    MCNAPI void $postDeleteLevel(std::string const&);

    MCNAPI void $renameLevel(std::string const&, std::string const&);

    MCNAPI void $renameAndSaveLevelData(std::string const&, std::string const&, ::LevelData const&);

    MCNAPI void $saveLevelData(std::string const&, ::LevelData const&);

    MCNAPI void $createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);

    MCNAPI bool $hasLevelWithId(std::string const&);

    MCNAPI std::string $getLevelIdFromPath(::Core::Path const&, ::Core::Path const&);

    MCNAPI bool $checkIfLevelIsCorruptOrMissing(std::string const&);

    MCNAPI void $addObserver(::LevelListCacheObserver&);

    MCNAPI void $removeObserver(::LevelListCacheObserver&);

    MCNAPI ::Bedrock::UniqueOwnerPointer<LevelStorage> $createLevelStorage(
        ::Scheduler&,
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::unique_ptr<LevelStorageEventing>
    );

    MCNAPI std::unique_ptr<LevelLooseFileStorage> $createLevelLooseStorage(
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI ::LevelSummary* $getLevelSummary(std::string const&);

    MCNAPI ::LevelSummary const* $getLevelSummaryByName(std::string const&);

    MCNAPI ::LevelSummary* $getOrCreateLevelSummary(::Core::Path const&);

    MCNAPI ::LevelData* $getLevelData(std::string const&);

    MCNAPI ::Bedrock::NonOwnerPointer<LevelData> $getLevelDataNonOwnerPointer(std::string const&);

    MCNAPI ::LevelSummary* $getShallowLevelSummary(std::string const&);

    MCNAPI void $getLevelList(std::vector<LevelSummary>&, bool, bool, bool, bool);

    MCNAPI bool $hasCachedLevels(bool) const;

    MCNAPI void $updateLevelCache(std::string const&);

    MCNAPI std::unique_ptr<LevelStorageObserver> $createLevelStorageObserver();

    MCNAPI void $onSave(std::string const&);

    MCNAPI void $onStorageChanged();

    MCNAPI ::Core::PathBuffer<std::string> const $getBasePath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getPathToLevel(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
