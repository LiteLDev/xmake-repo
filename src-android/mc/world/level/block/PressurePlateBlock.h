#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Experiments;
class Material;
// clang-format on

class PressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // PressurePlateBlock inner types define
    enum class Sensitivity : int {
        EVERYTHING = 0,
        MOBS       = 1,
        PLAYERS    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PressurePlateBlock::Sensitivity> mSensitivity;
    // NOLINTEND

public:
    // prevent constructor by default
    PressurePlateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PressurePlateBlock();

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const;

    virtual int getSignalForData(int) const;

    virtual int getRedstoneSignal(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PressurePlateBlock(std::string const&, int, ::Material const&, ::PressurePlateBlock::Sensitivity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&, ::PressurePlateBlock::Sensitivity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

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
