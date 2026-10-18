#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroup; }
// clang-format on

class ArmorTrimUnloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> textures;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorTrimUnloader();

    MCNAPI void addTexture(::ResourceLocation const&);

    MCNAPI void unloadTextures(::mce::TextureGroup&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class ArmorTrimUnloader {};
#endif // @header-generator platform
