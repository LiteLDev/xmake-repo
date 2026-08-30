#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/HotBarWipeRenderer.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class HotBarDropRenderer : public ::HotBarWipeRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<std::pair<int, ResourceLocation>>> mCachedResourceLocation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotBarDropRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

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

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
