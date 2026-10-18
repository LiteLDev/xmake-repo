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
struct WrapUserTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Texture;
    ::ll::UntypedStorage<1, 52>                         TextureDesc;
    ::ll::TypedStorage<8, 8, void*>                     UserTextureData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WrapUserTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7029e0;
    ::ll::UntypedStorage<1, 52> mUnk5f9524;
    ::ll::UntypedStorage<8, 8>  mUnkf17887;
    // NOLINTEND

public:
    // prevent constructor by default
    WrapUserTextureCmd& operator=(WrapUserTextureCmd const&);
    WrapUserTextureCmd(WrapUserTextureCmd const&);
    WrapUserTextureCmd();
};
#else // @header-generator platform
struct WrapUserTextureCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
