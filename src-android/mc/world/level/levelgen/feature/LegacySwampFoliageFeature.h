#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class FeatureRegistry;
class IFeature;
class Random;
// clang-format on

class LegacySwampFoliageFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetTreeFeature;
    ::ll::UntypedStorage<1, 24> mSeagrassFeature;
    ::ll::UntypedStorage<1, 24> mTallGrassFeature;
    ::ll::UntypedStorage<1, 24> mHugeMushroomFeature;
    ::ll::UntypedStorage<1, 24> mSwampTreeFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacySwampFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacySwampFoliageFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacySwampFoliageFeature(::FeatureRegistry&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureRegistry&);
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
