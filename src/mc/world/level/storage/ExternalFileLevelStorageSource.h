#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/level/storage/LevelDataLoadResult.h"
#include "mc/world/level/storage/LevelStorageSource.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class SaveTransactionManager;
class Scheduler;
struct LevelInfoPath;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class ExternalFileLevelStorageSource : public ::LevelStorageSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mSaveTransactionManager;
    ::ll::UntypedStorage<8, 24> mFilePathManager;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>  mFilePathManager;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalFileLevelStorageSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ExternalFileLevelStorageSource();
#else // @header-generator platform
    virtual ~ExternalFileLevelStorageSource() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<LevelDataLoadResult, std::error_code> getLevelData(std::string const&, ::LevelData&) const;
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(std::string const&, ::LevelData const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>>&);
#else // @header-generator platform
    virtual ::Bedrock::Result<::LevelDataLoadResult>
    getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>, bool);
#else // @header-generator platform
    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);
#else // @header-generator platform
    virtual void getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteLevel(std::string const&);
#else // @header-generator platform
    virtual void deleteLevel(::std::string const& levelId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void renameLevel(::LevelData&, ::Core::Path const&, std::string const&);
#else // @header-generator platform
    virtual bool renameLevel(::std::string const& levelId, ::std::string const& newLevelName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool renameLevel(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void
    renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLevelMarkedForSync(::Core::Path const&) const;
#else // @header-generator platform
    virtual bool isLevelMarkedForSync(::Core::Path const& levelPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLevelPartiallyCopied(::Core::Path const&) const;
#else // @header-generator platform
    virtual bool isLevelPartiallyCopied(::Core::Path const& levelPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getLevelDatFoundPath(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getLevelDatFoundPath(::Core::Path const& levelPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getBasePath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getBasePath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelInfoPath getPathToLevelInfo(std::string const&, bool) const;
#else // @header-generator platform
    virtual ::LevelInfoPath getPathToLevelInfo(::std::string const& levelId, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBetaRetailLevel(std::string const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool isBetaRetailLevel(::std::string const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExternalFileLevelStorageSource(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SaveTransactionManager>> const&
#else // @header-generator platform
    MCAPI ExternalFileLevelStorageSource(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&  pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::SaveTransactionManager> const& saveTransactionManager
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SaveTransactionManager>> const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&  pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::SaveTransactionManager> const& saveTransactionManager
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<LevelDataLoadResult, std::error_code>
    $getLevelData(std::string const&, ::LevelData&) const;

    MCNAPI void $saveLevelData(std::string const&, ::LevelData const&);

    MCNAPI void $getLevelList(std::vector<Core::PathBuffer<std::string>>&);

    MCNAPI ::Bedrock::UniqueOwnerPointer<LevelStorage> $createLevelStorage(
        ::Scheduler&,
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::unique_ptr<LevelStorageEventing>,
        bool
#else // @header-generator platform
    MCAPI ::Bedrock::UniqueOwnerPointer<::LevelStorage> $createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing,
        bool                                                              jigsawPersistenceToggle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<LevelLooseFileStorage> $createLevelLooseStorage(
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::LevelLooseFileStorage> $createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteLevel(std::string const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::LevelDataLoadResult>
    $getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $renameLevel(::LevelData&, ::Core::Path const&, std::string const&);
#else // @header-generator platform
    MCAPI void $saveLevelData(::std::string const& levelId, ::LevelData const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $renameLevel(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void $getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void $deleteLevel(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLevelMarkedForSync(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI bool $renameLevel(::std::string const& levelId, ::std::string const& newLevelName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLevelPartiallyCopied(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI void $renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getLevelDatFoundPath(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI bool $createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getBasePath() const;
#else // @header-generator platform
    MCAPI bool $isLevelMarkedForSync(::Core::Path const& levelPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getPathToLevel(std::string const&) const;
#else // @header-generator platform
    MCAPI bool $isLevelPartiallyCopied(::Core::Path const& levelPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelInfoPath $getPathToLevelInfo(std::string const&, bool) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getLevelDatFoundPath(::Core::Path const& levelPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBetaRetailLevel(std::string const&) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getPathToLevel(::std::string const& levelId) const;

    MCAPI ::LevelInfoPath $getPathToLevelInfo(::std::string const& levelId, bool) const;

    MCAPI ::std::string $getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) const;

    MCFOLD bool $isBetaRetailLevel(::std::string const&) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
