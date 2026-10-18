#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTexture.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  Texture;
    ::ll::UntypedStorage<4, 20> TextureDesc;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  mUnk525612;
    ::ll::UntypedStorage<4, 20> mUnk738d87;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateDSTextureCmd& operator=(CreateDSTextureCmd const&);
    CreateDSTextureCmd(CreateDSTextureCmd const&);
    CreateDSTextureCmd();
};
#else // @header-generator platform
struct CreateDSTextureCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
