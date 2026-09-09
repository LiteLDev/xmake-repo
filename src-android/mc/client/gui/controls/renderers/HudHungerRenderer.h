#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHungerRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudHungerRenderer inner types define
    enum class HungerType : int {
        BACKGROUND        = 0,
        BACKGROUND_EFFECT = 1,
        FULL              = 2,
        FULL_EFFECT       = 3,
        HALF              = 4,
        HALF_EFFECT       = 5,
        COUNT             = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mTickCount;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>                                                    mShouldRender;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseHungerEffect;
    ::ll::TypedStorage<1, 1, bool>                                                    mAnimatedLastFrame;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumFullIcons;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumHalfIcons;
    ::ll::TypedStorage<8, 192, std::array<mce::TexturePtr, 6>>                        mHungerTextures;
    ::ll::TypedStorage<8, 3696, std::array<mce::Mesh, 6>>                             mHungerMeshes;
    ::ll::TypedStorage<4, 120, std::array<glm::vec<3, float, (glm::qualifier)0>, 10>> mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHungerRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudHungerRenderer();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
