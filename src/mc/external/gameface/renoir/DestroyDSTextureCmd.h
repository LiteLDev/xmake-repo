#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> DSTexture;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnkbde0c4;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyDSTextureCmd& operator=(DestroyDSTextureCmd const&);
    DestroyDSTextureCmd(DestroyDSTextureCmd const&);
    DestroyDSTextureCmd();
};
#else // @header-generator platform
struct DestroyDSTextureCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
