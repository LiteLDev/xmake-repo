#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"
#include "mc/world/level/block/NoiseBlockSpecifier.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
class SurfaceBuilderData;
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
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mFloorMaterialBlocks;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mCeilingMaterialBlocks;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mBeachMaterialBlock;
    ::ll::TypedStorage<4, 4, int>                                             mMaxPuddleDepthBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mClayMaterialBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                                  mHardClayMaterialBlock;
    ::ll::TypedStorage<1, 1, bool>                                            mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                                            mHasForest;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                      mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<NoiseBlockSpecifier>>               mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
    ::ll::TypedStorage<1, 1, ::SurfaceBuilderBiomeComponentGlue::BuilderType> mBuilderType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceBuilderBiomeComponentGlue();

    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

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
