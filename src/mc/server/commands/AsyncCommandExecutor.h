#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
#else // @header-generator platform
#endif // @header-generator platform
class TaskGroup;
// clang-format on

class AsyncCommandExecutor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AsyncCommandExecutor inner types declare
    // clang-format off
    struct OperationData;
    // clang-format on

    // AsyncCommandExecutor inner types define
    enum class State : int {
        Idle       = 0,
        InProgress = 1,
    };

    struct OperationData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 80> mResult;
#else // @header-generator platform
        ::ll::TypedStorage<8, 80, ::std::optional<::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>>>
            mResult;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Operation = std::function<Bedrock::Result<void, std::error_code>()>;
#else // @header-generator platform
    using ExternalOperationCallback = ::std::function<void(::std::shared_ptr<::AsyncCommandExecutor::OperationData>)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ResultOperationCallback = std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>&)>;
#else // @header-generator platform
    using Operation = ::std::function<::Bedrock::Result<void>()>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ExternalOperationCallback = std::function<void(std::shared_ptr<AsyncCommandExecutor::OperationData>)>;
#else // @header-generator platform
    using Result = ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>;

    using ResultOperationCallback =
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                   mStateLock;
    ::ll::TypedStorage<4, 4, ::AsyncCommandExecutor::State> mCurrentState;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>    mAsyncTaskGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>   mStateLock;
    ::ll::TypedStorage<4, 4, ::AsyncCommandExecutor::State>  mCurrentState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mAsyncTaskGroup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AsyncCommandExecutor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AsyncCommandExecutor() = default;
#else // @header-generator platform
    virtual ~AsyncCommandExecutor() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};
