#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/server_instance_messenger/IMessageConsumer.h"
#include "mc/server/server_instance_messenger/IMessageProducer.h"
#include "mc/server/server_instance_messenger/IMessenger.h"

namespace ServerInstanceMessenger {

class Messenger : public ::ServerInstanceMessenger::IMessenger,
                  public ::ServerInstanceMessenger::IMessageConsumer,
                  public ::ServerInstanceMessenger::IMessageProducer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex> mMessagesMutex;
    ::ll::TypedStorage<1, 1, bool>        mAcceptingMessages;
    ::ll::UntypedStorage<8, 616>          mMessages;
    // NOLINTEND
};

} // namespace ServerInstanceMessenger
