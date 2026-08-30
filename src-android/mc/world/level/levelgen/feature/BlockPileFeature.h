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

class BlockPileFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPileFeature& operator=(BlockPileFeature const&);
    BlockPileFeature(BlockPileFeature const&);
    BlockPileFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPileFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;

    virtual ::Block const& getBlockToPlace(::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPileFeature(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const&);
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

    MCNAPI ::Block const& $getBlockToPlace(::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
