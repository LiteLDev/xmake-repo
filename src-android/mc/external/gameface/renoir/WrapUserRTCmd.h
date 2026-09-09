#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTexture.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

namespace renoir {

struct WrapUserRTCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                          UserObject;
    ::ll::UntypedStorage<1, 52>                              Description;
    ::ll::UntypedStorage<4, 0>                               Object;
    ::ll::TypedStorage<8, 8, void*>                          DepthStencil;
    ::ll::TypedStorage<4, 16, ::renoir::DepthStencilTexture> DSDescription;
    ::ll::UntypedStorage<1, 8>                               DSObject;
    // NOLINTEND
};

} // namespace renoir
