#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
// clang-format on

class BlockComponentEventSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockEvents::BlockEventManager&> mBlockEventManager;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentEventSubscriber& operator=(BlockComponentEventSubscriber const&);
    BlockComponentEventSubscriber(BlockComponentEventSubscriber const&);
    BlockComponentEventSubscriber();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockComponentEventSubscriber(::BlockEvents::BlockEventManager&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockEvents::BlockEventManager&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
