#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/PrimitiveTopology.h"

namespace renoir {

struct DrawIndexedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        IndexCount;
    ::ll::TypedStorage<4, 4, uint>                        StartIndex;
    ::ll::TypedStorage<4, 4, uint>                        BaseVertex;
    ::ll::TypedStorage<4, 4, ::renoir::PrimitiveTopology> Topology;
    // NOLINTEND
};

} // namespace renoir
