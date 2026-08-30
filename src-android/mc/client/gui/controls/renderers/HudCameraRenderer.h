#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/item/components/CameraCallbacks.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class MinecraftUIRenderContext;
class Player;
class ResourceLocation;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudCameraRenderer : public ::MinecraftUICustomRenderer, public ::CameraCallbacks {
public:
    // HudCameraRenderer inner types define
    enum class State : int {
        None          = 0,
        ShowBlackBars = 1,
        ShowShutter   = 2,
        ShowPicture   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::HudCameraRenderer::State> mState;
    ::ll::TypedStorage<4, 4, float>                      mShowTime;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>         mPhotoTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>        mColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>        mTexMaterial;
    ::ll::TypedStorage<1, 1, bool>                       mImmediatePicture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudCameraRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    virtual void onTakePictureNow(::Player&, ::Actor*, ::Actor*);

    virtual void onStartTakingPicture(::Player&);

    virtual void onEndTakingPicture(::Player&, ::Actor*, ::Actor*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudCameraRenderer();

    MCNAPI void _drawBlackBars(::ScreenContext&, float, int, int);

    MCNAPI void _drawPicture(::ScreenContext&, float, int, int);
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
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    MCNAPI void $onTakePictureNow(::Player&, ::Actor*, ::Actor*);

    MCNAPI void $onStartTakingPicture(::Player&);

    MCNAPI void $onEndTakingPicture(::Player&, ::Actor*, ::Actor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
