#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/Type.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::Font {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct RenderingParameters {};
#endif // @header-generator platform

} // namespace mce::Font
