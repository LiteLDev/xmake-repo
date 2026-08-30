#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/OverlayTextureMap.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class LocalPlayer;
class ScreenContext;
class Vec4;
namespace mce { class TexturePtr; }
// clang-format on

class OnCameraEffectRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>   mOnScreenEffectMaterial;
    ::ll::TypedStorage<8, 104, ::OverlayTextureMap> mOverlayTextureMap;
    ::ll::UntypedStorage<4, 4>                      mActiveOverlayTextureId;
    ::ll::TypedStorage<4, 16, ::mce::Color>         mOverlayTextureBlendColor;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>     mMinecraft;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>    mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    OnCameraEffectRenderer& operator=(OnCameraEffectRenderer const&);
    OnCameraEffectRenderer(OnCameraEffectRenderer const&);
    OnCameraEffectRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OnCameraEffectRenderer(::IMinecraftGame&, ::IClientInstance&);

    MCNAPI void _renderItemActivationAnimation(::ScreenContext&);

    MCNAPI void _renderOnScreenAnimatedTexture(
        ::ScreenContext&,
        ::LocalPlayer const&,
        ::mce::TexturePtr const&,
        ::mce::Color const&,
        ::Vec4 const&,
        ::Vec4 const&,
        ::Vec4 const&,
        int const,
        int const,
        float const,
        int const
    );

    MCNAPI void _renderOnScreenEffectAnimation(::ScreenContext&);

    MCNAPI void _setupAndRenderOnScreenAnimatedTexture(::ScreenContext&, ::LocalPlayer const&);

    MCNAPI void render(::ScreenContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&, ::IClientInstance&);
    // NOLINTEND
};
