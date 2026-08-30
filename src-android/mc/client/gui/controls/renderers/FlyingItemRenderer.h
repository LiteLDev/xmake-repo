#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/FlyingItem.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
class UIScene;
struct UIItemRenderInfo;
// clang-format on

class FlyingItemRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ui::FlyingItem>> mFlyingItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlyingItemRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual ::UIBatchType getBatchType() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _renderGuiIcon(::MinecraftUIRenderContext&, ::IClientInstance&, ::ui::FlyingItem&, float, float, float, float, int);

    MCNAPI void _renderMesh(::MinecraftUIRenderContext&, ::BaseActorRenderContext&, ::UIItemRenderInfo const&);
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

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
