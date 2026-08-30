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
    virtual ~SpeleothemBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& getInitialDefaultState();

    virtual ::mce::Color getDustColor(::Block const&) const;

    virtual std::string getDustParticleName(::Block const&) const;

    virtual bool falling() const;

    virtual void onLand(::BlockSource&, ::BlockPos const&) const;

    virtual void startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;

    virtual bool canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    virtual bool _canGrow(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpeleothemBlock(std::string const&, int, int, ::HashedString const&);

    MCNAPI ::SpeleothemThickness _calculateSpeleothemThickness(::BlockSource&, ::BlockPos const&, uchar, bool) const;

    MCNAPI void _createMergedTips(::BlockSource&, ::Block const&, ::BlockPos const&) const;

    MCNAPI void _createSpeleothem(::BlockSource&, ::BlockPos const&, uchar, ::SpeleothemThickness) const;

    MCNAPI std::optional<BlockPos> _findRootBlock(::BlockSource&, ::BlockPos const&, int const) const;

    MCNAPI std::optional<BlockPos> _findTip(::BlockSource&, ::BlockPos const&, uchar, int, bool) const;

    MCNAPI void _grow(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void _growStalagmiteBelow(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool _isStalactiteBase(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void growStalactite(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void growStalagmite(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canTipGrow(::BlockSource&, ::BlockPos const&);

    MCNAPI static bool _isStalactite(::Block const&);

    MCNAPI static bool _isTip(::Block const&, bool);

    MCNAPI static bool isSpeleothemWithDirection(::Block const&, uchar);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, int, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI std::string $getDustParticleName(::Block const&) const;

    MCNAPI bool $falling() const;

    MCNAPI void $onLand(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;

    MCNAPI bool $canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI bool $_canGrow(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
