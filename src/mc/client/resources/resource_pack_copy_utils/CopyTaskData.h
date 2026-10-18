#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackInstance.h"
#include "mc/resources/WorldPackHistory.h"

// auto generated forward declare list
// clang-format off
class DirectoryPackSource;
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class IPackSourceFactory;
class Pack;
class TaskGroup;
class WorldHistoryPackSource;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ResourcePackCopyUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct CopyTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackInstance> const>                         mToCopy;
    ::ll::TypedStorage<8, 8, ::IPackSourceFactory const&>                              mPackSourceFactory;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                                  mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                                        mKeyProvider;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                             mTaskGroup;
    ::ll::UntypedStorage<1, 24>                                                        mResourcePackPath;
    ::ll::TypedStorage<8, 8, ::DirectoryPackSource* const>                             mTargetPackSource;
    ::ll::TypedStorage<8, 8, ::WorldHistoryPackSource* const>                          mWorldHistory;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<const Pack>>>> mExistingPacks;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Pack>>>                      mNewPacks;
    ::ll::TypedStorage<8, 24, std::vector<WorldPackHistory>>                           mNewHistory;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IPackIOProvider>>                        mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    CopyTaskData& operator=(CopyTaskData const&);
    CopyTaskData(CopyTaskData const&);
    CopyTaskData();
};
#else // @header-generator platform
struct CopyTaskData {};
#endif // @header-generator platform

} // namespace ResourcePackCopyUtils
