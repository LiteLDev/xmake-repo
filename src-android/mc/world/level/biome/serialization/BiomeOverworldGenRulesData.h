#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeConditionalTransformationData.h"
#include "mc/world/level/biome/serialization/BiomeWeightedData.h"
#include "mc/world/level/biome/serialization/BiomeWeightedTemperatureData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeOverworldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mHillsTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mMutateTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mRiverTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mShoreTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeConditionalTransformationData>> mPreHillsEdge;
    ::ll::TypedStorage<8, 24, std::vector<BiomeConditionalTransformationData>> mPostShoreEdge;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedTemperatureData>>       mClimate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData const&);

    MCNAPI ::BiomeOverworldGenRulesData& operator=(::BiomeOverworldGenRulesData const&);

    MCNAPI bool operator==(::BiomeOverworldGenRulesData const&) const;

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeOverworldGenRulesData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeOverworldGenRulesData const&);
    // NOLINTEND
};
