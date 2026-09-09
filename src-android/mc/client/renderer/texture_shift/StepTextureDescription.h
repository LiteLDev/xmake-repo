#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture_shift/NoiseAlignmentType.h"

namespace TextureShift {

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

} // namespace TextureShift
