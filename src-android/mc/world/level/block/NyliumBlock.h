#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IRandom;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class NyliumBlock : public ::BlockType {
public:
    // NyliumBlock inner types declare
    // clang-format off
    struct WarpedNyliumBlockVegetationProbabilities;
    struct CrimsonNyliumBlockVegetationProbabilities;
    // clang-format on

    // NyliumBlock inner types define
    struct WarpedNyliumBlockVegetationProbabilities {};

    struct CrimsonNyliumBlockVegetationProbabilities {};

public:
    // prevent constructor by default
    NyliumBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NyliumBlock();

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NyliumBlock(std::string const&, int);

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canBeNylium(::BlockSource const&, ::BlockPos const&);

    MCNAPI static ::Block const& crimsonBlockProvider(::IRandom&);

    MCNAPI static ::Block const& netherSproutBlockProvider(::IRandom&);

    MCNAPI static ::Block const& warpedBlockProvider(::IRandom&);
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

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
