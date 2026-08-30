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
    ::ll::UntypedStorage<1, 1>                                                   mSnowLoggableParts;
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlockPlacementDirectionBehavior> mPlacementBehavior;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockMultiBlockComponent(uchar, uchar, ::BlockTrait::MultiBlockPlacementDirectionBehavior);

    MCNAPI bool _forEachPart(::Block const&, ::brstd::function_ref<bool(const BlockPart&, uchar)>) const;

    MCNAPI uchar _getDirectionOverride(::Block const&) const;

    MCNAPI bool canSurvive(::BlockSource const&, ::Block const&, ::BlockPos const&) const;

    MCNAPI bool
    forEachPartInWorldSpace(::Block const&, ::BlockPos const&, ::brstd::function_ref<bool(const BlockPart&)>) const;

    MCNAPI uchar getDirection(::Block const&) const;

    MCNAPI ::BlockPos getDistanceToMultiBlockEnd(::Block const&) const;

    MCNAPI ::BlockPos getDistanceToMultiBlockStart(::Block const&) const;

    MCNAPI ::AABB getOutlineShape(::Block const&, ::BlockPos const&) const;

    MCNAPI uchar getPartCount() const;

    MCNAPI bool isMultiBlockStart(::Block const&) const;

    MCNAPI bool isSnowLoggable(::Block const&) const;

    MCNAPI bool mayPlace(::BlockSource&, ::Block const&, ::BlockPos const&) const;

    MCNAPI void onEvent(::BlockEvents::BlockBreakEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::v1_26_20::MultiBlockPart getMultiBlockPartId(::Block const&);

    MCNAPI static ::BlockPos getSnowLoggablePosition(::Block const&, ::BlockSource const&, ::BlockPos const&);

    MCNAPI static void
    onPlace(::BlockSource&, ::Block const&, ::Block const&, ::BlockPos const&, ::BlockChangeContext const&);

    MCNAPI static void setSnowLoggablePart(::Block&);

    MCNAPI static void setupRedstoneConsumerComponent(::Block const&, ::BlockPos const&, ::CircuitSystem&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar, uchar, ::BlockTrait::MultiBlockPlacementDirectionBehavior);
    // NOLINTEND
};
