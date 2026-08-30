#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct BiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> label;
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<4, 4, int>          dimension;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeData& operator=(BiomeData const&);
    BiomeData(BiomeData const&);
    BiomeData();
};

} // namespace OreUI
