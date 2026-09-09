#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeConditionalTransformationData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeLegacyWorldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
