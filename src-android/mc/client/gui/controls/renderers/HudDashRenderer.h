#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class LocalPlayer;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudDashRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mDashEmpty;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mDashFull;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mDashCooldown;
    ::ll::TypedStorage<1, 1, bool>               mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>               mIsReplacedWhileInactive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudDashRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HudDashRenderer(::UIResolvedDef const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canRender(::IClientInstance const&, ::LocalPlayer const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&);
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

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
