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
#if defined(LL_PLAT_A) // @header-generator platform
                                                                                mBlocks;
        ::ll::TypedStorage<8, 48, std::array<std::optional<ExpressionNode>, 2>> mHeightRangeExpressions;
#else // @header-generator platform
                                                                                      mBlocks;
        ::ll::TypedStorage<8, 48, ::std::array<::std::optional<::ExpressionNode>, 2>> mHeightRangeExpressions;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ResolvedSurfaceMaterialAdjustments& operator=(ResolvedSurfaceMaterialAdjustments const&);
        ResolvedSurfaceMaterialAdjustments(ResolvedSurfaceMaterialAdjustments const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SurfaceMaterialAdjustmentsBiomeComponentGlue::ResolvedSurfaceMaterialAdjustments>> mAdjustments;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SurfaceMaterialAdjustmentsBiomeComponentGlue::ResolvedSurfaceMaterialAdjustments>>
        mAdjustments;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SurfaceMaterialAdjustmentsBiomeComponentGlue();
#else // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);
#else // @header-generator platform
    MCAPI bool $resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
