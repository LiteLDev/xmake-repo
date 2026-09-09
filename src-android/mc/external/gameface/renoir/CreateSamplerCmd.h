#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/Sampler2D.h"
#include "mc/external/gameface/renoir/Sampler2DObject.h"

namespace renoir {

struct CreateSamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Sampler2DObject> Object;
    ::ll::TypedStorage<4, 12, ::renoir::Sampler2D>      SamplerDesc;
    // NOLINTEND
};

} // namespace renoir
