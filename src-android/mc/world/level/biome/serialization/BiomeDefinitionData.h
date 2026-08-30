#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/serialization/BiomeDefinitionChunkGenData.h"
#include "mc/world/level/biome/serialization/BiomeTagsData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeDefinitionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>                                             mId;
    ::ll::TypedStorage<4, 4, float>                                        mTemperature;
    ::ll::TypedStorage<4, 4, float>                                        mDownfall;
    ::ll::TypedStorage<4, 4, float>                                        mFoliageSnow;
    ::ll::TypedStorage<4, 4, float>                                        mDepth;
    ::ll::TypedStorage<4, 4, float>                                        mScale;
    ::ll::TypedStorage<4, 4, int>                                          mMapWaterColorARGB;
    ::ll::TypedStorage<1, 1, bool>                                         mRain;
    ::ll::TypedStorage<8, 32, std::optional<BiomeTagsData>>                mTags;
    ::ll::TypedStorage<8, 880, std::optional<BiomeDefinitionChunkGenData>> mChunkGenData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BiomeDefinitionData& operator=(::BiomeDefinitionData&&);

    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeDefinitionData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeDefinitionData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
