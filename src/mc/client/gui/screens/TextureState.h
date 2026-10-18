#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

struct TextureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexturePtr;
    ::ll::TypedStorage<1, 1, bool>               mActive;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureState& operator=(TextureState const&);
    TextureState(TextureState const&);
    TextureState();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

struct TextureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexturePtr;
    ::ll::TypedStorage<1, 1, bool>               mActive;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureState {};
#endif // @header-generator platform
#endif // @header-generator platform
