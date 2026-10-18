#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackDownloadError.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackDownloadProgressInfo; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackDownloadError.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackDownloadProgressInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class IWorldResourcePackDownloader {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldResourcePackDownloader() = default;

    virtual void downloadPacks(std::vector<std::string> const&, std::function<void ()>, std::function<void (World::PackDownloadError)>) = 0;

    virtual ::World::PackDownloadProgressInfo getProgress() = 0;

    virtual void cancelDownloadPack() = 0;

    virtual void getPackSizes(std::vector<std::string> const&, std::function<void (ulong)>) = 0;

    virtual void getDownloadingPackTitles(std::function<void (std::vector<std::string>)>) = 0;

    virtual ::World::PackCheckResult checkDlc(std::string const&, ::PackIdVersion const&, bool const) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IWorldResourcePackDownloader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldResourcePackDownloader() = default;

    virtual void downloadPacks(
        ::std::vector<::std::string> const&               productIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) = 0;

    virtual ::World::PackDownloadProgressInfo getProgress() = 0;

    virtual void cancelDownloadPack() = 0;

    virtual void
    getPackSizes(::std::vector<::std::string> const& productIds, ::std::function<void(uint64)> onCompleteCallback) = 0;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) = 0;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IWorldResourcePackDownloader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
