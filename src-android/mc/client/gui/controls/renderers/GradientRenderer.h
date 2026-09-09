#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class GradientRenderer : public ::MinecraftUICustomRenderer {
public:
    // GradientRenderer inner types define
    enum class GradientDirection : int {
        Vertical   = 0,
        Horizontal = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GradientRenderer::GradientDirection> mDirection;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor1;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor2;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GradientRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setGradientColors(::mce::Color const&, ::mce::Color const&);

    MCNAPI void setGradientDirection(::GradientRenderer::GradientDirection);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
