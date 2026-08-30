#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class BlockTintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color resolve(::BlockSource&, ::BlockPos const&, ::Block const&, ::mce::Color const&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $resolve(::BlockSource&, ::BlockPos const&, ::Block const&, ::mce::Color const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
