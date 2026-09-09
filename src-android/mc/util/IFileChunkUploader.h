#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
struct FileChunkInfo;
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class IFileChunkUploader {
public:
    // IFileChunkUploader inner types define
    enum class UploadStreamResult : int {
        Success             = 0,
        Failure             = 1,
        FailureForbidden    = 2,
        FailureWorldName    = 3,
        InvalidResponseBody = 4,
        None                = 5,
    };

    enum class UploadStatus : int {
        Initialized         = 0,
        ArchivingStarted    = 1,
        ArchivingFailed     = 2,
        ArchivingSucceeded  = 3,
        UploadFailed        = 4,
        ValidationStarted   = 5,
        ValidationProgress  = 6,
        ValidationFailed    = 7,
        ValidationCancelled = 8,
        ValidationSucceeded = 9,
        UnknownError        = 10,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFileChunkUploader();

    virtual void initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void (bool)>) = 0;

    virtual void getServerMissingChunks(::FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>) const;

    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    virtual void uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void (bool)>);

    virtual void uploadStream(::FileInfo const&, ulong, std::string const&, std::function<void (IFileChunkUploader::UploadStreamResult)>);

    virtual bool canCancelUpload(::FileInfo const&) const = 0;

    virtual void cancelUpload(::FileInfo const&) = 0;

    virtual ::UploadError getInitErrorCode() const = 0;

    virtual float getUploadProgress(::FileInfo const&) const = 0;

    virtual ::FileChunkInfo getChunkInfo(::FileInfo const&, int) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IFileChunkUploader();
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
    MCNAPI void $getServerMissingChunks(::FileInfo const&, std::function<void(std::vector<FileChunkInfo>)>) const;

    MCNAPI void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    MCNAPI void $uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void(bool)>);

    MCNAPI void $uploadStream(
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(IFileChunkUploader::UploadStreamResult)>
    );

    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const&, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
