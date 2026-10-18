#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/block_events/IBlockEventExecutor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on
#endif // @header-generator platform

namespace BlockEvents::Detail {

class BlockEventBlockTypeExecutor : public ::BlockEvents::IBlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mSubscriptions;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::PubSub::Subscription,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::PubSub::Subscription>>>
        mSubscriptions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockEventBlockTypeExecutor();
#else // @header-generator platform
    virtual ~BlockEventBlockTypeExecutor() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setOwnerSubscription(ulong, ::Bedrock::PubSub::Subscription&&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void
    setOwnerSubscription(uint64 typeId, ::Bedrock::PubSub::Subscription&& subscription, bool assertOnDuplicate);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents::Detail
