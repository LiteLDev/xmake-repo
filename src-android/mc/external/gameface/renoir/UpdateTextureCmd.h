#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

// auto generated forward declare list
// clang-format off
namespace renoir { struct UpdateBox; }
// clang-format on

namespace renoir {

struct UpdateTextureCmd {
public:
    // UpdateTextureCmd inner types declare
    // clang-format off
    struct UpdateTextureCmdInfo;
    // clang-format on

    // UpdateTextureCmd inner types define
    struct UpdateTextureCmdInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::renoir::UpdateBox*> UpdateBoxes;
        ::ll::TypedStorage<8, 8, void const**>         PixelData;
        ::ll::TypedStorage<4, 4, uint>                 BoxesCount;
        ::ll::TypedStorage<1, 1, bool>                 WillOverwrite;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject>                         Texture;
    ::ll::UntypedStorage<1, 52>                                                 TextureDesc;
    ::ll::TypedStorage<8, 8, ::renoir::UpdateTextureCmd::UpdateTextureCmdInfo*> UpdateTextureInfo;
    // NOLINTEND
};

} // namespace renoir
