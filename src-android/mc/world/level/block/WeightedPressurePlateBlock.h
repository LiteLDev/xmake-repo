#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Material;
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mMaxWeight;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedPressurePlateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeightedPressurePlateBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual int getTickDelay() const;

    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const;

    virtual int getSignalForData(int) const;

    virtual int getRedstoneSignal(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeightedPressurePlateBlock(std::string const&, int, ::Material const&, int const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_WEIGHT_HEAVY();

    MCNAPI static int const& MAX_WEIGHT_LIGHT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&, int const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI int $getTickDelay() const;

    MCNAPI int $getSignalStrength(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getSignalForData(int) const;

    MCNAPI int $getRedstoneSignal(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
