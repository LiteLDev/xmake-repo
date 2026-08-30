#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/Type.h"

namespace mce::Font {

struct RenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mGlyphSmoothRadius;
    ::ll::TypedStorage<4, 4, float>                                    mGlyphCutoff;
    ::ll::TypedStorage<4, 4, float>                                    mTextureSize;
    ::ll::TypedStorage<4, 4, float>                                    mOutlineCutoff;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mOutlineColor;
    ::ll::TypedStorage<4, 4, float>                                    mShadowSmoothRadius;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mShadowColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mShadowOffset;
    ::ll::TypedStorage<4, 4, ::mce::Font::Type>                        mFontType;
    // NOLINTEND
};

} // namespace mce::Font
