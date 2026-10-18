#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetRenderTargetCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Object;
    ::ll::UntypedStorage<1, 4>                          DSObject;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetRenderTargetCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk950a89;
    ::ll::UntypedStorage<1, 4> mUnk87a028;
    // NOLINTEND

public:
    // prevent constructor by default
    SetRenderTargetCmd& operator=(SetRenderTargetCmd const&);
    SetRenderTargetCmd(SetRenderTargetCmd const&);
    SetRenderTargetCmd();
};
#else // @header-generator platform
struct SetRenderTargetCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
