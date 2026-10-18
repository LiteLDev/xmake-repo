#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/SignalPublisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/DeferredPublisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock::Detail {

class GeneralSignalPublisher : public ::Bedrock::Detail::SignalPublisher {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // GeneralSignalPublisher inner types define
    using PublisherType = ::Bedrock::PubSub::DeferredPublisher<
        void(std::shared_ptr<void>),
        (Bedrock::PubSub::DeferralType)0,
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        false,
        false>;

    using PayloadType = std::shared_ptr<void>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88> mPublisher;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnk20b89b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GeneralSignalPublisher& operator=(GeneralSignalPublisher const&);
    GeneralSignalPublisher(GeneralSignalPublisher const&);
    GeneralSignalPublisher();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~GeneralSignalPublisher();
#else // @header-generator platform
    virtual void send(void const* data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(void const*);

    virtual std::function<Bedrock::PubSub::RawSubscription (Bedrock::PubSub::DeferredSubscriptionHub&, int)> getConnectOp(std::function<void (const void*)>&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    getConnectOp(::std::function<void(void const*)>&& handler) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(void const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $send(void const* data);

    MCNAPI ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    $getConnectOp(::std::function<void(void const*)>&& handler);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::function<Bedrock::PubSub::RawSubscription(Bedrock::PubSub::DeferredSubscriptionHub&, int)>
           $getConnectOp(std::function<void(const void*)>&&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Detail
