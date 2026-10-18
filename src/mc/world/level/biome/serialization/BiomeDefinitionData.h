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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                                    mId;
    ::ll::TypedStorage<4, 4, float>                                            mTemperature;
    ::ll::TypedStorage<4, 4, float>                                            mDownfall;
    ::ll::TypedStorage<4, 4, float>                                            mFoliageSnow;
    ::ll::TypedStorage<4, 4, float>                                            mDepth;
    ::ll::TypedStorage<4, 4, float>                                            mScale;
    ::ll::TypedStorage<4, 4, int>                                              mMapWaterColorARGB;
    ::ll::TypedStorage<1, 1, bool>                                             mRain;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeTagsData>>                mTags;
    ::ll::TypedStorage<8, 896, ::std::optional<::BiomeDefinitionChunkGenData>> mChunkGenData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeDefinitionData& operator=(::BiomeDefinitionData&&);
#else // @header-generator platform
    MCAPI void write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeDefinitionData();
#else // @header-generator platform
    MCAPI ~BiomeDefinitionData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeDefinitionData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeDefinitionData> read(::ReadOnlyBinaryStream& stream);
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
};
