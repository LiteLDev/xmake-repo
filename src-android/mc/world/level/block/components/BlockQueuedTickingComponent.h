#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

struct BlockQueuedTickingComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMaxTicks;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnTimeDown;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedTickingComponent& operator=(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent(BlockQueuedTickingComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockQueuedTickingComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getRandomTickDelay(::Random&) const;
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
