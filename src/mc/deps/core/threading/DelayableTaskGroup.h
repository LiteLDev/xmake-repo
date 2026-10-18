#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/move_only_function.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

#endif // @header-generator platform
namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
struct DelayableTaskGroup : public ::std::unique_ptr<TaskGroup> {
#else // @header-generator platform
struct DelayableTaskGroup : public ::std::unique_ptr<::TaskGroup> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mStartWithDelay;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::copyable_function<void(::TaskGroup&, ::std::chrono::seconds, ::brstd::move_only_function<void()>)>>
        mStartWithDelay;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DelayableTaskGroup& operator=(DelayableTaskGroup const&);
    DelayableTaskGroup(DelayableTaskGroup const&);
    DelayableTaskGroup();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void defaultStartWithDelay(
        ::TaskGroup&,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        ::brstd::move_only_function<void()>
#else // @header-generator platform
    MCAPI static void defaultStartWithDelay(
        ::TaskGroup&                        taskGroup,
        ::std::chrono::seconds              delay,
        ::brstd::move_only_function<void()> work
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace Bedrock::Threading
