#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
class SculkSpreader;
// clang-format on

class SculkVeinBlockBehavior : public ::SculkBehavior {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual int updateDecayDelay(int const) const;

    virtual int updateFacingData(int const, ::Block const&) const;

    virtual bool canChangeBlockOnSpread() const;

    virtual bool attemptSpreadVeins(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int, ::SculkSpreader&) const;

    virtual int attemptUseCharge(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&, ::BlockPos const&, int, int, ::Random&, ::SculkSpreader&, bool const) const;

    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _cleanUpVeinsWithSculkSubstrate(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $updateDecayDelay(int const) const;

    MCNAPI int $updateFacingData(int const, ::Block const&) const;

    MCNAPI bool $canChangeBlockOnSpread() const;

    MCNAPI bool
    $attemptSpreadVeins(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int, ::SculkSpreader&) const;

    MCNAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int,
        int,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const;

    MCNAPI void $onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
