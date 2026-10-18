#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/TextureWrapping.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureWrappingDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> uAddress;
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> vAddress;
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> wAddress;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureWrappingDescription();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureWrappingDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc32ba4;
    ::ll::UntypedStorage<1, 1> mUnkfbcc72;
    ::ll::UntypedStorage<1, 1> mUnk9f2a79;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureWrappingDescription& operator=(TextureWrappingDescription const&);
    TextureWrappingDescription(TextureWrappingDescription const&);
    TextureWrappingDescription();
};
#else // @header-generator platform
struct TextureWrappingDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
