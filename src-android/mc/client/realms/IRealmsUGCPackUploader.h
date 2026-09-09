#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

class IRealmsUGCPackUploader {
public:
    // IRealmsUGCPackUploader inner types declare
    // clang-format off
    struct UGCUploadResult;
    struct PackUploadInfo;
    // clang-format on

    // IRealmsUGCPackUploader inner types define
    enum UGCUploadResultStatus : uint {
        Unknown = 0,
        Success = 1,
        Failure = 2,
    };

    struct UGCUploadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Realms::IRealmsUGCPackUploader::UGCUploadResultStatus> mUploadStatus;
        ::ll::TypedStorage<4, 8, std::optional<Realms::GenericStatus>>                    mErrorStatus;
        ::ll::TypedStorage<8, 24, std::optional<std::string_view>>                        mFailedPackName;
        // NOLINTEND
    };

    struct PackUploadInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mPackId;
        ::ll::TypedStorage<8, 24, std::string> mPackVersion;
        ::ll::TypedStorage<8, 24, std::string> mPackLocation;
        ::ll::TypedStorage<1, 1, bool>         mShouldArchive;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackUploadInfo& operator=(PackUploadInfo const&);
        PackUploadInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PackUploadInfo(::Realms::IRealmsUGCPackUploader::PackUploadInfo const&);

        MCNAPI ~PackUploadInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Realms::IRealmsUGCPackUploader::PackUploadInfo const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IRealmsUGCPackUploader() = default;

    virtual void uploadUGCPacks(std::vector<std::shared_ptr<const PackContentItem>> const&, ::Realms::RealmId, int, std::function<void (Realms::IRealmsUGCPackUploader::UGCUploadResult)>&&) = 0;

    virtual ::Realms::IRealmsUGCPackUploader::PackUploadInfo getCurrentPackUploadInfo() = 0;

    virtual void completeCurrentPackUpload(std::string_view, std::string_view, ::UploadState) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Realms
