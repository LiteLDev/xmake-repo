#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/ILevelListCache.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/LevelCache.h"
#include "mc/world/level/storage/LevelSummary.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentIdentity;
class IContentKeyProvider;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class LevelCache;
#endif // @header-generator platform
class LevelData;
class LevelDbEnv;
class LevelListCacheObserver;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class LevelStorageObserver;
class LevelStorageSource;
class Scheduler;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LevelSummary;
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class SingleThreadedLock; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelListCache : public ::ILevelListCache, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // LevelListCache inner types define
    using LevelAddedType = ::LevelListCacheObserver::LevelAddedType;

#if defined(LL_PLAT_A) // @header-generator platform
    using LockGuard = ::Bedrock::Threading::LockGuard<std::recursive_mutex>;
#else // @header-generator platform
    using LockGuard = ::Bedrock::Threading::LockGuard<::std::recursive_mutex>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                          mLevelStorageSource;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LevelCache>>   mCachedLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LevelSummary>> mCachedUnSyncedLevelData;
    ::ll::TypedStorage<1, 1, bool>                                           mDiscoverLevels;
    ::ll::UntypedStorage<8, 32>                                              mSubject;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>                          mCacheLock;
    ::ll::UntypedStorage<8, 32>                                              mAppPlatform;
    ::ll::UntypedStorage<8, 48>                                              mCheckIsSafeToFlushCache;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                                mLevelStorageSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::LevelCache>>   mCachedLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::LevelSummary>> mCachedUnSyncedLevelData;
    ::ll::TypedStorage<1, 1, bool>                                                 mDiscoverLevels;
    ::ll::TypedStorage<8, 32, ::Core::Subject<::LevelListCacheObserver, ::Core::SingleThreadedLock>> mSubject;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                                                mCacheLock;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> const>              mAppPlatform;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCheckIsSafeToFlushCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelListCache();
#else // @header-generator platform
    virtual ~LevelListCache() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addLevel(std::string const&, ::LevelData&&);
#else // @header-generator platform
    virtual void addLevel(::std::string const& levelId, ::LevelData&& levelData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteLevel(std::string const&);
#else // @header-generator platform
    virtual void deleteLevel(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshLevel(std::string const&);
#else // @header-generator platform
    virtual void refreshLevel(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ensureLevelInitialized(std::string const&);
#else // @header-generator platform
    virtual void ensureLevelInitialized(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteLevelFiles(std::string const&);
#else // @header-generator platform
    virtual void deleteLevelFiles(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postDeleteLevel(std::string const&);
#else // @header-generator platform
    virtual void postDeleteLevel(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameLevel(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void renameLevel(::std::string const& levelId, ::std::string const& newLevelName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameAndSaveLevelData(std::string const&, std::string const&, ::LevelData const&);
#else // @header-generator platform
    virtual void renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(std::string const&, ::LevelData const&);
#else // @header-generator platform
    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& levelData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasLevelWithId(std::string const&);
#else // @header-generator platform
    virtual bool hasLevelWithId(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&);
#else // @header-generator platform
    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIfLevelIsCorruptOrMissing(std::string const&);
#else // @header-generator platform
    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addObserver(::LevelListCacheObserver&);
#else // @header-generator platform
    virtual void addObserver(::LevelListCacheObserver& observer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeObserver(::LevelListCacheObserver&);
#else // @header-generator platform
    virtual void removeObserver(::LevelListCacheObserver& observer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>);
#else // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getLevelSummary(std::string const&);
#else // @header-generator platform
    virtual ::LevelSummary* getLevelSummary(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary const* getLevelSummaryByName(std::string const&);
#else // @header-generator platform
    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const& levelName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&);
#else // @header-generator platform
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const& directory) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelData* getLevelData(std::string const&);
#else // @header-generator platform
    virtual ::LevelData* getLevelData(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<LevelData> getLevelDataNonOwnerPointer(std::string const&);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::LevelData>
    getLevelDataNonOwnerPointer(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getShallowLevelSummary(std::string const&);
#else // @header-generator platform
    virtual ::LevelSummary* getShallowLevelSummary(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getLevelList(std::vector<LevelSummary>&, bool, bool, bool, bool);
#else // @header-generator platform
    virtual void getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels,
        bool                           includeInvalidLevelDataLevels
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCachedLevels(bool) const;
#else // @header-generator platform
    virtual bool hasCachedLevels(bool includeShallowSummaries) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateLevelCache(std::string const&);
#else // @header-generator platform
    virtual void updateLevelCache(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<LevelStorageObserver> createLevelStorageObserver();
#else // @header-generator platform
    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSave(std::string const&);
#else // @header-generator platform
    virtual void onSave(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStorageChanged();
#else // @header-generator platform
    virtual void onStorageChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getBasePath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getBasePath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelListCache(
        ::LevelStorageSource&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const AppPlatform>>,
        std::function<bool()>&&
#else // @header-generator platform
    MCAPI LevelListCache(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelCache* _addOrReplaceCache(::Core::Path const&);
#else // @header-generator platform
    MCAPI ::LevelCache* _addOrReplaceCache(::Core::Path const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelCache* _addToCache(std::string const&, ::LevelCache&&, ::LevelListCacheObserver::LevelAddedType);
#else // @header-generator platform
    MCAPI ::LevelCache* _addToCache(
        ::std::string const&                     levelId,
        ::LevelCache&&                           levelCache,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelCache*
    _createAndAddToCache(std::string const&, ::Core::Path const&, ::LevelListCacheObserver::LevelAddedType);
#else // @header-generator platform
    MCAPI ::LevelCache* _createAndAddToCache(
        ::std::string const&                     levelId,
        ::Core::Path const&                      directory,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSummary* _getLevelSummary(std::string const&);
#else // @header-generator platform
    MCAPI ::LevelCache* _getLevelCache(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _notifyLevelUpdated(std::string const&);
#else // @header-generator platform
    MCAPI ::LevelSummary* _getLevelSummary(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _notifyNewLevelFound(std::string const&, ::LevelListCacheObserver::LevelAddedType);
#else // @header-generator platform
    MCAPI void _notifyLevelUpdated(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _refreshSummary(std::string const&, ::LevelCache&);
#else // @header-generator platform
    MCAPI void _notifyNewLevelFound(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCAPI void _refreshSummary(::std::string const& levelId, ::LevelCache& cache);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::LevelStorageSource&, ::gsl::not_null<Bedrock::NonOwnerPointer<const AppPlatform>>, std::function<bool()>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addLevel(std::string const&, ::LevelData&&);
#else // @header-generator platform
    MCAPI void $addLevel(::std::string const& levelId, ::LevelData&& levelData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteLevel(std::string const&);
#else // @header-generator platform
    MCAPI void $deleteLevel(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshLevel(std::string const&);
#else // @header-generator platform
    MCAPI void $refreshLevel(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $ensureLevelInitialized(std::string const&);
#else // @header-generator platform
    MCAPI void $ensureLevelInitialized(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteLevelFiles(std::string const&);
#else // @header-generator platform
    MCAPI void $deleteLevelFiles(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postDeleteLevel(std::string const&);
#else // @header-generator platform
    MCAPI void $postDeleteLevel(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $renameLevel(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void $renameLevel(::std::string const& levelId, ::std::string const& newLevelName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<LevelLooseFileStorage> $createLevelLooseStorage(
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
#else // @header-generator platform
    MCAPI void $saveLevelData(::std::string const& levelId, ::LevelData const& levelData);

    MCAPI void $createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSummary* $getLevelSummary(std::string const&);
#else // @header-generator platform
    MCAPI bool $hasLevelWithId(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSummary const* $getLevelSummaryByName(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string $getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSummary* $getOrCreateLevelSummary(::Core::Path const&);
#else // @header-generator platform
    MCAPI bool $checkIfLevelIsCorruptOrMissing(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelData* $getLevelData(std::string const&);
#else // @header-generator platform
    MCAPI void $addObserver(::LevelListCacheObserver& observer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<LevelData> $getLevelDataNonOwnerPointer(std::string const&);
#else // @header-generator platform
    MCAPI void $removeObserver(::LevelListCacheObserver& observer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSummary* $getShallowLevelSummary(std::string const&);
#else // @header-generator platform
    MCAPI ::Bedrock::UniqueOwnerPointer<::LevelStorage> $createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getLevelList(std::vector<LevelSummary>&, bool, bool, bool, bool);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::LevelLooseFileStorage> $createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCachedLevels(bool) const;
#else // @header-generator platform
    MCAPI ::LevelSummary* $getLevelSummary(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateLevelCache(std::string const&);
#else // @header-generator platform
    MCAPI ::LevelSummary const* $getLevelSummaryByName(::std::string const& levelName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<LevelStorageObserver> $createLevelStorageObserver();
#else // @header-generator platform
    MCAPI ::LevelSummary* $getOrCreateLevelSummary(::Core::Path const& directory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSave(std::string const&);
#else // @header-generator platform
    MCAPI ::LevelData* $getLevelData(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStorageChanged();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::LevelData> $getLevelDataNonOwnerPointer(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getBasePath() const;
#else // @header-generator platform
    MCAPI ::LevelSummary* $getShallowLevelSummary(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getPathToLevel(std::string const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels,
        bool                           includeInvalidLevelDataLevels
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI bool $hasCachedLevels(bool includeShallowSummaries) const;

    MCAPI void $updateLevelCache(::std::string const& levelId);

    MCAPI ::std::unique_ptr<::LevelStorageObserver> $createLevelStorageObserver();

    MCAPI void $onSave(::std::string const& levelId);

    MCAPI void $onStorageChanged();

    MCAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getPathToLevel(::std::string const& levelId) const;


#endif // @header-generator platform
    // NOLINTEND
};
