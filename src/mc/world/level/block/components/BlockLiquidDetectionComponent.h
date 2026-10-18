#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule> mWaterDetectionRule;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canBeDestroyedByLiquidSpread(::Block const&);

    MCNAPI static bool canContainLiquid(::Block const&);

    MCNAPI static bool isLiquidBlocking(::Block const&);

    MCNAPI static bool liquidCanFlowIntoFromDirection(
        ::Block const&,
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    );

    MCNAPI static bool liquidClipsAgainstCollider(::Block const&);

    MCNAPI static bool liquidSpreadCausesSpawn(::Block const&);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::set<SharedTypes::v1_26_0::LiquidType> const& supportedLiquids();
#else // @header-generator platform
    MCAPI static ::std::set<::SharedTypes::v1_26_0::LiquidType> const& supportedLiquids();
#endif // @header-generator platform
    // NOLINTEND
};
