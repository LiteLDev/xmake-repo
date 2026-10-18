#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/components/SupportShape.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SupportShape> mShape;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockSupportComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _stairSupportCheck(::Block const&, uchar);
#else // @header-generator platform
    MCAPI static bool _stairSupportCheck(::Block const& block, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canProvideFullSupport(::Block const&, uchar, bool);

    MCNAPI static bool canProvideSupport(::Block const&, uchar, ::BlockSupportType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD static bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType supportType);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
