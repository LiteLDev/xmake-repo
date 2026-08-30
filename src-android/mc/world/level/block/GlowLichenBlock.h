#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/MultifaceBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Material;
// clang-format on

class GlowLichenBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    GlowLichenBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlowLichenBlock();

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& getInitialDefaultState();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GlowLichenBlock(std::string const&, int, ::Material const&);
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
    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
