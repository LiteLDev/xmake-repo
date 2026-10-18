#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/util/FileInfo.h"
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class RealmsFileUploader : public ::IFileChunkUploader, public ::std::enable_shared_from_this<RealmsFileUploader> {
#else // @header-generator platform
class RealmsFileUploader {
#endif // @header-generator platform
public:
    // RealmsFileUploader inner types declare
    // clang-format off
    struct RealmUploadInfo;
    struct UploadResult;
    // clang-format on

    // RealmsFileUploader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RealmUploadInfo : public ::Bedrock::Http::FileRequestBody {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::FileInfo>  fileInfo;
        ::ll::TypedStorage<8, 24, std::string> worldId;
        ::ll::TypedStorage<8, 24, std::string> token;
        ::ll::TypedStorage<8, 24, std::string> uploadUrl;
        ::ll::UntypedStorage<4, 4>             status;
        ::ll::UntypedStorage<4, 4>             result;
        ::ll::TypedStorage<8, 24, std::string> cancelUrl;
        ::ll::TypedStorage<4, 4, float>        progress;
        ::ll::TypedStorage<1, 1, bool>         receivedResponseEnd;
        ::ll::UntypedStorage<8, 16>            httpHandle;
        // NOLINTEND
#else // @header-generator platform
    struct RealmUploadInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        RealmUploadInfo();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RealmUploadInfo();

        virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct UploadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>             status;
        ::ll::TypedStorage<8, 24, std::string> cancelUrl;
        ::ll::TypedStorage<8, 24, std::string> progress;
        ::ll::TypedStorage<8, 24, std::string> errorCode;
        ::ll::TypedStorage<8, 24, std::string> reason;
        ::ll::TypedStorage<8, 24, std::string> message;
        // NOLINTEND

    public:
        // prevent constructor by default
        UploadResult& operator=(UploadResult const&);
        UploadResult(UploadResult const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _parse(std::string const&, std::string const&);

        MCNAPI ~UploadResult();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static std::string getProperty(std::string const&, std::string const&, std::string const&);
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
    // clang-format off
    ::ll::UntypedStorage<1, 144> mRealmsMapMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<RealmsFileUploader::RealmUploadInfo>>> mRealmsMap;
    ::ll::UntypedStorage<8, 616> mExecutionQueue;
    ::ll::TypedStorage<1, 1, bool> mIsPack;
    ::ll::TypedStorage<4, 4, int> mSlotID;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::TypedStorage<1, 1, bool> mMultipartUpload;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mRealmFileUploadTaskGroup;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFileUploader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsFileUploader();

    virtual void initFileUploader(std::string const&, ::FileInfo const&, int, ::Json::Value const&, std::function<void (bool)>);

    virtual void uploadStream(::FileInfo const&, ulong, std::string const&, std::function<void (IFileChunkUploader::UploadStreamResult)>);

    virtual bool canCancelUpload(::FileInfo const&) const;

    virtual void cancelUpload(::FileInfo const&);

    virtual ::UploadError getInitErrorCode() const;

    virtual float getUploadProgress(::FileInfo const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsFileUploader(std::weak_ptr<RealmsAPI>);

    MCNAPI void _internalMultipartCall(
        std::string const&,
        ::Core::Path const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::pair<ulong, ulong> const&,
        ulong const&,
        std::function<void(const std::string&, Bedrock::Http::Status&, const std::string&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>);
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

    MCNAPI void $uploadStream(
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(IFileChunkUploader::UploadStreamResult)>
    );

    MCNAPI bool $canCancelUpload(::FileInfo const&) const;

    MCNAPI void $cancelUpload(::FileInfo const&);

    MCNAPI ::UploadError $getInitErrorCode() const;

    MCNAPI float $getUploadProgress(::FileInfo const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct UploadResult {};
#endif // @header-generator platform
};
