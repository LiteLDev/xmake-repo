#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::rtxpostfx {

struct BloomParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  enabled;
    ::ll::TypedStorage<4, 4, float> multiplier;
    ::ll::TypedStorage<4, 4, int>   mipLevels;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::rtxpostfx
