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
struct CreateTextureWithDataPtrCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Texture2DObject> Texture;
    ::ll::UntypedStorage<1, 52>                         TextureDesc;
    ::ll::TypedStorage<8, 8, void const*>               Data;
    ::ll::TypedStorage<4, 4, uint>                      DataLength;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateTextureWithDataPtrCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk221a0e;
    ::ll::UntypedStorage<1, 52> mUnk9e67a4;
    ::ll::UntypedStorage<8, 8>  mUnk75c408;
    ::ll::UntypedStorage<4, 4>  mUnkb9c918;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTextureWithDataPtrCmd& operator=(CreateTextureWithDataPtrCmd const&);
    CreateTextureWithDataPtrCmd(CreateTextureWithDataPtrCmd const&);
    CreateTextureWithDataPtrCmd();
};
#else // @header-generator platform
struct CreateTextureWithDataPtrCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
