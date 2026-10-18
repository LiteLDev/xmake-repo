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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual int updateDecayDelay(int const) const;
#else // @header-generator platform
    virtual int updateDecayDelay(int const) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int updateFacingData(int const, ::Block const&) const;
#else // @header-generator platform
    virtual int updateFacingData(int const, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChangeBlockOnSpread() const;
#else // @header-generator platform
    virtual bool canChangeBlockOnSpread() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attemptSpreadVeins(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int, ::SculkSpreader&) const;
#else // @header-generator platform
    virtual bool attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int,
        ::SculkSpreader&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int attemptUseCharge(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&, ::BlockPos const&, int, int, ::Random&, ::SculkSpreader&, bool const) const;
#else // @header-generator platform
    virtual int attemptUseCharge(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&,
        ::BlockPos const& pos,
        int               charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const       spreadVeins
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void onDischarged(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _cleanUpVeinsWithSculkSubstrate(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void
    _cleanUpVeinsWithSculkSubstrate(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $updateDecayDelay(int const) const;
#else // @header-generator platform
    MCFOLD int $updateDecayDelay(int const) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $updateFacingData(int const, ::Block const&) const;
#else // @header-generator platform
    MCAPI int $updateFacingData(int const, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeBlockOnSpread() const;
#else // @header-generator platform
    MCFOLD bool $canChangeBlockOnSpread() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $attemptSpreadVeins(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int, ::SculkSpreader&) const;

    MCNAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
#else // @header-generator platform
    MCAPI bool $attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
#endif // @header-generator platform
        int,
#if defined(LL_PLAT_A) // @header-generator platform
        int,
        ::Random&,
        ::SculkSpreader&,
        bool const
#else // @header-generator platform
        ::SculkSpreader&
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&,
        ::BlockPos const& pos,
        int               charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const       spreadVeins
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $onDischarged(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos) const;


#endif // @header-generator platform
    // NOLINTEND
};
