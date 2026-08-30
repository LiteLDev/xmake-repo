#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SpeleothemFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mPointedBlock;
    ::ll::TypedStorage<8, 8, std::vector<std::reference_wrapper<const HashedString>> const&> mReplaceableBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemFeature& operator=(SpeleothemFeature const&);
    SpeleothemFeature(SpeleothemFeature const&);
    SpeleothemFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpeleothemFeature();

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
