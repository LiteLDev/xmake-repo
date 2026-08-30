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
class IConstBlockSource;
class Material;
class Random;
class Vec3;
struct BlockAnimateTickData;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class LiquidBlockBase : public ::BlockType {
public:
    // prevent constructor by default
    LiquidBlockBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LiquidBlockBase();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LiquidBlockBase(std::string const&, int, ::Material const&);

    MCNAPI void _solidify(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void emitFizzParticle(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int getTickDelay(::BlockSource&) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void solidify(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void trySpreadFire(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 _getFlow(::IConstBlockSource const&, ::BlockPos const&, ::Material const&);

    MCNAPI static int getDepth(::IConstBlockSource const&, ::BlockPos const&, ::Material const&);

    MCNAPI static float getHeightFromDepth(int);

    MCNAPI static float getSlopeAngle(::BlockSource&, ::BlockPos const&, ::Material const&);

    MCNAPI static void handleEntityInside(::IConstBlockSource const&, ::BlockPos const&, ::Vec3&, ::Material const&);

    MCNAPI static bool isPositionBelowLiquidSurface(::Block const&, ::BlockPos const&, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
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

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
