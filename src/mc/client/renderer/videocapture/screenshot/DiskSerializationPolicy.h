#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace videocapture::screenshot {

#if defined(LL_PLAT_A) // @header-generator platform
struct DiskSerializationPolicy {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mPrefix;
    ::ll::TypedStorage<4, 8, std::optional<uint> const> mIOLimit;
    ::ll::TypedStorage<1, 1, bool> mBlockUntilComplete;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::tuple<uint, std::mutex, std::condition_variable>>> mSynchronizedTaskCounter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mAsyncTaskGroup;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct DiskSerializationPolicy {};
#endif // @header-generator platform

} // namespace videocapture::screenshot
