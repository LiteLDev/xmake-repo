#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/BakeConfig.h"
#include "mc/deps/resource_processing/BakeStats.h"
#include "mc/deps/resource_processing/category/CategoryLoaderRegistry.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Bedrock::Resources::Archive { class Builder; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class BakeTool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::Bedrock::Resources::BakeConfig>    mBakeConfig;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string_view>> mArchivableNonJsonExtensions;
    ::ll::UntypedStorage<8, 1664>                                   mSharedSlicesLoaderRegistry;
    ::ll::TypedStorage<8, 64, ::Bedrock::Resources::BakeStats>      mStats;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeTool();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& ARCHIVES_FOLDER_NAME();

    MCNAPI static ::SemVersionConstant const& BRPAK_PACK_OPTIMIZATION_VERSION();

    MCNAPI static char const* const& MANIFEST_FILE_NAME();

    MCNAPI static ::SemVersionConstant const& PACK_OPTIMIZATION_VERSION();

    MCNAPI static char const* const& SUBPACKS_FOLDER_NAME();
    // NOLINTEND
};

} // namespace Bedrock::Resources
