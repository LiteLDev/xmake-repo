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

struct BiomeSurfaceMaterialData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTopBlock;
    ::ll::TypedStorage<4, 4, uint> mMidBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaFloorBlock;
    ::ll::TypedStorage<4, 4, uint> mFoundationBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaBlock;
    ::ll::TypedStorage<4, 4, int>  mSeaFloorDepth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeSurfaceMaterialData const&) const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI bool operator==(::BiomeSurfaceMaterialData const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeSurfaceMaterialData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
