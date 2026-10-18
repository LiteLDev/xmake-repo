#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

namespace Bedrock::Threading {

class IAsyncInfo {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncInfo() = default;

    virtual ::Bedrock::Threading::AsyncStatus getStatus() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code getError() const = 0;
#else // @header-generator platform
    virtual ::std::error_code getError() const = 0;
#endif // @header-generator platform

    virtual void cancel() = 0;
    // NOLINTEND
};

} // namespace Bedrock::Threading
