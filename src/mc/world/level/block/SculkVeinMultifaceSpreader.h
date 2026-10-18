#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/MultifaceSpreader.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SculkVeinMultifaceSpreader : public ::MultifaceSpreader {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SculkVeinMultifaceSpreader();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SculkVeinMultifaceSpreader();
#else // @header-generator platform
    virtual bool _canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canSpreadFrom(::Block const&, uchar const) const;
#else // @header-generator platform
    virtual bool _canSpreadFrom(::Block const& block, uchar const facing) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    virtual bool _isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool _isOtherBlockValidAsSource(::Block const& block) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canSpreadFrom(::Block const&, uchar const) const;
#else // @header-generator platform
    MCAPI bool $_canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;
#else // @header-generator platform
    MCAPI bool $_canSpreadFrom(::Block const& block, uchar const facing) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isOtherBlockValidAsSource(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $_isOtherBlockValidAsSource(::Block const& block) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
