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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData&&);

    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData const&);

    MCNAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData&&);

    MCNAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData const&);

    MCNAPI bool operator==(::BiomeDefinitionChunkGenData const&) const;

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeDefinitionChunkGenData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData&&);

    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData const&);
    // NOLINTEND
};
