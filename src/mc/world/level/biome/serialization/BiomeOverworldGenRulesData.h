#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeConditionalTransformationData.h"
#include "mc/world/level/biome/serialization/BiomeWeightedData.h"
#include "mc/world/level/biome/serialization/BiomeWeightedTemperatureData.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
struct BiomeConditionalTransformationData;
struct BiomeWeightedData;
struct BiomeWeightedTemperatureData;
#endif // @header-generator platform
// clang-format on

struct BiomeOverworldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mHillsTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mMutateTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mRiverTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>>                  mShoreTransformations;
    ::ll::TypedStorage<8, 24, std::vector<BiomeConditionalTransformationData>> mPreHillsEdge;
    ::ll::TypedStorage<8, 24, std::vector<BiomeConditionalTransformationData>> mPostShoreEdge;
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedTemperatureData>>       mClimate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>>                  mHillsTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>>                  mMutateTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>>                  mRiverTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>>                  mShoreTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConditionalTransformationData>> mPreHillsEdge;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConditionalTransformationData>> mPostShoreEdge;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedTemperatureData>>       mClimate;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BiomeOverworldGenRulesData& operator=(BiomeOverworldGenRulesData const&);
    BiomeOverworldGenRulesData(BiomeOverworldGenRulesData const&);
    BiomeOverworldGenRulesData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData const&);
#else // @header-generator platform
    MCAPI ::BiomeOverworldGenRulesData& operator=(::BiomeOverworldGenRulesData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeOverworldGenRulesData& operator=(::BiomeOverworldGenRulesData const&);
#else // @header-generator platform
    MCAPI bool operator==(::BiomeOverworldGenRulesData const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeOverworldGenRulesData const&) const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI ~BiomeOverworldGenRulesData();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeOverworldGenRulesData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeOverworldGenRulesData const&);
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
