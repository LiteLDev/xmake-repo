#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BlockType;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class StemBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const&> mFruit;
    // NOLINTEND

public:
    // prevent constructor by default
    StemBlock& operator=(StemBlock const&);
    StemBlock(StemBlock const&);
    StemBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StemBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool isStemBlock() const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StemBlock(std::string const&, int, ::BlockType const&);

    MCNAPI ::BlockType const& getFruitBlock() const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::BlockType const&);
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

    MCNAPI bool $isStemBlock() const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
