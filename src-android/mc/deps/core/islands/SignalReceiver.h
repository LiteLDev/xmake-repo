#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/RawSubscription.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Detail { class SignalPublisher; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
// clang-format on

namespace Bedrock {

class SignalReceiver {
public:
    // SignalReceiver inner types declare
    // clang-format off
    struct ConnectionRecord;
    // clang-format on

    // SignalReceiver inner types define
    struct ConnectionRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::RawSubscription> mSubscription;
        ::ll::TypedStorage<4, 4, int>                                 mPriority;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionRecord& operator=(ConnectionRecord const&);
        ConnectionRecord(ConnectionRecord const&);
        ConnectionRecord();
    };

    using MutexType = std::mutex;

    using ConnectOp = std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)>;

    using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::DeferredSubscriptionHub>> mHub;
    ::ll::TypedStorage<8, 24, std::map<Bedrock::Detail::SignalPublisher*, Bedrock::SignalReceiver::ConnectionRecord>> mConnections;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalReceiver();

    MCNAPI bool _connectSignal(
        std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)> const&,
        ::Bedrock::Detail::SignalPublisher*,
        int
    );

    MCNAPI bool handleNextSignal();

    MCNAPI ~SignalReceiver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
