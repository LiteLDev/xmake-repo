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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 24>                 mFeatureRef;
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mExpressionNode;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureRef;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>      mExpressionNode;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FeatureExpressionNodePair& operator=(FeatureExpressionNodePair const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ConditionalListFeature::FeatureExpressionNodePair>> mFeatureCollection;
    ::ll::TypedStorage<4, 4, ::ConditionalListFeature::EarlyOutScheme>                        mEarlyOutScheme;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalListFeature::FeatureExpressionNodePair>> mFeatureCollection;
    ::ll::TypedStorage<4, 4, ::ConditionalListFeature::EarlyOutScheme>                            mEarlyOutScheme;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ConditionalListFeature();
#else // @header-generator platform
    virtual ~ConditionalListFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
