#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
// clang-format on

class IContentThrottleBridgeContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentThrottleBridgeContext() = default;

    virtual ::Bedrock::Threading::Async<bool> beginLargeFileTransaction(ulong, std::vector<std::string>&&) = 0;

    virtual void endLargeFileTransaction() = 0;

    virtual ::IContentAcquisition& getContentAcquisition() = 0;

    virtual bool shouldSaveAsZip() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IContentThrottleBridgeContext {};
#endif // @header-generator platform
