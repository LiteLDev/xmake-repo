#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class Random;
// clang-format on

class BlockBlobFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>                                                 mBlock;
    ::ll::TypedStorage<4, 4, int>                                                            mStartRadius;
    ::ll::TypedStorage<8, 8, std::vector<std::reference_wrapper<const HashedString>> const&> mPlaceableOnBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBlobFeature& operator=(BlockBlobFeature const&);
    BlockBlobFeature(BlockBlobFeature const&);
    BlockBlobFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockBlobFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockBlobFeature(::Block const&, int, std::vector<std::reference_wrapper<const HashedString>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const&, int, std::vector<std::reference_wrapper<const HashedString>> const&);
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
