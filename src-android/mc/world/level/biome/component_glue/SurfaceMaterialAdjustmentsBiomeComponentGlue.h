#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
// clang-format on

struct SurfaceMaterialAdjustmentsBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types declare
    // clang-format off
    struct SurfaceMaterialAdjustmentBlocks;
    struct ResolvedSurfaceMaterialAdjustments;
    // clang-format on

    // SurfaceMaterialAdjustmentsBiomeComponentGlue inner types define
    struct SurfaceMaterialAdjustmentBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mTopMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mMidMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mSeaFloorMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mFoundationMaterialBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mSeaMaterialBlock;
        // NOLINTEND
    };

    struct ResolvedSurfaceMaterialAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SurfaceMaterialAdjustmentsBiomeComponentGlue::SurfaceMaterialAdjustmentBlocks>
                                                                                mBlocks;
        ::ll::TypedStorage<8, 48, std::array<std::optional<ExpressionNode>, 2>> mHeightRangeExpressions;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedSurfaceMaterialAdjustments& operator=(ResolvedSurfaceMaterialAdjustments const&);
        ResolvedSurfaceMaterialAdjustments(ResolvedSurfaceMaterialAdjustments const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SurfaceMaterialAdjustmentsBiomeComponentGlue::ResolvedSurfaceMaterialAdjustments>> mAdjustments;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue();

    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    MCNAPI void $applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
