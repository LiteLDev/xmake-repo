#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudCameraRenderer : public ::MinecraftUICustomRenderer, public ::CameraCallbacks {
#else // @header-generator platform
class HudCameraRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // HudCameraRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ~HudCameraRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl&, ::UIScene const&) /*override*/;

    virtual void onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;

    virtual void onStartTakingPicture(::Player& player) /*override*/;

    virtual void onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudCameraRenderer();

    MCAPI void
    _drawBlackBars(::ScreenContext& screenContext, float barToScreenRatio, int screenWidth, int screenHeight);

    MCAPI void
    _drawPicture(::ScreenContext& screenContext, float slideOffScreenRatio, int screenWidth, int screenHeight);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl&, ::UIScene const&);

    MCAPI void $onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCAPI void $onStartTakingPicture(::Player& player);

    MCAPI void $onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMinecraftUICustomRenderer();

    MCNAPI static void** $vftableForCameraCallbacks();
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
