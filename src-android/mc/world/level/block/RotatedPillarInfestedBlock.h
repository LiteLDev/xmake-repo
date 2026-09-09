#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
struct ResourceDropsContext;
// clang-format on

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    RotatedPillarInfestedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RotatedPillarInfestedBlock();

    virtual void spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RotatedPillarInfestedBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
