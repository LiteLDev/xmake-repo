#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Texture;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3f988d;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyTextureCmd& operator=(DestroyTextureCmd const&);
    DestroyTextureCmd(DestroyTextureCmd const&);
    DestroyTextureCmd();
};
#else // @header-generator platform
struct DestroyTextureCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
