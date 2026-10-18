#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/server_instance_messenger/MessageAction.h"

#endif // @header-generator platform
namespace ServerInstanceMessenger {

#if defined(LL_PLAT_A) // @header-generator platform
class IMessageProducer {};
#else // @header-generator platform
class IMessageProducer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessageProducer() = default;

    virtual void
    enqueueMessage(::brstd::move_only_function<void()> message, ::ServerInstanceMessenger::MessageAction action) = 0;

    virtual void enqueueAndAwaitExecution(
        ::brstd::move_only_function<void(::brstd::move_only_function<void() const>)> message,
        ::ServerInstanceMessenger::MessageAction                                     action
    ) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ServerInstanceMessenger
