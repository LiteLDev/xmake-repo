#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/pub_sub/SubscriptionContext.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#endif // @header-generator platform
namespace Bedrock::PubSub { class SubscriptionContext; }
namespace Bedrock::PubSub::Detail { class PublisherDisconnector; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class SubscriptionBodyBase
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Bedrock::Intrusive::list_base_hook<Bedrock::PubSub::Detail::SubscriptionBodyBase> {
#else // @header-generator platform
: public ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase> {
#endif // @header-generator platform
public:
    // SubscriptionBodyBase inner types declare
    // clang-format off
    struct CompareEntries;
    // clang-format on

    // SubscriptionBodyBase inner types define
    struct CompareEntries {};

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using ListHookType = ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

    using SubscriptionType = ::Bedrock::PubSub::Subscription;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>> mStrongSelf;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Detail::PublisherDisconnector*>               mDisconnector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::SubscriptionContext>>           mContext;
    ::ll::TypedStorage<4, 4, int>                                                             mGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mStrongSelf;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Detail::PublisherDisconnector*>                   mDisconnector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PubSub::SubscriptionContext>>           mContext;
    ::ll::TypedStorage<4, 4, int>                                                                 mGroup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SubscriptionBodyBase();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SubscriptionBodyBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubscriptionBodyBase(std::unique_ptr<Bedrock::PubSub::SubscriptionContext>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<Bedrock::PubSub::SubscriptionContext>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~SubscriptionBodyBase() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
