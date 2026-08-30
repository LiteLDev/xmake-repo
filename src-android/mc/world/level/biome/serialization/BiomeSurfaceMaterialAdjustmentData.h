#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeElementData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceMaterialAdjustmentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeElementData>> mAdjustments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::BiomeSurfaceMaterialAdjustmentData const&) const;

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeSurfaceMaterialAdjustmentData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND
};
