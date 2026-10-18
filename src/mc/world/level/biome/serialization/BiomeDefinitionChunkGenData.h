#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/VillageType.h"
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeClimateData.h"
#include "mc/world/level/biome/serialization/BiomeConsolidatedFeaturesData.h"
#include "mc/world/level/biome/serialization/BiomeLegacyWorldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeMountainParamsData.h"
#include "mc/world/level/biome/serialization/BiomeMultinoiseGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeOverworldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeReplacementsData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceBuilderData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialAdjustmentData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeDefinitionChunkGenData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 20, std::optional<BiomeClimateData>>                   mClimate;
    ::ll::TypedStorage<8, 32, std::optional<BiomeConsolidatedFeaturesData>>      mConsolidatedFeatures;
    ::ll::TypedStorage<4, 16, std::optional<BiomeMountainParamsData>>            mMountainParams;
    ::ll::TypedStorage<8, 32, std::optional<BiomeSurfaceMaterialAdjustmentData>> mSurfaceMaterialAdjustments;
    ::ll::TypedStorage<8, 176, std::optional<BiomeOverworldGenRulesData>>        mOverworldGenRules;
    ::ll::TypedStorage<4, 24, std::optional<BiomeMultinoiseGenRulesData>>        mMultinoiseGenRules;
    ::ll::TypedStorage<8, 32, std::optional<BiomeLegacyWorldGenRulesData>>       mLegacyWorldGenRules;
    ::ll::TypedStorage<8, 32, std::optional<BiomeReplacementsData>>              mReplaceBiomes;
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::VillageType>>            mVillageType;
    ::ll::TypedStorage<8, 248, std::optional<BiomeSurfaceBuilderData>>           mSurfaceBuilderData;
    ::ll::TypedStorage<8, 248, std::optional<BiomeSurfaceBuilderData>>           mSubsurfaceBuilderData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 20, ::std::optional<::BiomeClimateData>>                   mClimate;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeConsolidatedFeaturesData>>      mConsolidatedFeatures;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMountainParamsData>>            mMountainParams;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeSurfaceMaterialAdjustmentData>> mSurfaceMaterialAdjustments;
    ::ll::TypedStorage<8, 176, ::std::optional<::BiomeOverworldGenRulesData>>        mOverworldGenRules;
    ::ll::TypedStorage<4, 24, ::std::optional<::BiomeMultinoiseGenRulesData>>        mMultinoiseGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeLegacyWorldGenRulesData>>       mLegacyWorldGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeReplacementsData>>              mReplaceBiomes;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::VillageType>>            mVillageType;
    ::ll::TypedStorage<8, 256, ::std::optional<::BiomeSurfaceBuilderData>>           mSurfaceBuilderData;
    ::ll::TypedStorage<8, 256, ::std::optional<::BiomeSurfaceBuilderData>>           mSubsurfaceBuilderData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BiomeDefinitionChunkGenData& operator=(BiomeDefinitionChunkGenData const&);
    BiomeDefinitionChunkGenData(BiomeDefinitionChunkGenData const&);
    BiomeDefinitionChunkGenData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData&&);
#else // @header-generator platform
    MCAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData const&);
#else // @header-generator platform
    MCAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData&&);
#else // @header-generator platform
    MCAPI bool operator==(::BiomeDefinitionChunkGenData const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData const&);
#else // @header-generator platform
    MCAPI void write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeDefinitionChunkGenData const&) const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI ~BiomeDefinitionChunkGenData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeDefinitionChunkGenData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeDefinitionChunkGenData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::BiomeDefinitionChunkGenData&&);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
