#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/serialization/BiomeElementData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeElementData;
#endif // @header-generator platform
// clang-format on

struct BiomeSurfaceMaterialAdjustmentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeElementData>> mAdjustments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::BiomeSurfaceMaterialAdjustmentData const&) const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeElementData>> mAdjustments;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeSurfaceMaterialAdjustmentData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialAdjustmentData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
