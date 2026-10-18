#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileChunkManager.h"
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
struct FileChunkInfo;
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class ServerFileChunkUploader : public ::IFileChunkUploader,
#if defined(LL_PLAT_A) // @header-generator platform
                                public ::std::enable_shared_from_this<ServerFileChunkUploader> {
#else // @header-generator platform
                                public ::std::enable_shared_from_this<::ServerFileChunkUploader> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PacketSender&>            mPacketSender;
    ::ll::TypedStorage<8, 8, ::NetworkIdentifier const&> mSource;
    ::ll::TypedStorage<1, 1, bool>                       mInitialized;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>               mName;
    ::ll::TypedStorage<8, 24, std::string>               mFileHash;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    ::ll::TypedStorage<8, 32, ::std::string>             mFileHash;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 96, ::FileChunkManager>        mChunkManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFileChunkUploader& operator=(ServerFileChunkUploader const&);
    ServerFileChunkUploader(ServerFileChunkUploader const&);
    ServerFileChunkUploader();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerFileChunkUploader();
#else // @header-generator platform
    virtual ~ServerFileChunkUploader() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void (bool)>);
#else // @header-generator platform
    virtual void initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getServerMissingChunks(::FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>) const;
#else // @header-generator platform
    virtual void
    getServerMissingChunks(::FileInfo const& file, ::std::function<void(::std::vector<::FileChunkInfo>)> callback) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&) /*override*/;
#else // LL_PLAT_C
    virtual void confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void (bool)>);
#else // @header-generator platform
    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCancelUpload(::FileInfo const&) const;
#else // @header-generator platform
    virtual bool canCancelUpload(::FileInfo const& file) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancelUpload(::FileInfo const&);
#else // @header-generator platform
    virtual void cancelUpload(::FileInfo const& file) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::UploadError getInitErrorCode() const;
#else // @header-generator platform
    virtual ::UploadError getInitErrorCode() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getUploadProgress(::FileInfo const&) const;
#else // @header-generator platform
    virtual float getUploadProgress(::FileInfo const& file) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::FileChunkInfo getChunkInfo(::FileInfo const&, int) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerFileChunkUploader(::PacketSender&, ::NetworkIdentifier const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PacketSender&, ::NetworkIdentifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void(bool)>);
#else // @header-generator platform
    MCAPI void $initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getServerMissingChunks(::FileInfo const&, std::function<void(std::vector<FileChunkInfo>)>) const;
#else // @header-generator platform
    MCAPI void $getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);
#else // LL_PLAT_C
    MCFOLD void $confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void(bool)>);
#else // @header-generator platform
    MCAPI void $uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canCancelUpload(::FileInfo const&) const;
#else // @header-generator platform
    MCFOLD bool $canCancelUpload(::FileInfo const& file) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cancelUpload(::FileInfo const&);
#else // @header-generator platform
    MCFOLD void $cancelUpload(::FileInfo const& file);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::UploadError $getInitErrorCode() const;
#else // @header-generator platform
    MCFOLD ::UploadError $getInitErrorCode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getUploadProgress(::FileInfo const&) const;
#else // @header-generator platform
    MCFOLD float $getUploadProgress(::FileInfo const& file) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const&, int) const;
#else // @header-generator platform
    MCAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
