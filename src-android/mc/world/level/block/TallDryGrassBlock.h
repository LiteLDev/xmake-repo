#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/ShortDryGrassBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class TallDryGrassBlock : public ::ShortDryGrassBlock {
public:
    // prevent constructor by default
    TallDryGrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TallDryGrassBlock();

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TallDryGrassBlock(std::string const&, int);
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
    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
