#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Realms__BackupDownloadState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class WorldFileDownloadManager;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class User; }
// clang-format on

namespace Realms {

class RealmsBackupDownloader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // RealmsBackupDownloader inner types define
    using GetCurrentUser = ::brstd::move_only_function<std::shared_ptr<Social::User>()>;

    using CreateWorldFileDownloadManager = ::brstd::move_only_function<std::shared_ptr<WorldFileDownloadManager>()>;

    using StartWorldDownload = ::brstd::move_only_function<void(
        WorldFileDownloadManager&,
        long,
        int,
        const std::string&,
        const std::string&,
        const std::string&,
        const std::string&
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                          mGetCurrentUser;
    ::ll::UntypedStorage<8, 64>                                          mCreateWorldFileDownloadManager;
    ::ll::UntypedStorage<8, 64>                                          mStartWorldDownload;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>> mDownloadManager;
    ::ll::TypedStorage<1, 1, ::Realms::BackupDownloadState>              mState;
    ::ll::TypedStorage<4, 4, float>                                      mProgress;
    ::ll::UntypedStorage<8, 88>                                          mChangedPublisher;
    // NOLINTEND
};

} // namespace Realms
