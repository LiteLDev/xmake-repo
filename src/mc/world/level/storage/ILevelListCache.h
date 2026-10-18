#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelListCacheObserver;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class LevelStorageObserver;
class Scheduler;
struct LevelSummary;
namespace Core { class Path; }
// clang-format on

class ILevelListCache : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ILevelListCache();
#else // @header-generator platform
    virtual ~ILevelListCache() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addLevel(std::string const&, ::LevelData&&) = 0;
#else // @header-generator platform
    virtual void addLevel(::std::string const& levelId, ::LevelData&& levelData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteLevel(std::string const&) = 0;
#else // @header-generator platform
    virtual void deleteLevel(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshLevel(std::string const&) = 0;
#else // @header-generator platform
    virtual void refreshLevel(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ensureLevelInitialized(std::string const&) = 0;
#else // @header-generator platform
    virtual void ensureLevelInitialized(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteLevelFiles(std::string const&) = 0;
#else // @header-generator platform
    virtual void deleteLevelFiles(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postDeleteLevel(std::string const&) = 0;
#else // @header-generator platform
    virtual void postDeleteLevel(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameLevel(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void renameLevel(::std::string const& levelId, ::std::string const& newLevelName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameAndSaveLevelData(std::string const&, std::string const&, ::LevelData const&) = 0;
#else // @header-generator platform
    virtual void renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(std::string const&, ::LevelData const&) = 0;
#else // @header-generator platform
    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& levelData) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasLevelWithId(std::string const&) = 0;
#else // @header-generator platform
    virtual bool hasLevelWithId(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) = 0;
#else // @header-generator platform
    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIfLevelIsCorruptOrMissing(std::string const&) = 0;
#else // @header-generator platform
    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addObserver(::LevelListCacheObserver&) = 0;
#else // @header-generator platform
    virtual void addObserver(::LevelListCacheObserver& observer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeObserver(::LevelListCacheObserver&) = 0;
#else // @header-generator platform
    virtual void removeObserver(::LevelListCacheObserver& observer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>) = 0;
#else // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getLevelSummary(std::string const&) = 0;
#else // @header-generator platform
    virtual ::LevelSummary* getLevelSummary(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary const* getLevelSummaryByName(std::string const&) = 0;
#else // @header-generator platform
    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const& levelName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&) = 0;
#else // @header-generator platform
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const& directory) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelData* getLevelData(std::string const&) = 0;
#else // @header-generator platform
    virtual ::LevelData* getLevelData(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<LevelData> getLevelDataNonOwnerPointer(std::string const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::LevelData> getLevelDataNonOwnerPointer(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSummary* getShallowLevelSummary(std::string const&) = 0;
#else // @header-generator platform
    virtual ::LevelSummary* getShallowLevelSummary(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getLevelList(std::vector<LevelSummary>&, bool, bool, bool, bool) = 0;
#else // @header-generator platform
    virtual void getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels,
        bool                           includeInvalidLevelDataLevels
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCachedLevels(bool) const = 0;
#else // @header-generator platform
    virtual bool hasCachedLevels(bool includeShallowSummaries) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateLevelCache(std::string const&) = 0;
#else // @header-generator platform
    virtual void updateLevelCache(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<LevelStorageObserver> createLevelStorageObserver() = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSave(std::string const&) = 0;
#else // @header-generator platform
    virtual void onSave(::std::string const& levelId) = 0;
#endif // @header-generator platform

    virtual void onStorageChanged() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getBasePath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getBasePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
