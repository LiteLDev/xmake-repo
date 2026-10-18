#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTexture.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Texture2D.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WrapUserRTCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke9af5b;
    ::ll::UntypedStorage<1, 52> mUnka09b1c;
    ::ll::UntypedStorage<4, 4>  mUnkedd6a5;
    ::ll::UntypedStorage<8, 8>  mUnkb0fb8a;
    ::ll::UntypedStorage<4, 16> mUnkdfbef3;
    ::ll::UntypedStorage<1, 8>  mUnk8d2c83;
    // NOLINTEND

public:
    // prevent constructor by default
    WrapUserRTCmd& operator=(WrapUserRTCmd const&);
    WrapUserRTCmd(WrapUserRTCmd const&);
    WrapUserRTCmd();
};
#else // @header-generator platform
struct WrapUserRTCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
