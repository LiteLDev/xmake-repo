#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WeirdoDirection.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class Player;
class Vec3;
struct BlockAnimateTickData;
// clang-format on

class StairBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const&>               mBase;
    ::ll::TypedStorage<1, 1, bool const>                       mEnableCornerStairTag;
    ::ll::TypedStorage<8, 176, std::optional<BlockDescriptor>> mBlocksToCornerWith;
    ::ll::TypedStorage<1, 1, bool const>                       mLeakyCornersFix;
    // NOLINTEND

public:
    // prevent constructor by default
    StairBlock& operator=(StairBlock const&);
    StairBlock(StairBlock const&);
    StairBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StairBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;

    virtual bool mayPick() const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool attack(::Player*, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void animateTick(::BlockAnimateTickData const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StairBlock(std::string const&, int, ::BlockType const&, bool, bool);

    MCNAPI bool _neighboringBlockCheckForCreatingBarrierInDirection(
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&,
        int
    ) const;

    MCNAPI void setBaseShape(::Block const&, ::AABB&, bool) const;

    MCNAPI bool setInnerPieceShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&, bool) const;

    MCNAPI bool setStepShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar stairDirectionToFacing(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<int const[8]> DEAD_SPACES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::BlockType const&, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
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

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;

    MCNAPI bool $mayPick() const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
