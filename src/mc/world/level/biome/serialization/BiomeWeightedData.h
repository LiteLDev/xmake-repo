#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeWeightedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mBiomeIdentifier;
    ::ll::TypedStorage<4, 4, uint>   mWeight;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeWeightedData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeWeightedData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
