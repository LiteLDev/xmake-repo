#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeConditionalTransformationData.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
struct BiomeConditionalTransformationData;
#endif // @header-generator platform
// clang-format on

struct BiomeLegacyWorldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeConditionalTransformationData>> mLegacyPreHillsEdge;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BiomeLegacyWorldGenRulesData& operator=(::BiomeLegacyWorldGenRulesData&&);

    MCNAPI ~BiomeLegacyWorldGenRulesData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConditionalTransformationData>> mLegacyPreHillsEdge;
#endif // @header-generator platform
    // NOLINTEND
};
