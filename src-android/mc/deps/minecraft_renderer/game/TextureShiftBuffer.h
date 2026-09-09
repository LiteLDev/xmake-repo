#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TextureShiftBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPreUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPostUV;
    ::ll::TypedStorage<2, 2, ushort>                                  mPrePBRId;
    ::ll::TypedStorage<2, 2, ushort>                                  mPostPBRId;
    ::ll::TypedStorage<4, 4, float>                                   mGlobalAlpha;
    ::ll::TypedStorage<4, 4, float>                                   mLocalShiftLength;
    ::ll::TypedStorage<4, 4, float>                                   mNoiseSpread;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftBuffer& operator=(TextureShiftBuffer const&);
    TextureShiftBuffer(TextureShiftBuffer const&);
};

} // namespace mce
