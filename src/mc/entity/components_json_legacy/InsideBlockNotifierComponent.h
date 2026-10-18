#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/InsideBlockEventMap.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
class InsideBlockEventMap;
#endif // @header-generator platform
// clang-format on

class InsideBlockNotifierComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isTrackedBlock(::Block const&) const;

    MCNAPI void resetBlocksInsideState();

    MCNAPI void setInsideBlock(::Block const&, bool);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockEventMap>> mBlockList;
#endif // @header-generator platform
    // NOLINTEND
};
