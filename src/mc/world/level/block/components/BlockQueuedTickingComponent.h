#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockQueuedTickingComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMaxTicks;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnTimeDown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnTimeDown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockQueuedTickingComponent& operator=(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent(BlockQueuedTickingComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~BlockQueuedTickingComponent() = default;
#endif // @header-generator platform
    // NOLINTEND
};
