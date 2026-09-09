#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/DownloadError.h"
#include "mc/util/DownloadState.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/FileInfo.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IFileChunkDownloader;
class IFilePicker;
class TaskGroup;
namespace Core { class Path; }
// clang-format on

class FileDownloadManager : public ::std::enable_shared_from_this<FileDownloadManager> {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDownloadManager();

    virtual void update();

    virtual void cancelDownload();

    virtual float getDownloadProgress() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<IFilePicker>,
        std::shared_ptr<IFileChunkDownloader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>
    );
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

    MCNAPI void $cancelDownload();

    MCNAPI float $getDownloadProgress() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
