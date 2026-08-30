#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"

namespace renoir {

struct SetIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> Object;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferType>   Type;
    // NOLINTEND
};

} // namespace renoir
