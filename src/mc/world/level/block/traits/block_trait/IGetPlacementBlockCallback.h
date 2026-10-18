#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/PlacementCallbackOrder.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Vec3;
// clang-format on

#endif // @header-generator platform
namespace BlockTrait {

#if defined(LL_PLAT_A) // @header-generator platform
class IGetPlacementBlockCallback {};
#else // @header-generator platform
class IGetPlacementBlockCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGetPlacementBlockCallback() = default;

    virtual ::gsl::not_null<::Block const*> getPlacementBlock(
        ::gsl::not_null<::Block const*>,
        ::Actor const&,
        ::BlockPos const&,
        uchar,
        ::Vec3 const&
    ) const = 0;

    virtual ::BlockTrait::PlacementCallbackOrder getCallbackOrder() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace BlockTrait
