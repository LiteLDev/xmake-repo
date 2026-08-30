#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/VertexBufferObject.h"
#include "mc/external/gameface/renoir/VertexType.h"

namespace renoir {

struct CreateVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::VertexType>         Type;
    ::ll::TypedStorage<4, 4, ::renoir::VertexBufferObject> Object;
    ::ll::TypedStorage<4, 4, uint>                         Size;
    ::ll::TypedStorage<1, 1, bool>                         ChangesOften;
    // NOLINTEND
};

} // namespace renoir
