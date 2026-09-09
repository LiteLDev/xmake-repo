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
    ::ll::UntypedStorage<8, 24> mSaveTransactionManager;
    ::ll::UntypedStorage<8, 24> mFilePathManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalFileLevelStorageSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ExternalFileLevelStorageSource();

    virtual std::string const& getName() const;

    virtual ::Bedrock::Result<LevelDataLoadResult, std::error_code> getLevelData(std::string const&, ::LevelData&) const;

    virtual void saveLevelData(std::string const&, ::LevelData const&);

    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>>&);

    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>, bool);

    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    virtual void deleteLevel(std::string const&);

    virtual void renameLevel(::LevelData&, ::Core::Path const&, std::string const&);

    virtual bool renameLevel(std::string const&, std::string const&);

    virtual bool createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);

    virtual bool isLevelMarkedForSync(::Core::Path const&) const;

    virtual bool isLevelPartiallyCopied(::Core::Path const&) const;

    virtual ::Core::PathBuffer<std::string> getLevelDatFoundPath(::Core::Path const&) const;

    virtual ::Core::PathBuffer<std::string> const getBasePath() const;

    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const;

    virtual ::LevelInfoPath getPathToLevelInfo(std::string const&, bool) const;

    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const;

    virtual bool isBetaRetailLevel(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalFileLevelStorageSource(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SaveTransactionManager>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SaveTransactionManager>> const&
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
    MCNAPI std::string const& $getName() const;

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
    );

    MCNAPI std::unique_ptr<LevelLooseFileStorage> $createLevelLooseStorage(
        std::string const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI void $deleteLevel(std::string const&);

    MCNAPI void $renameLevel(::LevelData&, ::Core::Path const&, std::string const&);

    MCNAPI bool $renameLevel(std::string const&, std::string const&);

    MCNAPI bool $createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);

    MCNAPI bool $isLevelMarkedForSync(::Core::Path const&) const;

    MCNAPI bool $isLevelPartiallyCopied(::Core::Path const&) const;

    MCNAPI ::Core::PathBuffer<std::string> $getLevelDatFoundPath(::Core::Path const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const $getBasePath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getPathToLevel(std::string const&) const;

    MCNAPI ::LevelInfoPath $getPathToLevelInfo(std::string const&, bool) const;

    MCNAPI std::string $getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const;

    MCNAPI bool $isBetaRetailLevel(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
