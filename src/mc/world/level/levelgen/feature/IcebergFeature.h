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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IcebergFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI IcebergFeature();
#else // @header-generator platform
    MCAPI IcebergFeature();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void carve(
        int               radius,
        int               yOff,
        ::BlockPos const& globalOrigin,
        ::BlockSource&    region,
        bool              underWater,
        float             angle,
        ::BlockPos const& localOrigin,
        int               ellipseA,
        int               ellipseC
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void carve(int, int, ::BlockPos const&, ::BlockSource&, bool, float, ::BlockPos const&, int, int) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
