#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                       mNoiseFreqScale;
    ::ll::TypedStorage<4, 4, float>                       mNoiseLowerBound;
    ::ll::TypedStorage<4, 4, float>                       mNoiseUpperBound;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>              mHeightMinType;
    ::ll::TypedStorage<2, 2, ushort>                      mHeightMin;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>              mHeightMaxType;
    ::ll::TypedStorage<2, 2, ushort>                      mHeightMax;
    ::ll::TypedStorage<4, 24, ::BiomeSurfaceMaterialData> mAdjustedMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI void write(::BinaryStream& stream) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeElementData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeElementData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
