#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/UICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIFrameUpdateContext;
class MinecraftUIRenderContext;
class UIControl;
class UIFrameUpdateContext;
class UIRenderContext;
// clang-format on

class MinecraftUICustomRenderer : public ::UICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUICustomRenderer();

    virtual void preRenderSetup(::UIRenderContext&);

    virtual void frameUpdate(::UIFrameUpdateContext&, ::UIControl&);

    virtual void render(::UIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) = 0;

    virtual void preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftUICustomRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRenderSetup(::UIRenderContext&);

    MCNAPI void $frameUpdate(::UIFrameUpdateContext&, ::UIControl&);

    MCNAPI void $render(::UIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&, ::UIControl&);

    MCNAPI void $preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
