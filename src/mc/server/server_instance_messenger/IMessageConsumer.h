#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInstanceMessenger {

#if defined(LL_PLAT_A) // @header-generator platform
class IMessageConsumer {};
#else // @header-generator platform
class IMessageConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessageConsumer() = default;

    virtual void processMessages() = 0;

    virtual void stopAndDiscardMessages() = 0;

    virtual uint64 getPendingMessageCount() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ServerInstanceMessenger
