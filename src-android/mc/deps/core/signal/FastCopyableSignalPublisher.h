#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/SignalPublisher.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/DeferredPublisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock::Detail {

class FastCopyableSignalPublisher : public ::Bedrock::Detail::SignalPublisher {
public:
    // FastCopyableSignalPublisher inner types define
    using PublisherType = ::Bedrock::PubSub::DeferredPublisher<
        void(const std::aligned_storage<32, 16>::type&),
        (Bedrock::PubSub::DeferralType)0,
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        false,
        false>;

    using StorageType = std::aligned_storage<32, 16>::type;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>     mPublisher;
    ::ll::TypedStorage<8, 8, ulong> mPayloadSize;
    // NOLINTEND

public:
    // prevent constructor by default
    FastCopyableSignalPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FastCopyableSignalPublisher();

    virtual void send(void const*);

    virtual std::function<Bedrock::PubSub::RawSubscription (Bedrock::PubSub::DeferredSubscriptionHub&, int)> getConnectOp(std::function<void (const void*)>&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $send(void const*);

    MCNAPI std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)>
           $getConnectOp(std::function<void(const void*)>&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Detail
