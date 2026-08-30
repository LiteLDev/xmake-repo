#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class BambooSaplingBlock : public ::FoliageBlock {
public:
    // prevent constructor by default
    BambooSaplingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BambooSaplingBlock();

    virtual bool isValidAuxValue(int) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BambooSaplingBlock(std::string const&, int);

    MCNAPI bool _grow(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
