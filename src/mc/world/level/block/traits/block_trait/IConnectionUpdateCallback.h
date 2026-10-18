#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class NeighborBlockDirections;
// clang-format on

#endif // @header-generator platform
namespace BlockTrait {

#if defined(LL_PLAT_A) // @header-generator platform
class IConnectionUpdateCallback {};
#else // @header-generator platform
class IConnectionUpdateCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IConnectionUpdateCallback() = default;

    virtual ::Block const& updateConnection(
        ::BlockSource const&      region,
        ::Block const&            block,
        ::BlockPos const&         pos,
        ::NeighborBlockDirections directionsToCheck
    ) const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace BlockTrait
