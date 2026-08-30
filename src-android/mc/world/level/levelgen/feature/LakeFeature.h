#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class LakeFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString const>                                          mFluidBlock;
    ::ll::TypedStorage<8, 40, ::HashedString>                                                mBarrierBlock;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>> const> mProhibitedBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    LakeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LakeFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LakeFeature(::HashedString const, ::HashedString, std::vector<std::reference_wrapper<const HashedString>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::HashedString const, ::HashedString, std::vector<std::reference_wrapper<const HashedString>> const&);
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
