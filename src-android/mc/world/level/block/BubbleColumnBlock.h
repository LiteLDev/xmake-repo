#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class Random;
struct BlockAnimateTickData;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BubbleColumnBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mFancyBubbles;
    // NOLINTEND

public:
    // prevent constructor by default
    BubbleColumnBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BubbleColumnBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    virtual std::optional<HashedString> getRequiredMedium() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;

    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual bool shouldTickOnSetBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BubbleColumnBlock(std::string const&, int);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _createParticles(::BlockSource&, ::BlockPos const&, ::Random&, bool);

    MCNAPI static bool _getFlowDownward(::Block const&);

    MCNAPI static bool addBubbleColumnSegment(::BlockSource&, ::BlockPos const&);

    MCNAPI static bool shouldDragDown(::Block const&);

    MCNAPI static void spawnBubbles(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI std::optional<HashedString> $getRequiredMedium() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;

    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $shouldTickOnSetBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
