#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/block_events/IBlockEventExecutor.h"

namespace BlockEvents::Detail {

class BlockEventBlockTypeExecutor : public ::BlockEvents::IBlockEventExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventBlockTypeExecutor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setOwnerSubscription(ulong, ::Bedrock::PubSub::Subscription&&, bool);
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

} // namespace BlockEvents::Detail
