#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
class TaskStatus {
public:
    // TaskStatus inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Value : uint {
#else // @header-generator platform
    enum class Value : int {
#endif // @header-generator platform
        WaitingForPredecessor = 0,
        Pending               = 1,
        Running               = 2,
        CancelPending         = 3,
        Canceled              = 4,
        Error                 = 5,
        Done                  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TaskStatus::Value> mValue;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isComplete() const;

    MCNAPI explicit operator TaskStatus::Value() const;

    MCNAPI ::Bedrock::Threading::AsyncStatus toAsyncStatus() const;

    MCNAPI std::error_code toErrorCode() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
