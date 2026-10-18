#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldResourcePackDownloaderStatus.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldResourcePackDownloaderStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackDownloadProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::World::WorldResourcePackDownloaderStatus> status;
    ::ll::TypedStorage<4, 4, float>                                      progress;
    ::ll::TypedStorage<8, 24, std::string>                               name;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackDownloadProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::World::WorldResourcePackDownloaderStatus> status;
    ::ll::TypedStorage<4, 4, float>                                      progress;
    ::ll::TypedStorage<8, 32, ::std::string>                             name;
    // NOLINTEND
};
#else // @header-generator platform
struct PackDownloadProgressInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
