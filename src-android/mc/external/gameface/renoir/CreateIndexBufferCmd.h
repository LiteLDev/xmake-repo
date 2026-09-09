#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"

namespace renoir {

struct CreateIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferType>   IndexType;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> Object;
    ::ll::TypedStorage<4, 4, uint>                        Size;
    ::ll::TypedStorage<1, 1, bool>                        ChangesOften;
    // NOLINTEND
};

} // namespace renoir
