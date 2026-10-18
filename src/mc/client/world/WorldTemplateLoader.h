#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/WorldTemplatePackManifest.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class TaskGroup;
struct LevelSummary;
namespace Social { class IUserManager; }
// clang-format on

class WorldTemplateLoader : public ::LevelListCacheObserver {
#else // @header-generator platform
class WorldTemplateLoader {
#endif // @header-generator platform
public:
    // WorldTemplateLoader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class InternalState : int {
        CopyFilesRequested              = 0,
        CopyFilesWaitingForConfirmation = 1,
        CopyFilesConfirmed              = 2,
        CopyFilesInProgress             = 3,
        CopyFilesDone                   = 4,
        CopyFilesCancelled              = 5,
        CopyFilesError                  = 6,
        CacheLevelRequested             = 7,
        CacheLevelInProgress            = 8,
        CacheLevelDone                  = 9,
        CacheLevelError                 = 10,
        FinalizeLevelRequested          = 11,
        FinalizeLevelInProgress         = 12,
        FinalizeLevelDone               = 13,
        FinalizeLevelError              = 14,
        Done                            = 15,
        Error                           = 16,
    };
#else // @header-generator platform
    enum class Error : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class Error : int {
        Unspecified                 = 0,
        TemplateVersionIncompatible = 1,
    };
#else // @header-generator platform
    enum class InternalState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        InProgress = 0,
        Done       = 1,
        Error      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WorldTemplateLoader::InternalState> mInternalState;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                   mLevelListCache;
    ::ll::UntypedStorage<8, 760>                                   mPackManifest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>           mIOTaskGroup;
    ::ll::UntypedStorage<8, 24>                                    mNewWorldPath;
    ::ll::UntypedStorage<8, 24>                                    mKeyProvider;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>              mUserManager;
    ::ll::TypedStorage<8, 8, ::LevelSummary*>                      mFinalizedLevelSummary;
    ::ll::TypedStorage<4, 4, ::WorldTemplateLoader::Error>         mError;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          mCurrentWorldId;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateLoader& operator=(WorldTemplateLoader const&);
    WorldTemplateLoader(WorldTemplateLoader const&);
    WorldTemplateLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateLoader();

    virtual void onLevelUpdated(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateLoader(
        ::ILevelListCache&,
        ::WorldTemplatePackManifest const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::Social::IUserManager&
    );

    MCNAPI void _beginLargeFileTransaction();

    MCNAPI void _copyFiles();

    MCNAPI void _finalizeLevel();

    MCNAPI void _startCacheLevelTask();

    MCNAPI ::WorldTemplateLoader::Error getError();

    MCNAPI ::LevelSummary* getResult();

    MCNAPI ::WorldTemplateLoader::State tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&,
        ::WorldTemplatePackManifest const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::Social::IUserManager&
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
    MCNAPI void $onLevelUpdated(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
};
