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
    // prevent constructor by default
    SculkVeinMultifaceSpreader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkVeinMultifaceSpreader();

    virtual bool _canSpreadFrom(::Block const&, uchar const) const;

    virtual bool _canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    virtual bool _isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_canSpreadFrom(::Block const&, uchar const) const;

    MCNAPI bool $_canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    MCNAPI bool $_isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
