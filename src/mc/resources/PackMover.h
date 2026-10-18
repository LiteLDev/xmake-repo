#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
#if defined(LL_PLAT_A) // @header-generator platform
class PackManifest;
#else // @header-generator platform
#endif // @header-generator platform
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
namespace Core::ZipUtils { struct ZipProgressList; }
// clang-format on

class PackMover {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PackMover inner types define
    using PackMoverCallback = std::function<void(bool)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void copyPack(
        ::TaskGroup&,
        ::PackManifest const&,
        ::Core::Path const&,
        bool,
        std::vector<std::string> const&,
        ::Core::ZipUtils::ZipProgressList&,
        std::function<void(bool)>,
        bool,
        bool
    );

    MCNAPI static void copyPack(
        ::TaskGroup&,
        ::ResourceLocation const&,
        bool,
        ::Core::Path const&,
        bool,
        std::vector<std::string> const&,
        ::Core::ZipUtils::ZipProgressList*,
        std::function<void(bool)>,
        bool,
        bool
    );

    MCNAPI static void copyPack(
        ::AppPlatform&,
        ::TaskGroup&,
        ::Core::ZipUtils::IZipUtility const&,
        ::ResourceLocation const&,
        bool,
        ::Core::Path const&,
        bool,
        std::vector<std::string> const&,
        ::Core::ZipUtils::ZipProgressList*,
        std::function<void(bool)>,
        bool,
        bool
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void copyPack(
        ::TaskGroup&                        taskGroup,
        ::ResourceLocation const&           srcLocation,
        bool                                srcPackIsZipped,
        ::Core::Path const&                 destPath,
        bool                                zipDestination,
        ::std::vector<::std::string> const& excludeDirs,
        ::Core::ZipUtils::ZipProgressList*  progressList,
        ::std::function<void(bool)>         callback,
        bool                                unzipAsFlatFile,
        bool                                unzipInTransaction
    );

    MCNAPI static void copyPack(
        ::AppPlatform&                       appPlatform,
        ::TaskGroup&                         taskGroup,
        ::Core::ZipUtils::IZipUtility const& zipUtility,
        ::ResourceLocation const&            srcLocation,
        bool                                 srcPackIsZipped,
        ::Core::Path const&                  destPath,
        bool                                 zipDestination,
        ::std::vector<::std::string> const&  excludeDirs,
        ::Core::ZipUtils::ZipProgressList*   progressList,
        ::std::function<void(bool)>          callback,
        bool                                 unzipAsFlatFile,
        bool                                 unzipInTransaction
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
