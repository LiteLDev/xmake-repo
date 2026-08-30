#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct IBiomeComponentGlue;
struct IBiomeEnvironmentAttributeGlue;
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IBiomeComponentGlue> ()>>> mComponentGlueFactories;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IBiomeEnvironmentAttributeGlue> ()>>> mEnvironmentAttributeGlueFactories;
    // clang-format on
    // NOLINTEND
};
