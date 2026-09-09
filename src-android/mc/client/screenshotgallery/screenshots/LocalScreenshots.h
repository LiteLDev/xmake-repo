#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FileSystem; }
namespace Screenshots { struct LocalScreenshotsData; }
// clang-format on

namespace Screenshots {

class LocalScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mDiskTaskGroup;
    ::ll::UntypedStorage<8, 24>                          mFileSystem;
    ::ll::UntypedStorage<8, 24>                          mUserDataPath;
    ::ll::TypedStorage<8, 8, ::Social::XUID>             mXuid;
    ::ll::UntypedStorage<8, 88>                          mScreenshotsData;
    ::ll::TypedStorage<1, 1, bool>                       mLoadingGallery;
    ::ll::TypedStorage<1, 1, bool>                       mLoadingCount;
    ::ll::UntypedStorage<8, 88>                          mNotifyChangeSubscribers;
    // NOLINTEND
};

} // namespace Screenshots
