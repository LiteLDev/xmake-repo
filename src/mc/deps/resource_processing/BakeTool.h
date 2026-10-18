#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/resource_processing/BakeConfig.h"
#include "mc/deps/resource_processing/BakeStats.h"
#include "mc/deps/resource_processing/category/CategoryLoaderRegistry.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Resources { struct BakeConfig; }
#endif // @header-generator platform
namespace Bedrock::Resources::Archive { class Builder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class BakeTool {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 120, ::Bedrock::Resources::BakeConfig>    mBakeConfig;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string_view>> mArchivableNonJsonExtensions;
    ::ll::UntypedStorage<8, 1664>                                   mSharedSlicesLoaderRegistry;
    ::ll::TypedStorage<8, 64, ::Bedrock::Resources::BakeStats>      mStats;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 168>  mUnke09763;
    ::ll::UntypedStorage<8, 64>   mUnkea5474;
    ::ll::UntypedStorage<8, 1720> mUnk8b21a9;
    ::ll::UntypedStorage<8, 72>   mUnka320e0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BakeTool& operator=(BakeTool const&);
    BakeTool(BakeTool const&);
#endif // @header-generator platform
    BakeTool();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit BakeTool(::Bedrock::Resources::BakeConfig config);

    MCNAPI int bake();

    MCNAPI int bakeFilesInFolder(::Core::PathView srcPath, ::Core::PathView dstPath, ::Core::PathView dstArchivePath);

    MCNAPI int bakeSinglePack(::Core::PathView packRoot, ::Core::PathView destPath);

    MCNAPI ::Bedrock::Result<void> copyRegularFile(::Core::PathView sourcePath, ::Core::PathView destPath);

    MCNAPI void writeArchive(::Bedrock::Resources::Archive::Builder& builder, ::Core::PathView dstFile);
#endif
    // NOLINTEND
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* const& ARCHIVES_FOLDER_NAME();

    MCNAPI static ::SemVersionConstant const& BRPAK_PACK_OPTIMIZATION_VERSION();

    MCNAPI static char const* const& MANIFEST_FILE_NAME();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::SemVersionConstant const& PACK_OPTIMIZATION_VERSION();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* const& SUBPACKS_FOLDER_NAME();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Bedrock::Resources::BakeConfig config);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
