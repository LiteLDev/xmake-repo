#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/WorldTemplatePackManifest.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class TaskGroup;
struct LevelSummary;
namespace Social { class IUserManager; }
// clang-format on

class WorldTemplateProvider {
public:
    // WorldTemplateProvider inner types define
    enum class Result : int {
        Success            = 0,
        CopyFilesError     = 1,
        FinalizeLevelError = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                          mOnLoadTemplateFinishCallback;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>         mLevelListCache;
    ::ll::UntypedStorage<8, 760>                         mPackManifest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::UntypedStorage<8, 24>                          mNewWorldPath;
    ::ll::UntypedStorage<8, 24>                          mKeyProvider;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>    mUserManager;
    ::ll::UntypedStorage<8, 16>                          mFinalizedLevelSummary;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateProvider& operator=(WorldTemplateProvider const&);
    WorldTemplateProvider(WorldTemplateProvider const&);
    WorldTemplateProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
