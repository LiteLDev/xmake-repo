#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/states/BlockState.h"
#endif // @header-generator platform

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class BlockStateVariant {};
#else // @header-generator platform
class BlockStateVariant : public ::BlockState {
public:
    using Type = T0;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockStateVariant() /*override*/ = default;

    // vIndex: 1
    virtual void toNBT(::CompoundTag&, int) const /*override*/;

    // vIndex: 2
    virtual bool fromNBT(::CompoundTag const&, int&) const /*override*/;
    // NOLINTEND};
};
#endif // @header-generator platform no-eol
