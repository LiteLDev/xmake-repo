#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIFrameUpdateContext;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class HudProgressRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mProgressAlpha;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudProgressRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
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

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
