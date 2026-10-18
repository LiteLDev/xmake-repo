#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

// auto generated forward declare list
// clang-format off
namespace renoir { struct UpdateBox; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace renoir {

struct UpdateTextureCmd {
public:
    // UpdateTextureCmd inner types declare
    // clang-format off
    struct UpdateTextureCmdInfo;
    // clang-format on

    // UpdateTextureCmd inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct UpdateTextureCmdInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk128ec9;
        ::ll::UntypedStorage<8, 8> mUnkab984f;
        ::ll::UntypedStorage<4, 4> mUnk3536b4;
        ::ll::UntypedStorage<1, 1> mUnkdb617e;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateTextureCmdInfo& operator=(UpdateTextureCmdInfo const&);
        UpdateTextureCmdInfo(UpdateTextureCmdInfo const&);
        UpdateTextureCmdInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4e0909;
    ::ll::UntypedStorage<1, 52> mUnk4b286b;
    ::ll::UntypedStorage<8, 8>  mUnk76fd6c;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateTextureCmd& operator=(UpdateTextureCmd const&);
    UpdateTextureCmd(UpdateTextureCmd const&);
    UpdateTextureCmd();
#else // @header-generator platform
    struct UpdateTextureCmdInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace renoir
