#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/input/InputRenderContext.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
namespace mce { class TextureGroup; }
// clang-format on

class MinecraftInputRenderContext : public ::InputRenderContext, public ::ScreenRenderer {
public:
    // MinecraftInputRenderContext inner types declare
    // clang-format off
    struct TextItem;
    // clang-format on

    // MinecraftInputRenderContext inner types define
    struct TextItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::RectangleArea> area;
        ::ll::TypedStorage<4, 16, ::mce::Color>    color;
        ::ll::TypedStorage<8, 24, std::string>     text;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextItem& operator=(TextItem const&);
        TextItem(TextItem const&);
        TextItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                                       mCurrentColor;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                       mFontHandle;
    ::ll::TypedStorage<8, 24, std::vector<MinecraftInputRenderContext::TextItem>> mTextToDraw;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                    mScreenContext;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                                      mTessellator;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                  mTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>>                 mTextureGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputRenderContext& operator=(MinecraftInputRenderContext const&);
    MinecraftInputRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftInputRenderContext();

    virtual void setColor(::mce::Color const&);

    virtual void drawRect(::RectangleArea const&, int, int, int, int, float, float, float, float) const;

    virtual void forceRender(std::string const&);

    virtual ::RectangleArea measureText(::glm::vec<2, float, (glm::qualifier)0> const&, std::string const&) const;

    virtual void drawText(::RectangleArea const&, std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftInputRenderContext(::ScreenContext&, std::shared_ptr<mce::TextureGroup>, ::FontHandle);

    MCNAPI void render(::mce::TexturePtr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenContext&, std::shared_ptr<mce::TextureGroup>, ::FontHandle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setColor(::mce::Color const&);

    MCNAPI void $drawRect(::RectangleArea const&, int, int, int, int, float, float, float, float) const;

    MCNAPI void $forceRender(std::string const&);

    MCNAPI ::RectangleArea $measureText(::glm::vec<2, float, (glm::qualifier)0> const&, std::string const&) const;

    MCNAPI void $drawText(::RectangleArea const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
