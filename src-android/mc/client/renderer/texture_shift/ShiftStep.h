#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture_shift/NoiseAlignmentType.h"
#include "mc/client/renderer/texture_shift/TextureUV.h"

namespace TextureShift {

struct ShiftStep {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       textureAtlasName;
    ::ll::TypedStorage<4, 12, ::TextureShift::TextureUV>         textureUV;
    ::ll::TypedStorage<8, 8, ulong>                              localTransitionTicks;
    ::ll::TypedStorage<4, 4, ::TextureShift::NoiseAlignmentType> noiseAlignmentType;
    ::ll::TypedStorage<8, 8, ulong>                              noiseAlignmentValue;
    // NOLINTEND
};

} // namespace TextureShift
