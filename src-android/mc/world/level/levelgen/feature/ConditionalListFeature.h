#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ConditionalListFeature : public ::IFeature {
public:
    // ConditionalListFeature inner types declare
    // clang-format off
    struct FeatureExpressionNodePair;
    // clang-format on

    // ConditionalListFeature inner types define
    enum class EarlyOutScheme : int {
        ConditionSuccess = 0,
        PlacementSuccess = 1,
    };

    struct FeatureExpressionNodePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 24>                 mFeatureRef;
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mExpressionNode;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureExpressionNodePair& operator=(FeatureExpressionNodePair const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ConditionalListFeature::FeatureExpressionNodePair>> mFeatureCollection;
    ::ll::TypedStorage<4, 4, ::ConditionalListFeature::EarlyOutScheme>                        mEarlyOutScheme;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConditionalListFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConditionalListFeature();
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
