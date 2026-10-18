#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"
#include "mc/world/level/block/SpeleothemThickness.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class SpeleothemBlock : public ::FallingBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockToGrowOn;
    ::ll::TypedStorage<4, 4, int>                   mMaxLength;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemBlock& operator=(SpeleothemBlock const&);
    SpeleothemBlock(SpeleothemBlock const&);
    SpeleothemBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpeleothemBlock();
#else // @header-generator platform
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;
#else // @header-generator platform
    virtual int getVariant(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getVariant(::Block const&) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getInitialDefaultState();
#else // @header-generator platform
    virtual ::Block const& getInitialDefaultState() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getDustColor(::Block const&) const;
#else // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getDustParticleName(::Block const&) const;
#else // @header-generator platform
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool falling() const;
#else // @header-generator platform
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLand(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool falling() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
#else // @header-generator platform
    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    virtual bool _canGrow(::Block const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool _canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpeleothemBlock(std::string const&, int, int, ::HashedString const&);
#else // @header-generator platform
    MCAPI SpeleothemBlock(::std::string const& nameId, int id, int maxLength, ::HashedString const& blockToGrowOn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpeleothemThickness _calculateSpeleothemThickness(::BlockSource&, ::BlockPos const&, uchar, bool) const;
#else // @header-generator platform
    MCAPI ::SpeleothemThickness _calculateSpeleothemThickness(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        uchar             tipDirection,
        bool              mergeOpposingTips
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createMergedTips(::BlockSource&, ::Block const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createSpeleothem(::BlockSource&, ::BlockPos const&, uchar, ::SpeleothemThickness) const;
#else // @header-generator platform
    MCAPI void _createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> _findRootBlock(::BlockSource&, ::BlockPos const&, int const) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos>
    _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> _findTip(::BlockSource&, ::BlockPos const&, uchar, int, bool) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos>
    _findTip(::BlockSource& region, ::BlockPos const& pos, uchar searchDirection, int maxSearchLength, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _grow(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _growStalagmiteBelow(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void _growStalagmiteBelow(::BlockSource& region, ::BlockPos const& growIntoPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isStalactiteBase(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void growStalactite(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void growStalactite(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void growStalagmite(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void growStalagmite(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent const&) const;
#else // @header-generator platform
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _canTipGrow(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isStalactite(::Block const&);
#else // @header-generator platform
    MCAPI static bool _isTip(::Block const& block, bool includeMergedTip);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isTip(::Block const&, bool);

    MCNAPI static bool isSpeleothemWithDirection(::Block const&, uchar);
#else // @header-generator platform
    MCAPI static bool isSpeleothemWithDirection(::Block const& block, uchar tipDirection);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, int, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id, int maxLength, ::HashedString const& blockToGrowOn);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    MCFOLD ::mce::Color $getDustColor(::Block const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;
#else // @header-generator platform
    MCFOLD ::std::string $getDustParticleName(::Block const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
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
    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getInitialDefaultState();
#else // @header-generator platform
    MCAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getDustColor(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getInitialDefaultState();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getDustParticleName(::Block const&) const;
#else // @header-generator platform
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $falling() const;
#else // @header-generator platform
    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLand(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
#else // @header-generator platform
    MCFOLD bool $falling() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    MCAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canGrow(::Block const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
