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
    // clang-format off
    virtual ~LevelStorageSource() = default;

    virtual std::string const& getName() const = 0;

    virtual ::Bedrock::Result<LevelDataLoadResult, std::error_code> getLevelData(std::string const&, ::LevelData&) const = 0;

    virtual void saveLevelData(std::string const&, ::LevelData const&) = 0;

    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>>&) = 0;

    virtual ::Bedrock::UniqueOwnerPointer<LevelStorage> createLevelStorage(::Scheduler&, std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>, std::unique_ptr<LevelStorageEventing>, bool) = 0;

    virtual std::unique_ptr<LevelLooseFileStorage> createLevelLooseStorage(std::string const&, ::ContentIdentity const&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&) = 0;

    virtual void deleteLevel(std::string const&) = 0;

    virtual void renameLevel(::LevelData&, ::Core::Path const&, std::string const&) = 0;

    virtual bool renameLevel(std::string const&, std::string const&) = 0;

    virtual bool createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&) = 0;

    virtual bool isLevelMarkedForSync(::Core::Path const&) const = 0;

    virtual bool isLevelPartiallyCopied(::Core::Path const&) const = 0;

    virtual ::Core::PathBuffer<std::string> getLevelDatFoundPath(::Core::Path const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const getBasePath() const = 0;

    virtual ::Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const = 0;

    virtual ::LevelInfoPath getPathToLevelInfo(std::string const&, bool) const = 0;

    virtual std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) const = 0;

    virtual bool isBetaRetailLevel(std::string const&) const = 0;

    virtual void ensureLevelInitialized(std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& WORLD_SAVE_FLUSH_INTERVAL();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& WORLD_SAVE_MENU_FLUSH_INTERVAL();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ensureLevelInitialized(std::string const&);
    // NOLINTEND
};
