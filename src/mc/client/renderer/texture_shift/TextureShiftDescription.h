#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture_shift/StepTextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureShiftDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TextureShift::StepTextureDescription>> stepTextures;
    ::ll::TypedStorage<8, 24, std::string>                                       textureName;
    ::ll::TypedStorage<8, 24, std::string>                                       collectionName;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureShiftDescription {};
#endif // @header-generator platform

} // namespace TextureShift
