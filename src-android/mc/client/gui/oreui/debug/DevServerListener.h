#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/DevServer.h"
#include "mc/platform/Result.h"
#include "sys/socket.h"

namespace OreUI::Debug {

class DevServerListener {
public:
    // DevServerListener inner types declare
    // clang-format off
    struct Message;
    class BroadcastListener;
    // clang-format on

    // DevServerListener inner types define
    struct Message {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mIpAddress;
        ::ll::TypedStorage<8, 24, std::string> mPayload;
        // NOLINTEND
    };

    class BroadcastListener {
    public:
        // BroadcastListener inner types define
        using OnNewMessageCallback = std::function<void(OreUI::Debug::DevServerListener::Message)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>               mSocket;
        ::ll::TypedStorage<1, 1, std::atomic<bool>> mListening;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                      mOnDevServersChanged;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Debug::DevServer>>                  mDevServers;
    ::ll::TypedStorage<4, 40, std::mutex>                                            mMessageQueueMutex;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Debug::DevServerListener::Message>> mMessageQueue;
    ::ll::TypedStorage<8, 8, std::thread>                                            mListeningThread;
    ::ll::UntypedStorage<8, 16>                                                      mListener;
    // NOLINTEND

public:
    // prevent constructor by default
    DevServerListener();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleNewMessages();

    MCNAPI void _removeOldDevServers();

    MCNAPI void update();

    MCNAPI ~DevServerListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Debug
