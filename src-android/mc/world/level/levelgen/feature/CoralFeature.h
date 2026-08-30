#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
class Random;
// clang-format on

class CoralFeature : public ::Feature {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CoralFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _buildPlantArm(
        ::BlockSource&,
        ::Random&,
        ::BlockPos const&,
        ::gsl::not_null<const Block*>,
        std::vector<BlockPos>&,
        std::vector<std::pair<BlockPos, uchar>>&,
        uchar,
        bool
    ) const;

    MCNAPI int _getColor(::Block const&) const;

    MCNAPI bool _setBlock(::BlockSource&, ::BlockPos const&, ::gsl::not_null<const Block*>, int) const;

    MCNAPI bool _setBlockOnSolid(::BlockSource&, ::BlockPos const&, ::gsl::not_null<const Block*>, int) const;

    MCNAPI void
    _starFormation(::BlockSource&, ::Random&, ::BlockPos const&, ::gsl::not_null<const Block*>, float, int, bool) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
