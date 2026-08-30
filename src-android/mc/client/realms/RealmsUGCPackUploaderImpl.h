#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/realms/IRealmsUGCPackUploader.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct PackContentItem;
namespace OreUI { class Router; }
namespace Realms { class IContentApi; }
// clang-format on

namespace Realms {

class RealmsUGCPackUploaderImpl : public ::Realms::IRealmsUGCPackUploader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mContentAPI;
    ::ll::UntypedStorage<8, 64>                                                    mGetOreUIRouter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                           mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const PackContentItem>>> mPacksToUpload;
    ::ll::UntypedStorage<8, 64>                                                    mOnCompletionCallback;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsUploading;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasPushedRoute;
    ::ll::TypedStorage<8, 8, ulong>                                                mCurrentPackIndex;
    ::ll::UntypedStorage<8, 8>                                                     mCurrentRealmId;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentSlotIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUGCPackUploaderImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsUGCPackUploaderImpl();

    virtual void uploadUGCPacks(std::vector<std::shared_ptr<const PackContentItem>> const&, ::Realms::RealmId, int, std::function<void (Realms::IRealmsUGCPackUploader::UGCUploadResult)>&&);

    virtual ::Realms::IRealmsUGCPackUploader::PackUploadInfo getCurrentPackUploadInfo();

    virtual void completeCurrentPackUpload(std::string_view, std::string_view, ::UploadState);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleUploadCompletion();

    MCNAPI void _handleUploadFailure(::Realms::GenericStatus, std::optional<std::string_view>);

    MCNAPI void _processCurrentPack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $uploadUGCPacks(
        std::vector<std::shared_ptr<const PackContentItem>> const&,
        ::Realms::RealmId,
        int,
        std::function<void(Realms::IRealmsUGCPackUploader::UGCUploadResult)>&&
    );

    MCNAPI ::Realms::IRealmsUGCPackUploader::PackUploadInfo $getCurrentPackUploadInfo();

    MCNAPI void $completeCurrentPackUpload(std::string_view, std::string_view, ::UploadState);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
