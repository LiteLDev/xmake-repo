#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/MovementType.h"
#include "mc/world/level/block/components/StickyType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
struct BlockMovableDescription;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockMovableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MovementType> mMovementType;
    ::ll::TypedStorage<1, 1, ::StickyType>   mStickyType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MovementType getMovementType(::Block const&);

    MCNAPI static ::StickyType getStickyType(::Block const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
