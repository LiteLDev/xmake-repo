#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/util/value_providers/ClampedNormalFloat.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SpeleothemClusterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mPointedBlock;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const>                                  mHeightRange;
    ::ll::TypedStorage<8, 8, std::vector<std::reference_wrapper<const HashedString>> const&> mReplaceableBlocks;
    ::ll::TypedStorage<4, 16, ::ValueProviders::ClampedNormalFloat const>                    mWetness;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemClusterFeature& operator=(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpeleothemClusterFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
