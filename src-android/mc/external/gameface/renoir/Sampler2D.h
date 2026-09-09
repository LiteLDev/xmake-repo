#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/SamplerAddressing.h"
#include "mc/external/gameface/renoir/SamplerFilter.h"

namespace renoir {

struct Sampler2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::SamplerFilter>     Filtering;
    ::ll::TypedStorage<4, 4, ::renoir::SamplerAddressing> UAddress;
    ::ll::TypedStorage<4, 4, ::renoir::SamplerAddressing> VAddress;
    // NOLINTEND
};

} // namespace renoir
