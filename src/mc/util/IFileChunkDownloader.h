#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
// clang-format on

class IFileChunkDownloader {
public:
    // IFileChunkDownloader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using DataCallback = std::function<void(std::vector<uchar>, ulong, ulong, std::function<void(ulong, bool)>)>;
#else // @header-generator platform
    using DataCallback =
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using EndCallback = std::function<void(DownloaderState)>;
#else // @header-generator platform
    using EndCallback = ::std::function<void(::DownloaderState)>;

    using WriteCompleteCallback = ::std::function<void(uint64, bool)>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IFileChunkDownloader() = default;

    virtual void update() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initRealmsFileDownloader(std::string const&, int const, std::string const&, ::FileInfo const&, ulong, std::string const&, std::function<void (DownloaderResult)>) = 0;
#else // @header-generator platform
    virtual void initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initFileDownloader(std::string const&, std::string const&, ::FileInfo const&, ulong, ulong, std::string const&, std::function<void (DownloaderResult)>) = 0;
#else // @header-generator platform
    virtual void initFileDownloader(
        ::std::string const&,
        ::std::string const&,
        ::FileInfo const&,
        uint64,
        uint64,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)>
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void downloadFile(std::function<void (std::vector<uchar>, ulong, ulong, std::function<void (ulong, bool)>)>, std::function<void (DownloaderState)>) = 0;
#else // @header-generator platform
    virtual void downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    ) = 0;
#endif // @header-generator platform

    virtual bool canCancelDownload() const = 0;

    virtual void cancelDownload() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDownloadTotalSize() const = 0;
#else // @header-generator platform
    virtual uint64 getDownloadTotalSize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDownloadReceivedSize() const = 0;
#else // @header-generator platform
    virtual uint64 getDownloadReceivedSize() const = 0;
#endif // @header-generator platform

    virtual float getDownloadProgress() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const* const[9]> DownloaderResultStrings();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::add_lvalue_reference_t<char const* const[9]> DownloaderResultStrings();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
