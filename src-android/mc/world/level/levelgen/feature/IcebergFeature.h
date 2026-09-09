#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class IcebergFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mAirBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mWaterBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mSnowBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mPackedIceBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mBlueIceBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    IcebergFeature& operator=(IcebergFeature const&);
    IcebergFeature(IcebergFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IcebergFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IcebergFeature();

    MCNAPI void _generateIcebergBlock(
        ::BlockSource&,
        ::Random&,
        ::BlockPos const&,
        int,
        int,
        int,
        int,
        int,
        int,
        bool,
        bool,
        float,
        int,
        ::Block const&
    ) const;

    MCNAPI void carve(int, int, ::BlockPos const&, ::BlockSource&, bool, float, ::BlockPos const&, int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
