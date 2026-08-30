#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileInfo.h"
#include "mc/util/UploadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class IFileChunkUploader;
class IFilePicker;
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FileUploadManager : public ::std::enable_shared_from_this<FileUploadManager> {
public:
    // FileUploadManager inner types declare
    // clang-format off
    struct MultiPartStreamHelper;
    // clang-format on

    // FileUploadManager inner types define
    struct MultiPartStreamHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         needHeader;
        ::ll::TypedStorage<1, 1, bool>         needTrailer;
        ::ll::TypedStorage<8, 24, std::string> header;
        ::ll::TypedStorage<8, 24, std::string> trailer;
        ::ll::TypedStorage<8, 8, ulong>        currentFileByte;
        ::ll::TypedStorage<8, 8, ulong>        totalFileByte;
        ::ll::TypedStorage<8, 8, ulong>        totalStreamSize;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MultiPartStreamHelper();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::FileInfo>                                 mFile;
    ::ll::TypedStorage<8, 80, ::FileUploadManager::MultiPartStreamHelper> mMultiPartHelper;
    ::ll::TypedStorage<4, 4, ::UploadState>                               mState;
    ::ll::TypedStorage<4, 4, ::UploadError>                               mUploadError;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFilePicker>>               mFilePicker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFileChunkUploader>>        mFileUploader;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                mIOTaskGroup;
    ::ll::UntypedStorage<8, 24>                                           mFileArchiver;
    ::ll::TypedStorage<1, 1, bool>                                        mUploadAllAtOnce;
    ::ll::TypedStorage<1, 1, bool>                                        mContinueOnReception;
    ::ll::TypedStorage<1, 1, bool>                                        mUseStream;
    // NOLINTEND

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&);
    FileUploadManager(FileUploadManager const&);
    FileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FileUploadManager();

    virtual float getUploadProgress() const;

    virtual void archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&) = 0;

    virtual void uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileUploadManager(::TaskGroup&, std::shared_ptr<IFileChunkUploader>);

    MCNAPI FileUploadManager(
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&
    );

    MCNAPI void _uploadChunk(::FileChunkInfo const&);

    MCNAPI void _uploadStream();

    MCNAPI void addCallbackQueue(std::function<void()>);

    MCNAPI bool canCancelUpload() const;

    MCNAPI void cancelUpload();

    MCNAPI ::UploadError const& getError() const;

    MCNAPI ulong getFileSize() const;

    MCNAPI ::UploadState getUploadState() const;

    MCNAPI void setFailed(::UploadError);

    MCNAPI void setUseStream(bool);

    MCNAPI void uploadChunk(int);

    MCNAPI void uploadFile(std::string const&, ::Core::Path const&, bool, ::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BOUNDARY();

    MCNAPI static int const& CHUNK_UPLOAD_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TaskGroup&, std::shared_ptr<IFileChunkUploader>);

    MCNAPI void* $ctor(
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&
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
    MCNAPI float $getUploadProgress() const;

    MCNAPI void $uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
