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

#if defined(LL_PLAT_A) // @header-generator platform
class FileUploadManager : public ::std::enable_shared_from_this<FileUploadManager> {
#else // @header-generator platform
class FileUploadManager : public ::std::enable_shared_from_this<::FileUploadManager> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>           needHeader;
        ::ll::TypedStorage<1, 1, bool>           needTrailer;
        ::ll::TypedStorage<8, 32, ::std::string> header;
        ::ll::TypedStorage<8, 32, ::std::string> trailer;
        ::ll::TypedStorage<8, 8, uint64>         currentFileByte;
        ::ll::TypedStorage<8, 8, uint64>         totalFileByte;
        ::ll::TypedStorage<8, 8, uint64>         totalStreamSize;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::FileInfo>                                 mFile;
    ::ll::TypedStorage<8, 80, ::FileUploadManager::MultiPartStreamHelper> mMultiPartHelper;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::FileInfo>                                 mFile;
    ::ll::TypedStorage<8, 96, ::FileUploadManager::MultiPartStreamHelper> mMultiPartHelper;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::UploadState>                               mState;
    ::ll::TypedStorage<4, 4, ::UploadError>                               mUploadError;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFilePicker>>               mFilePicker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IFileChunkUploader>>        mFileUploader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IFilePicker>>           mFilePicker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IFileChunkUploader>>    mFileUploader;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                mIOTaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                           mFileArchiver;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::FileArchiver>> mFileArchiver;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~FileUploadManager();

    virtual float getUploadProgress() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) = 0;
#else // LL_PLAT_C
    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  worldID,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // clang-format on
#else // @header-generator platform
    virtual void uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileUploadManager(::TaskGroup&, std::shared_ptr<IFileChunkUploader>);
#else // @header-generator platform
    MCAPI FileUploadManager(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileUploadManager(
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI FileUploadManager(
        ::TaskGroup&                                         taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>              fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const& fileArchiver
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _uploadChunk(::FileChunkInfo const&);
#else // @header-generator platform
    MCAPI void _uploadChunk(::FileChunkInfo const& chunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _uploadStream();
#else // @header-generator platform
    MCAPI void addCallbackQueue(::std::function<void()> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void uploadFile(
        ::std::string const& uploadId,
        ::Core::Path const&  filePath,
        bool                 autoStartUpload,
        ::Json::Value const& uploadOptions
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BOUNDARY();

    MCNAPI static int const& CHUNK_UPLOAD_SIZE();
#else // @header-generator platform
    MCAPI static ::std::string const& BOUNDARY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::TaskGroup&, std::shared_ptr<IFileChunkUploader>);
#else // @header-generator platform
    MCAPI void* $ctor(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::TaskGroup&,
        std::shared_ptr<IFileChunkUploader>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::TaskGroup&                                         taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>              fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const& fileArchiver
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
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getUploadProgress() const;
#else // @header-generator platform
    MCAPI float $getUploadProgress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $uploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
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
