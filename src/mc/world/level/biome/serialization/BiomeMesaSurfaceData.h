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

struct BiomeMesaSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mClayMaterial;
    ::ll::TypedStorage<4, 4, uint> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool> mBrycePillars;
    ::ll::TypedStorage<1, 1, bool> mHasForest;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeMesaSurfaceData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeMesaSurfaceData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
