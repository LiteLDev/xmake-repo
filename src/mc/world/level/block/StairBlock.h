#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/BlockType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/WeirdoDirection.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockType const&>               mBase;
    ::ll::TypedStorage<1, 1, bool const>                       mEnableCornerStairTag;
    ::ll::TypedStorage<8, 176, std::optional<BlockDescriptor>> mBlocksToCornerWith;
    ::ll::TypedStorage<1, 1, bool const>                       mLeakyCornersFix;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockType const&>                   mBase;
    ::ll::TypedStorage<1, 1, bool const>                           mEnableCornerStairTag;
    ::ll::TypedStorage<8, 184, ::std::optional<::BlockDescriptor>> mBlocksToCornerWith;
    ::ll::TypedStorage<1, 1, bool const>                           mLeakyCornersFix;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StairBlock& operator=(StairBlock const&);
    StairBlock(StairBlock const&);
    StairBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StairBlock();
#else // @header-generator platform
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual ::AABB const&
    getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;
#else // @header-generator platform
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;
#else // @header-generator platform
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPick() const;
#else // @header-generator platform
    virtual void
    destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    virtual bool mayPick() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getVariant(::Block const&) const;
#else // @header-generator platform
    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTick(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual int getVariant(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StairBlock(std::string const&, int, ::BlockType const&, bool, bool);
#else // @header-generator platform
    MCAPI StairBlock(
        ::std::string const& nameId,
        int                  id,
        ::BlockType const&   base,
        bool                 enableCornerStairTag,
        bool                 leakyCornersFix
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _neighboringBlockCheckForCreatingBarrierInDirection(
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&,
        int
#else // @header-generator platform
    MCAPI bool _neighboringBlockCheckForCreatingBarrierInDirection(
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos,
        int                                                       directionToCheck
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBaseShape(::Block const&, ::AABB&, bool) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setBaseShape(::Block const& block, ::AABB& shape, bool shrink) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setInnerPieceShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&, bool) const;
#else // @header-generator platform
    MCAPI bool setInnerPieceShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    shape,
        bool                       shrink
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setStepShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar stairDirectionToFacing(int);
#else // @header-generator platform
    MCAPI bool setStepShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    shape,
        bool                       shrink
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<int const[8]> DEAD_SPACES();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<int const[8][2]> DEAD_SPACES();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, ::BlockType const&, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& nameId,
        int                  id,
        ::BlockType const&   base,
        bool                 enableCornerStairTag,
        bool                 leakyCornersFix
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCFOLD ::AABB const&
    $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
#else // @header-generator platform
    MCFOLD bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;
#else // @header-generator platform
    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPick() const;
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;
#else // @header-generator platform
    MCAPI void
    $destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    MCAPI bool $mayPick() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    MCAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    MCFOLD int $getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
