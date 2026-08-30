#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/TorchFacing.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TorchBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType> mFlameParticle;
    // NOLINTEND

public:
    // prevent constructor by default
    TorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TorchBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TorchBlock(std::string const&, int);

    MCNAPI TorchBlock(std::string const&, int, ::ParticleType);

    MCNAPI ::Vec3 _flameParticlePos(::BlockPos const&, ::TorchFacing) const;

    MCNAPI bool canBePlacedOn(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void onPlaceTorchBlock(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::TorchFacing const[6]> DATA_FROM_FACING();

    MCNAPI static ::std::add_lvalue_reference_t<ushort const[6]> FACING_FROM_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);

    MCNAPI void* $ctor(std::string const&, int, ::ParticleType);
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

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
