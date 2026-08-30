#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Level;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class PowderSnowBlock : public ::BlockType {
public:
    // prevent constructor by default
    PowderSnowBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PowderSnowBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isLavaBlocking() const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool causesFreezeEffect() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PowderSnowBlock(std::string const&, int, ::Material const&);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canWalkOnTop(::GetCollisionShapeInterface const&);

    MCNAPI static void clearFire(::BlockSource&, ::BlockPos const&, ::Block const&);

    MCNAPI static void spawnPowderSnowParticles(::Level&, ::BlockPos const&);
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

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $causesFreezeEffect() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
