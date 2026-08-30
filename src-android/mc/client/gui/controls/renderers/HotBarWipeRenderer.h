#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class UIControl;
namespace mce { class Color; }
// clang-format on

class HotBarWipeRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotBarWipeRenderer() = default;

    virtual void drawRectangle(::ScreenContext&, ::UIControl&, float, ::mce::Color const&);

    virtual int getHotBarIndex(::UIControl&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $drawRectangle(::ScreenContext&, ::UIControl&, float, ::mce::Color const&);

    MCNAPI int $getHotBarIndex(::UIControl&) const;
    // NOLINTEND
};
