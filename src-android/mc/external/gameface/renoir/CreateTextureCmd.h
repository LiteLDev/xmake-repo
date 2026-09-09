#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

namespace renoir {

struct CreateTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Texture;
    ::ll::UntypedStorage<1, 52>                         TextureDesc;
    ::ll::UntypedStorage<4, 8>                          DataLength;
    // NOLINTEND
};

} // namespace renoir
