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
                                public ::std::enable_shared_from_this<ServerFileChunkUploader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PacketSender&>            mPacketSender;
    ::ll::TypedStorage<8, 8, ::NetworkIdentifier const&> mSource;
    ::ll::TypedStorage<1, 1, bool>                       mInitialized;
    ::ll::TypedStorage<8, 24, std::string>               mName;
    ::ll::TypedStorage<8, 24, std::string>               mFileHash;
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
    // clang-format off
    virtual ~ServerFileChunkUploader();

    virtual void initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void (bool)>);

    virtual void getServerMissingChunks(::FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>) const;

    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    virtual void uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void (bool)>);

    virtual bool canCancelUpload(::FileInfo const&) const;

    virtual void cancelUpload(::FileInfo const&);

    virtual ::UploadError getInitErrorCode() const;

    virtual float getUploadProgress(::FileInfo const&) const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void(bool)>);

    MCNAPI void $getServerMissingChunks(::FileInfo const&, std::function<void(std::vector<FileChunkInfo>)>) const;

    MCNAPI void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    MCNAPI void $uploadChunk(::FileInfo const&, ::FileChunkInfo const&, std::vector<uchar>, std::function<void(bool)>);

    MCNAPI bool $canCancelUpload(::FileInfo const&) const;

    MCNAPI void $cancelUpload(::FileInfo const&);

    MCNAPI ::UploadError $getInitErrorCode() const;

    MCNAPI float $getUploadProgress(::FileInfo const&) const;

    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const&, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
