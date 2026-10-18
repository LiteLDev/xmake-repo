#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/DownloadError.h"
#include "mc/util/DownloadState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/DownloaderResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/FileInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IFileChunkDownloader;
class IFilePicker;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class FileDownloadManager : public ::std::enable_shared_from_this<FileDownloadManager> {
#else // @header-generator platform
class FileDownloadManager : public ::std::enable_shared_from_this<::FileDownloadManager> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::FileInfo>                            mFile;
    ::ll::TypedStorage<8, 16, ::Core::File>                          mCoreFile;
    ::ll::TypedStorage<4, 4, ::DownloadState>                        mState;
    ::ll::TypedStorage<4, 4, ::DownloadError>                        mDownloadError;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFilePicker>>          mFilePicker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFileChunkDownloader>> mFileDownloader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>             mIOTaskGroup;
    ::ll::UntypedStorage<8, 616>                                     mCallbackQueue;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                    mDataBuffer;
    ::ll::TypedStorage<8, 8, ulong>                                  mCurrentBufferSize;
    ::ll::TypedStorage<8, 8, ulong>                                  mCurrentBufferOffset;
    ::ll::UntypedStorage<8, 24>                                      mAppPlatform;
    ::ll::TypedStorage<1, 1, bool>                                   mHasWriteError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72>  mUnk76fb39;
    ::ll::UntypedStorage<8, 16>  mUnk3aa048;
    ::ll::UntypedStorage<4, 4>   mUnkfe9bd7;
    ::ll::UntypedStorage<4, 4>   mUnk899fea;
    ::ll::UntypedStorage<8, 16>  mUnk3a2a83;
    ::ll::UntypedStorage<8, 16>  mUnkd5926b;
    ::ll::UntypedStorage<8, 8>   mUnk712a40;
    ::ll::UntypedStorage<8, 616> mUnk6600ca;
    ::ll::UntypedStorage<8, 24>  mUnkf288de;
    ::ll::UntypedStorage<8, 8>   mUnk646146;
    ::ll::UntypedStorage<8, 8>   mUnk1fa5e5;
    ::ll::UntypedStorage<8, 24>  mUnk996181;
    ::ll::UntypedStorage<1, 1>   mUnkd59752;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileDownloadManager& operator=(FileDownloadManager const&);
    FileDownloadManager(FileDownloadManager const&);
#endif // @header-generator platform
    FileDownloadManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileDownloadManager();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~FileDownloadManager() = default;
#else // LL_PLAT_C
    virtual ~FileDownloadManager();
#endif
#endif // @header-generator platform

    virtual void update();

    virtual void cancelDownload();

    virtual float getDownloadProgress() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileDownloadManager(
        std::shared_ptr<IFilePicker>,
        std::shared_ptr<IFileChunkDownloader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>
    );

    MCNAPI void _writeData(std::vector<uchar>, ulong, ulong, ulong, std::function<void(ulong, bool)>);

    MCNAPI bool canCancelDownload() const;

    MCNAPI void downloadFile(
        std::string const&,
        std::string const&,
        ::Core::Path const&,
        ulong,
        ulong,
        std::string const&,
        std::function<void(const Core::Path&, DownloaderResult)>,
        int const
    );

    MCNAPI ulong getDownloadSize() const;

    MCNAPI ::DownloadState getDownloadState() const;

    MCNAPI ::DownloadError const& getError() const;

    MCNAPI ulong getFileSize() const;

    MCNAPI void pauseDownload();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI FileDownloadManager(
        ::std::shared_ptr<::IFilePicker>             filePicker,
        ::std::shared_ptr<::IFileChunkDownloader>    fileDownloader,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> appPlatform
    );

    MCNAPI void _writeData(
        ::std::vector<uchar>                data,
        uint64                              writeBytes,
        uint64                              offset,
        uint64                              progress,
        ::std::function<void(uint64, bool)> writeComplete
    );

    MCNAPI void downloadFile(
        ::std::string const&                                           downloadId,
        ::std::string const&                                           downloadUrl,
        ::Core::Path const&                                            downloadPath,
        uint64                                                         expectedFileSize,
        uint64                                                         fromByteOffset,
        ::std::string const&                                           downloadVersion,
        ::std::function<void(::Core::Path const&, ::DownloaderResult)> onCompleteCallback,
        int                                                            slotIndex
    );

    MCNAPI void pauseDownload();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<IFilePicker>,
        std::shared_ptr<IFileChunkDownloader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::shared_ptr<::IFilePicker>             filePicker,
        ::std::shared_ptr<::IFileChunkDownloader>    fileDownloader,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> appPlatform
    );
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

    MCNAPI void $cancelDownload();

    MCNAPI float $getDownloadProgress() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cancelDownload();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getDownloadProgress() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
