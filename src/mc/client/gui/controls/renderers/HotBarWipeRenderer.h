#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

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
    virtual ~HotBarWipeRenderer() /*override*/ = default;

    virtual void
    drawRectangle(::ScreenContext& screenContext, ::UIControl& owner, float percentage, ::mce::Color const& color);

    virtual int getHotBarIndex(::UIControl& owner) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $drawRectangle(::ScreenContext& screenContext, ::UIControl& owner, float percentage, ::mce::Color const& color);

    MCAPI int $getHotBarIndex(::UIControl& owner) const;
    // NOLINTEND
};
#else // @header-generator platform
class HotBarWipeRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
