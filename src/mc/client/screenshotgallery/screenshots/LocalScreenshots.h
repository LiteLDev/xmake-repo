#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace Screenshots {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class LocalScreenshots {};
#endif // @header-generator platform

} // namespace Screenshots
