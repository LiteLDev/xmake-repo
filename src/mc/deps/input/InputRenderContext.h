#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
namespace mce { class Color; }
// clang-format on

class InputRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~InputRenderContext() = 0;

    virtual void setColor(::mce::Color const&) = 0;

    virtual void drawRect(::RectangleArea const&, int, int, int, int, float, float, float, float) const = 0;

    virtual void forceRender(std::string const&) = 0;

    virtual ::RectangleArea measureText(::glm::vec<2, float, (glm::qualifier)0> const&, std::string const&) const = 0;

    virtual void drawText(::RectangleArea const&, std::string const&) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
namespace mce { class Color; }
// clang-format on

class InputRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputRenderContext() = 0;

    virtual void setColor(::mce::Color const& color) = 0;

    virtual void drawRect(
        ::RectangleArea const& rect,
        int                    u,
        int                    v,
        int                    uvWidth,
        int                    uvHeight,
        float                  uScale,
        float                  vScale,
        float                  px,
        float                  py
    ) const = 0;

    virtual void forceRender(::std::string const& texturePath) = 0;

    virtual ::RectangleArea measureText(::glm::vec2 const& center, ::std::string const& text) const = 0;

    virtual void drawText(::RectangleArea const& area, ::std::string const& text) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class InputRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform
