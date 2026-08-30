#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeWeightedData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeConditionalTransformationData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
