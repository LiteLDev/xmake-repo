#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FileSystem; }
namespace Screenshots { class LocalScreenshots; }
namespace Screenshots { class ShowcasedScreenshots; }
namespace Screenshots { struct ScreenshotsGalleryData; }
// clang-format on

namespace Screenshots {

class ScreenshotGallery {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 88> mNotifyChangeSubscribers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Screenshots::LocalScreenshots>> mLocalScreenshots;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Screenshots::ShowcasedScreenshots>> mShowcasedScreenshots;
    ::ll::UntypedStorage<8, 24> mFileSystem;
    ::ll::UntypedStorage<8, 96> mScreenshotsGalleryData;
    ::ll::TypedStorage<1, 1, bool> mCanTakeScreenshot;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mFullToastMessageCooldown;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mFullToastMessageTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalScreenshotsDirtySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mShowcasedScreenshotsDirtySubscriber;
    // clang-format on
    // NOLINTEND
};

} // namespace Screenshots
