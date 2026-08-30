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
    using DataCallback = std::function<void(std::vector<uchar>, ulong, ulong, std::function<void(ulong, bool)>)>;

    using EndCallback = std::function<void(DownloaderState)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFileChunkDownloader() = default;

    virtual void update() = 0;

    virtual void initRealmsFileDownloader(std::string const&, int const, std::string const&, ::FileInfo const&, ulong, std::string const&, std::function<void (DownloaderResult)>) = 0;

    virtual void initFileDownloader(std::string const&, std::string const&, ::FileInfo const&, ulong, ulong, std::string const&, std::function<void (DownloaderResult)>) = 0;

    virtual void downloadFile(std::function<void (std::vector<uchar>, ulong, ulong, std::function<void (ulong, bool)>)>, std::function<void (DownloaderState)>) = 0;

    virtual bool canCancelDownload() const = 0;

    virtual void cancelDownload() = 0;

    virtual ulong getDownloadTotalSize() const = 0;

    virtual ulong getDownloadReceivedSize() const = 0;

    virtual float getDownloadProgress() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const* const[9]> DownloaderResultStrings();
    // NOLINTEND
};
