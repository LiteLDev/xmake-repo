#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/biome/biomes_client_json_data/DefaultBiomeSettings.h"
#include "mc/client/world/level/biome/biomes_client_json_data/SingleBiomeSettings.h"

namespace BiomesClientJsonData {

struct MergedFileData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 168, std::optional<BiomesClientJsonData::DefaultBiomeSettings>> mDefaultBiomeSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BiomesClientJsonData::SingleBiomeSettings>> mPerBiomeSettings;
    // clang-format on
    // NOLINTEND
};

} // namespace BiomesClientJsonData
