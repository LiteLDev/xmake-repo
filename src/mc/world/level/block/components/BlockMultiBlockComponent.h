#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MultiBlockPart.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/components/IBlockComponent.h"
#include "mc/world/level/block/traits/block_trait/MultiBlockPlacementDirectionBehavior.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class CircuitSystem;
struct BlockPart;
namespace BlockEvents { class BlockBreakEvent; }
// clang-format on

class BlockMultiBlockComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                              mDirection;
    ::ll::TypedStorage<1, 1, uchar>                                              mPartCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                                                   mSnowLoggableParts;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::brstd::bitset<4, uchar>>                          mSnowLoggableParts;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlockPlacementDirectionBehavior> mPlacementBehavior;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockMultiBlockComponent(uchar, uchar, ::BlockTrait::MultiBlockPlacementDirectionBehavior);
#else // @header-generator platform
    MCAPI bool _forEachPart(::Block const& part, ::brstd::function_ref<bool(::BlockPart const&, uchar)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _forEachPart(::Block const&, ::brstd::function_ref<bool(const BlockPart&, uchar)>) const;
#else // @header-generator platform
    MCAPI uchar _getDirectionOverride(::Block const& part) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar _getDirectionOverride(::Block const&) const;
#else // @header-generator platform
    MCAPI bool canSurvive(::BlockSource const& region, ::Block const& block, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canSurvive(::BlockSource const&, ::Block const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool forEachPartInWorldSpace(
        ::Block const&                                  part,
        ::BlockPos const&                               partPos,
        ::brstd::function_ref<bool(::BlockPart const&)> callback
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    forEachPartInWorldSpace(::Block const&, ::BlockPos const&, ::brstd::function_ref<bool(const BlockPart&)>) const;
#else // @header-generator platform
    MCAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const& part) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar getDirection(::Block const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::BlockPos getDistanceToMultiBlockStart(::Block const& part) const;

    MCAPI ::AABB getOutlineShape(::Block const& part, ::BlockPos const& partWorldPos) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const&) const;
#else // @header-generator platform
    MCAPI bool isMultiBlockStart(::Block const& part) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getDistanceToMultiBlockStart(::Block const&) const;
#else // @header-generator platform
    MCAPI bool isSnowLoggable(::Block const& part) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB getOutlineShape(::Block const&, ::BlockPos const&) const;

    MCNAPI uchar getPartCount() const;

    MCNAPI bool isMultiBlockStart(::Block const&) const;

    MCNAPI bool isSnowLoggable(::Block const&) const;

    MCNAPI bool mayPlace(::BlockSource&, ::Block const&, ::BlockPos const&) const;

    MCNAPI void onEvent(::BlockEvents::BlockBreakEvent&) const;
#else // @header-generator platform
    MCAPI void onEvent(::BlockEvents::BlockBreakEvent& event) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const&);
#else // @header-generator platform
    MCAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const& part);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos getSnowLoggablePosition(::Block const&, ::BlockSource const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::BlockPos
    getSnowLoggablePosition(::Block const& part, ::BlockSource const& region, ::BlockPos const& snowLayerPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    onPlace(::BlockSource&, ::Block const&, ::Block const&, ::BlockPos const&, ::BlockChangeContext const&);
#else // @header-generator platform
    MCAPI static void onPlace(
        ::BlockSource&              region,
        ::Block const&              placementBlock,
        ::Block const&              oldBlock,
        ::BlockPos const&           pos,
        ::BlockChangeContext const& changeSourceContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setSnowLoggablePart(::Block&);
#else // @header-generator platform
    MCAPI static void setSnowLoggablePart(::Block& part);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setupRedstoneConsumerComponent(::Block const&, ::BlockPos const&, ::CircuitSystem&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar, uchar, ::BlockTrait::MultiBlockPlacementDirectionBehavior);
#else // @header-generator platform
    MCAPI static void
    setupRedstoneConsumerComponent(::Block const& block, ::BlockPos const& pos, ::CircuitSystem& circuitSystem);
#endif // @header-generator platform
    // NOLINTEND
};
