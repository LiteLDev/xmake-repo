#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/serialization/BiomeReplacementData.h"
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
struct BiomeReplacementData;
#endif // @header-generator platform
// clang-format on

struct BiomeReplacementsData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeReplacementData>> mBiomeReplacements;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeReplacementsData();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeReplacementData>> mBiomeReplacements;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeReplacementsData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeReplacementsData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
