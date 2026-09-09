#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class WeightedRandomFeature : public ::IFeature {
public:
    // WeightedRandomFeature inner types declare
    // clang-format off
    struct WeightedFeatureReference;
    // clang-format on

    // WeightedRandomFeature inner types define
    struct WeightedFeatureReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 24> mFeature;
        ::ll::UntypedStorage<4, 8>  mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedFeatureReference& operator=(WeightedFeatureReference const&);
        WeightedFeatureReference();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<WeightedRandomFeature::WeightedFeatureReference>> mFeatureReferences;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeightedRandomFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeightedRandomFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
