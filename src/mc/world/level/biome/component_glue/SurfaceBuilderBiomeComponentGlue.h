#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/NoiseBlockSpecifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class SurfaceBuilderData;
#else // @header-generator platform
struct NoiseBlockSpecifier;
#endif // @header-generator platform
// clang-format on

struct SurfaceBuilderBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // SurfaceBuilderBiomeComponentGlue inner types define
    enum class BuilderType : uchar {
        Surface    = 0,
        Subsurface = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                             mSeaFloorDepth;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mSeaFloorMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mFoundationMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mMidMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mTopMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mSeaMaterialBlock;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mFloorMaterialBlocks;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mCeilingMaterialBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mFloorMaterialBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mCeilingMaterialBlocks;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mBeachMaterialBlock;
    ::ll::TypedStorage<4, 4, int>                                             mMaxPuddleDepthBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mClayMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mHardClayMaterialBlock;
    ::ll::TypedStorage<1, 1, bool>                                            mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                                            mHasForest;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<NoiseBlockSpecifier>>               mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                  mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::NoiseBlockSpecifier>>           mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SurfaceBuilderBiomeComponentGlue::BuilderType> mBuilderType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SurfaceBuilderBiomeComponentGlue();
#else // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const& component, ::BiomeRegistry const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);
#else // @header-generator platform
    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& component) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SurfaceBuilderBiomeComponentGlue(::SurfaceBuilderBiomeComponentGlue::BuilderType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SurfaceBuilderBiomeComponentGlue::BuilderType);
#else // @header-generator platform
    virtual ~SurfaceBuilderBiomeComponentGlue() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);
#else // @header-generator platform
    MCAPI bool $resolveAndValidate(::entt::meta_any const& component, ::BiomeRegistry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyToBiome(::Biome&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& component) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
