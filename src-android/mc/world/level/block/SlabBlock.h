#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Material;
class MobSpawnerData;
class SpawnConditions;
// clang-format on

class SlabBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mIsDouble;
    ::ll::TypedStorage<8, 40, ::HashedString> mOtherSlab;
    // NOLINTEND

public:
    // prevent constructor by default
    SlabBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SlabBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isSlabBlock() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SlabBlock(std::string const&, int, bool, ::Material const&, ::HashedString const&);

    MCNAPI ::Block const& getDoubleSlab() const;

    MCNAPI ::HashedString const& getOtherSlabId() const;

    MCNAPI ::Block const& getSingleSlab() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isDoubleSlab(::Block const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool, ::Material const&, ::HashedString const&);
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

    MCNAPI bool $isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isSlabBlock() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
