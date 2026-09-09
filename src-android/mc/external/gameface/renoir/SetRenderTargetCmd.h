#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

namespace renoir {

struct SetRenderTargetCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Object;
    ::ll::UntypedStorage<1, 4>                          DSObject;
    // NOLINTEND
};

} // namespace renoir
