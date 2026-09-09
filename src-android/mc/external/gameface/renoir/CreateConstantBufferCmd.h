#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/CBType.h"
#include "mc/external/gameface/renoir/ConstantBufferObject.h"

namespace renoir {

struct CreateConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::CBType> ConstantBufferType;
    ::ll::UntypedStorage<1, 4>                 Object;
    ::ll::UntypedStorage<4, 8>                 Size;
    // NOLINTEND
};

} // namespace renoir
