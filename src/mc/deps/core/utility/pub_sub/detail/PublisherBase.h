#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase : public ::Bedrock::PubSub::Detail::PublisherDisconnector {
public:
    // PublisherBase inner types define
    using ConnectionList = ::Bedrock::Intrusive::list<
#if defined(LL_PLAT_A) // @header-generator platform
        Bedrock::PubSub::Detail::SubscriptionBodyBase,
        Bedrock::Intrusive::list_base_hook<Bedrock::PubSub::Detail::SubscriptionBodyBase>,
        Bedrock::Intrusive::list_base_hook<Bedrock::PubSub::Detail::SubscriptionBodyBase>>;
#else // @header-generator platform
        ::Bedrock::PubSub::Detail::SubscriptionBodyBase,
        ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>,
        ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>    mSubscriptions;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Intrusive::list<
            ::Bedrock::PubSub::Detail::SubscriptionBodyBase,
            ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>,
            ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>
                                   mSubscriptions;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mSubscriberCount;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PublisherBase();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _insertConnection(
        std::shared_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase> const&,
        ::Bedrock::PubSub::ConnectPosition,
        std::optional<int>
#else // @header-generator platform
    MCAPI void _insertConnection(
        ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase> const& body,
        ::Bedrock::PubSub::ConnectPosition                                        at,
        ::std::optional<int>                                                      group
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI bool empty() const;

    MCNAPI ulong size() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
