#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Texture;
    ::ll::UntypedStorage<1, 52>                         TextureDesc;
    ::ll::UntypedStorage<4, 8>                          DataLength;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke5b16a;
    ::ll::UntypedStorage<1, 52> mUnk15ef8b;
    ::ll::UntypedStorage<4, 8>  mUnkcf3ad5;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTextureCmd& operator=(CreateTextureCmd const&);
    CreateTextureCmd(CreateTextureCmd const&);
    CreateTextureCmd();
};
#else // @header-generator platform
struct CreateTextureCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
