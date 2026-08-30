#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::Threading {

struct DelayableTaskGroup : public ::std::unique_ptr<TaskGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mStartWithDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayableTaskGroup& operator=(DelayableTaskGroup const&);
    DelayableTaskGroup(DelayableTaskGroup const&);
    DelayableTaskGroup();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void defaultStartWithDelay(
        ::TaskGroup&,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        ::brstd::move_only_function<void()>
    );
    // NOLINTEND
};

} // namespace Bedrock::Threading
