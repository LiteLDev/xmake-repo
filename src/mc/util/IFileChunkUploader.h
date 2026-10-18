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
#if defined(LL_PLAT_A) // @header-generator platform
    enum class UploadStreamResult : int {
        Success             = 0,
        Failure             = 1,
        FailureForbidden    = 2,
        FailureWorldName    = 3,
        InvalidResponseBody = 4,
        None                = 5,
    };

#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class UploadStreamResult : int {
        Success             = 0,
        Failure             = 1,
        FailureForbidden    = 2,
        FailureWorldName    = 3,
        InvalidResponseBody = 4,
        None                = 5,
    };

#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IFileChunkUploader();
#else // @header-generator platform
    virtual ~IFileChunkUploader() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void (bool)>) = 0;
#else // @header-generator platform
    virtual void initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getServerMissingChunks(::FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>) const;
#else // @header-generator platform
    virtual void getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);
#else // @header-generator platform
    virtual void confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void (bool)>);
#else // @header-generator platform
    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void uploadStream(::FileInfo const&, ulong, std::string const&, std::function<void (IFileChunkUploader::UploadStreamResult)>);
#else // @header-generator platform
    virtual void uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCancelUpload(::FileInfo const&) const = 0;
#else // @header-generator platform
    virtual bool canCancelUpload(::FileInfo const& file) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancelUpload(::FileInfo const&) = 0;
#else // @header-generator platform
    virtual void cancelUpload(::FileInfo const& file) = 0;
#endif // @header-generator platform

    virtual ::UploadError getInitErrorCode() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getUploadProgress(::FileInfo const&) const = 0;
#else // @header-generator platform
    virtual float getUploadProgress(::FileInfo const& file) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getServerMissingChunks(::FileInfo const&, std::function<void(std::vector<FileChunkInfo>)>) const;

    MCNAPI void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    MCNAPI void $uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void(bool)>);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $uploadStream(
#if defined(LL_PLAT_A) // @header-generator platform
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(IFileChunkUploader::UploadStreamResult)>
#else // @header-generator platform
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const&, int) const;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    MCNAPI void $confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);

    MCNAPI void $uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );

    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
