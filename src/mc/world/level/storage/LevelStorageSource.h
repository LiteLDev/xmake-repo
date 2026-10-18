#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/level/storage/LevelDataLoadResult.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class Scheduler;
struct LevelInfoPath;
namespace Core { class Path; }
// clang-format on

class LevelStorageSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelStorageSource() = default;
#else // @header-generator platform
    virtual ~LevelStorageSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getName() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<LevelDataLoadResult, std::error_code> getLevelData(std::string const&, ::LevelData&) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::LevelDataLoadResult>
    getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(std::string const&, ::LevelData const&) = 0;
#else // @header-generator platform
    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>>&) = 0;
#else // @header-generator platform
    virtual void getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>, bool) = 0;
#else // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing,
        bool                                                              jigsawPersistenceToggle
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
    virtual void deleteLevel(std::string const&) = 0;
#else // @header-generator platform
    virtual void deleteLevel(::std::string const& levelId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameLevel(::LevelData&, ::Core::Path const&, std::string const&) = 0;
#else // @header-generator platform
    virtual bool renameLevel(::std::string const& levelId, ::std::string const& newLevelName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool renameLevel(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void
    renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual bool createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLevelMarkedForSync(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual bool isLevelMarkedForSync(::Core::Path const& levelPath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLevelPartiallyCopied(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual bool isLevelPartiallyCopied(::Core::Path const& levelPath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getLevelDatFoundPath(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getLevelDatFoundPath(::Core::Path const& levelPath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getBasePath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getBasePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelInfoPath getPathToLevelInfo(std::string const&, bool) const = 0;
#else // @header-generator platform
    virtual ::LevelInfoPath getPathToLevelInfo(::std::string const&, bool) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBetaRetailLevel(std::string const&) const = 0;
#else // @header-generator platform
    virtual bool isBetaRetailLevel(::std::string const&) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ensureLevelInitialized(std::string const&);
    // clang-format on
#else // @header-generator platform
    virtual void ensureLevelInitialized(::std::string const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& WORLD_SAVE_FLUSH_INTERVAL();
#else // @header-generator platform
    MCNAPI static ::std::chrono::nanoseconds const& WORLD_SAVE_FLUSH_INTERVAL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& WORLD_SAVE_MENU_FLUSH_INTERVAL();
#else // @header-generator platform
    MCNAPI static ::std::chrono::nanoseconds const& WORLD_SAVE_MENU_FLUSH_INTERVAL();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $ensureLevelInitialized(std::string const&);
#else // @header-generator platform
    MCNAPI void $ensureLevelInitialized(::std::string const&);


#endif // @header-generator platform
    // NOLINTEND
};
