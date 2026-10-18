#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"
#include "mc/util/IFileChunkDownloader.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Bedrock::Http { class Request; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Response; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StreamFileDownloader : public ::IFileChunkDownloader,
#if defined(LL_PLAT_A) // @header-generator platform
                             public ::std::enable_shared_from_this<StreamFileDownloader> {
public:
    // StreamFileDownloader inner types define
    using DataCallback = std::function<void(std::vector<uchar>, std::function<void(ulong, bool)>)>;

#else // @header-generator platform
                             public ::std::enable_shared_from_this<::StreamFileDownloader> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkebe6fb;
    ::ll::UntypedStorage<8, 8>   mUnkd71e6f;
    ::ll::UntypedStorage<8, 64>  mUnk3f161f;
    ::ll::UntypedStorage<8, 64>  mUnk82ed74;
    ::ll::UntypedStorage<8, 8>   mUnk402616;
    ::ll::UntypedStorage<8, 8>   mUnk89347f;
    ::ll::UntypedStorage<8, 8>   mUnk238343;
    ::ll::UntypedStorage<1, 1>   mUnk1c4b1c;
    ::ll::UntypedStorage<1, 1>   mUnkcb17b4;
    ::ll::UntypedStorage<8, 336> mUnk6e3666;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StreamFileDownloader& operator=(StreamFileDownloader const&);
    StreamFileDownloader(StreamFileDownloader const&);
    StreamFileDownloader();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StreamFileDownloader& operator=(StreamFileDownloader const&);
    StreamFileDownloader(StreamFileDownloader const&);

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StreamFileDownloader();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~StreamFileDownloader() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StreamFileDownloader() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
#else // @header-generator platform
    virtual void update() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initRealmsFileDownloader(std::string const&, int const, std::string const&, ::FileInfo const&, ulong, std::string const&, std::function<void (DownloaderResult)>);
#else // @header-generator platform
    virtual void initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initFileDownloader(std::string const&, std::string const&, ::FileInfo const&, ulong, ulong, std::string const&, std::function<void (DownloaderResult)>);
#else // @header-generator platform
    virtual void initFileDownloader(
        ::std::string const&,
        ::std::string const& downloadUrl,
        ::FileInfo const&,
        uint64 expectedFileSize,
        uint64 fromByteOffset,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)> callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void downloadFile(std::function<void (std::vector<uchar>, ulong, ulong, std::function<void (ulong, bool)>)>, std::function<void (DownloaderState)>);
#else // @header-generator platform
    virtual void downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCancelDownload() const;
#else // @header-generator platform
    virtual bool canCancelDownload() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancelDownload();
#else // @header-generator platform
    virtual void cancelDownload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDownloadTotalSize() const;
#else // @header-generator platform
    virtual uint64 getDownloadTotalSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDownloadReceivedSize() const;
#else // @header-generator platform
    virtual uint64 getDownloadReceivedSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getDownloadProgress() const;
#else // @header-generator platform
    virtual float getDownloadProgress() const /*override*/;
#endif // @header-generator platform

    virtual ::Bedrock::Http::Request _makeRequest();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StreamFileDownloader();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI StreamFileDownloader();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $update();

    MCNAPI void $initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    );

    MCNAPI void $initFileDownloader(
        ::std::string const&,
        ::std::string const& downloadUrl,
        ::FileInfo const&,
        uint64 expectedFileSize,
        uint64 fromByteOffset,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)> callback
    );

    MCNAPI void $downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    );

    MCNAPI bool $canCancelDownload() const;

    MCNAPI void $cancelDownload();

    MCNAPI uint64 $getDownloadTotalSize() const;

    MCNAPI uint64 $getDownloadReceivedSize() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI ::Bedrock::Http::Request $_makeRequest();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initRealmsFileDownloader(
        std::string const&,
        int const,
        std::string const&,
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(DownloaderResult)>
    );
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
