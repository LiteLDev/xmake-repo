#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeWeightedData.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
struct BiomeWeightedData;
#endif // @header-generator platform
// clang-format on

struct BiomeConditionalTransformationData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeWeightedData>> mTransformsInto;
    ::ll::TypedStorage<2, 2, ushort>                          mConditionJson;
    ::ll::TypedStorage<4, 4, uint>                            mMinPassingNeighbors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeConditionalTransformationData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mTransformsInto;
    ::ll::TypedStorage<2, 2, ushort>                              mConditionJson;
    ::ll::TypedStorage<4, 4, uint>                                mMinPassingNeighbors;
#endif // @header-generator platform
    // NOLINTEND
};
