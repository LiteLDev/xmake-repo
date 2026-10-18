#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudHungerRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class HudHungerRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // HudHungerRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class HungerType : int {
        Background       = 0,
        BackgroundEffect = 1,
        Full             = 2,
        FullEffect       = 3,
        Half             = 4,
        HalfEffect       = 5,
        Count            = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mTickCount;
    ::ll::TypedStorage<1, 1, bool>                                 mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>                                 mShouldRender;
    ::ll::TypedStorage<1, 1, bool>                                 mUseHungerEffect;
    ::ll::TypedStorage<1, 1, bool>                                 mAnimatedLastFrame;
    ::ll::TypedStorage<8, 8, uint64>                               mNumFullIcons;
    ::ll::TypedStorage<8, 8, uint64>                               mNumHalfIcons;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>> mHungerTextures;
    ::ll::TypedStorage<8, 3696, ::std::array<::mce::Mesh, 6>>      mHungerMeshes;
    ::ll::TypedStorage<4, 120, ::std::array<::glm::vec3, 10>>      mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHungerRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudHungerRenderer();
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

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND
#else // @header-generator platform
    enum class HungerType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
