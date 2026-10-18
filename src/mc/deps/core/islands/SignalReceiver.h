#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/RawSubscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Detail { class SignalPublisher; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::RawSubscription> mSubscription;
        ::ll::TypedStorage<4, 4, int>                                 mPriority;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk40edcb;
        ::ll::UntypedStorage<4, 4>  mUnk5bd792;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionRecord& operator=(ConnectionRecord const&);
        ConnectionRecord(ConnectionRecord const&);
        ConnectionRecord();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using MutexType = std::mutex;

    using ConnectOp = std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)>;

    using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::DeferredSubscriptionHub>> mHub;
    ::ll::TypedStorage<8, 24, std::map<Bedrock::Detail::SignalPublisher*, Bedrock::SignalReceiver::ConnectionRecord>> mConnections;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk36537f;
    ::ll::UntypedStorage<8, 8>  mUnk3a0287;
    ::ll::UntypedStorage<8, 16> mUnk350063;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SignalReceiver& operator=(SignalReceiver const&);
    SignalReceiver(SignalReceiver const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalReceiver();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _connectSignal(
        std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)> const&,
        ::Bedrock::Detail::SignalPublisher*,
        int
    );

    MCNAPI bool handleNextSignal();

    MCNAPI ~SignalReceiver();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _connectSignal(
        ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)> const&
                                            connectOp,
        ::Bedrock::Detail::SignalPublisher* signalID,
        int                                 priority
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock
