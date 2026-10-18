#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class IStructureConstraint {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IStructureConstraint() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual bool isSatisfied(
        ::IBlockWorldGenAPI const& target,
        ::BlockPos const&          structurePos,
        ::Rotation const&          structureRot,
        ::BlockPos const&          centeringOffset
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
