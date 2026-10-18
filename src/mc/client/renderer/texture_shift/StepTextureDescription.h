#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture_shift/NoiseAlignmentType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
struct StepTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       stepName;
    ::ll::TypedStorage<8, 24, std::string>                       textureAtlasName;
    ::ll::TypedStorage<8, 8, ulong>                              localTransitionTicks;
    ::ll::TypedStorage<4, 4, ::TextureShift::NoiseAlignmentType> noiseAlignmentType;
    ::ll::TypedStorage<8, 8, ulong>                              noiseAlignmentValue;
    // NOLINTEND
};
#else // @header-generator platform
struct StepTextureDescription {};
#endif // @header-generator platform

} // namespace TextureShift
