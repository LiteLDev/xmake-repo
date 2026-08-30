#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace videocapture::screenshot {

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

} // namespace videocapture::screenshot
