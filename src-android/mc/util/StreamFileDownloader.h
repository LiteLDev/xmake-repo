#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"
#include "mc/util/IFileChunkDownloader.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

class StreamFileDownloader : public ::IFileChunkDownloader,
                             public ::std::enable_shared_from_this<StreamFileDownloader> {
public:
    // StreamFileDownloader inner types define
    using DataCallback = std::function<void(std::vector<uchar>, std::function<void(ulong, bool)>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       mDownloadUrl;
    ::ll::UntypedStorage<8, 16>                  mFromByteOffset;
    ::ll::UntypedStorage<8, 48>                  mDataCallback;
    ::ll::UntypedStorage<8, 48>                  mEndCallback;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mReceivedBytes;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFileSize;
    ::ll::TypedStorage<8, 8, ulong>              mChunkSize;
    ::ll::TypedStorage<1, 1, uchar>              mRetryCount;
    ::ll::TypedStorage<1, 1, bool>               mIsCanceled;
    ::ll::TypedStorage<8, 240, ::TaskGroup>      mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StreamFileDownloader();

    virtual void update();

    virtual void initRealmsFileDownloader(std::string const&, int const, std::string const&, ::FileInfo const&, ulong, std::string const&, std::function<void (DownloaderResult)>);

    virtual void initFileDownloader(std::string const&, std::string const&, ::FileInfo const&, ulong, ulong, std::string const&, std::function<void (DownloaderResult)>);

    virtual void downloadFile(std::function<void (std::vector<uchar>, ulong, ulong, std::function<void (ulong, bool)>)>, std::function<void (DownloaderState)>);

    virtual bool canCancelDownload() const;

    virtual void cancelDownload();

    virtual ulong getDownloadTotalSize() const;

    virtual ulong getDownloadReceivedSize() const;

    virtual float getDownloadProgress() const;

    virtual ::Bedrock::Http::Request _makeRequest();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StreamFileDownloader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();

    MCNAPI void $initRealmsFileDownloader(
        std::string const&,
        int const,
        std::string const&,
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(DownloaderResult)>
    );

    MCNAPI void $initFileDownloader(
        std::string const&,
        std::string const&,
        ::FileInfo const&,
        ulong,
        ulong,
        std::string const&,
        std::function<void(DownloaderResult)>
    );

    MCNAPI void $downloadFile(
        std::function<void(std::vector<uchar>, ulong, ulong, std::function<void(ulong, bool)>)>,
        std::function<void(DownloaderState)>
    );

    MCNAPI bool $canCancelDownload() const;

    MCNAPI void $cancelDownload();

    MCNAPI ulong $getDownloadTotalSize() const;

    MCNAPI ulong $getDownloadReceivedSize() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI ::Bedrock::Http::Request $_makeRequest();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
