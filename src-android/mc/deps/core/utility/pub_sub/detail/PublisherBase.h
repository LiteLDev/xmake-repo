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
        Bedrock::PubSub::Detail::SubscriptionBodyBase,
        Bedrock::Intrusive::list_base_hook<Bedrock::PubSub::Detail::SubscriptionBodyBase>,
        Bedrock::Intrusive::list_base_hook<Bedrock::PubSub::Detail::SubscriptionBodyBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>    mSubscriptions;
    ::ll::TypedStorage<4, 4, uint> mSubscriberCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PublisherBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _insertConnection(
        std::shared_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase> const&,
        ::Bedrock::PubSub::ConnectPosition,
        std::optional<int>
    );

    MCNAPI bool empty() const;

    MCNAPI ulong size() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
