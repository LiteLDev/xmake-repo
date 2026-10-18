#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockTessellatorCustomExtraData {

#if defined(LL_PLAT_A) // @header-generator platform
class CauldronData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
    ::ll::TypedStorage<4, 4, int>           mTextureIndex;
    ::ll::TypedStorage<4, 4, int>           mRenderLayer;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CauldronData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
    ::ll::TypedStorage<4, 4, int>           mTextureIndex;
    ::ll::TypedStorage<4, 4, int>           mRenderLayer;
    // NOLINTEND
};
#else // @header-generator platform
class CauldronData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockTessellatorCustomExtraData
