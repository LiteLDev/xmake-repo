#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/DevServer.h"
#include "mc/platform/Result.h"
#include "sys/socket.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct DevServer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI::Debug {

class DevServerListener {
public:
    // DevServerListener inner types declare
    // clang-format off
    struct Message;
    class BroadcastListener;
    // clang-format on

    // DevServerListener inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Message {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mIpAddress;
        ::ll::TypedStorage<8, 24, std::string> mPayload;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Message {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mIpAddress;
        ::ll::TypedStorage<8, 32, ::std::string> mPayload;
        // NOLINTEND
    };
#else // @header-generator platform
    struct Message {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class BroadcastListener {
    public:
        // BroadcastListener inner types define
        using OnNewMessageCallback = ::std::function<void(::OreUI::Debug::DevServerListener::Message)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                 mSocket;
        ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mListening;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::gsl::span<::OreUI::Debug::DevServer const>)>> mOnDevServersChanged;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Debug::DevServer>>                            mDevServers;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mMessageQueueMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Debug::DevServerListener::Message>>           mMessageQueue;
    ::ll::TypedStorage<8, 16, ::std::thread>                                                       mListeningThread;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Debug::DevServerListener::BroadcastListener>> mListener;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleNewMessages();

    MCAPI void _removeOldDevServers();

    MCAPI void update();

    MCAPI ~DevServerListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    class BroadcastListener {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Debug
