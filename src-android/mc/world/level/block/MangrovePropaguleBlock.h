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
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class MangrovePropaguleBlock : public ::FoliageBlock {
public:
    // prevent constructor by default
    MangrovePropaguleBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MangrovePropaguleBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& getInitialDefaultState();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MangrovePropaguleBlock(std::string const&, int);

    MCNAPI bool _growTree(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_STAGE();
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
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
