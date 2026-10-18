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
#if defined(LL_PLAT_A) // @header-generator platform
struct BlockGraphicsModeChangeContext;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockGraphicsModeChangeContext;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BubbleColumnBlock();
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<HashedString> getRequiredMedium() const;
#else // @header-generator platform
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;
#else // @header-generator platform
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;
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
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
#else // @header-generator platform
    virtual bool shouldTickOnSetBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual ::std::optional<::HashedString> getRequiredMedium() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldTickOnSetBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BubbleColumnBlock(std::string const&, int);
#else // @header-generator platform
    MCAPI BubbleColumnBlock(::std::string const& nameId, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;
#else // @header-generator platform
    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
#else // @header-generator platform
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _createParticles(::BlockSource&, ::BlockPos const&, ::Random&, bool);
#else // @header-generator platform
    MCAPI static void _createParticles(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool down);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _getFlowDownward(::Block const&);
#else // @header-generator platform
    MCAPI static bool _getFlowDownward(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool addBubbleColumnSegment(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool addBubbleColumnSegment(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool shouldDragDown(::Block const&);
#else // @header-generator platform
    MCAPI static bool shouldDragDown(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void spawnBubbles(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void spawnBubbles(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getCollisionShape(
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCFOLD void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCFOLD bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD ::AABB $getCollisionShape(
#endif // @header-generator platform
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
        ::optional_ref<::GetCollisionShapeInterface const>
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
    ) const;
#else // @header-generator platform
    MCFOLD bool $shouldTickOnSetBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::HashedString> $getRequiredMedium() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<HashedString> $getRequiredMedium() const;
#else // @header-generator platform
    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;

    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $shouldTickOnSetBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
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
