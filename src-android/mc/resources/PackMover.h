#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class PackManifest;
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
namespace Core::ZipUtils { struct ZipProgressList; }
// clang-format on

class PackMover {
public:
    // PackMover inner types define
    using PackMoverCallback = std::function<void(bool)>;

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
