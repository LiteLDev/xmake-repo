#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/biome/biomes_client_json_data/OldFogDefinition.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"

namespace BiomesClientJsonData {

struct DefaultBiomeSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, std::optional<BiomesClientJsonData::OldFogDefinition>> mOldFogDefinition;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                              mFogIdsToMerge;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>                              mWaterSurfaceColor;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                    mWaterSurfaceTransparency;
    // NOLINTEND
};

} // namespace BiomesClientJsonData
