#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/actor/player/vanilla_waypoint_manager_constants/ImageType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class NinePatchLayer;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudLocatorBarRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class NinePatchLayer;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudLocatorBarRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class HudLocatorBarRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
#else // @header-generator platform
    // HudLocatorBarRenderer inner types declare
#endif // @header-generator platform
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<NinePatchLayer>> mBackgroundTexture;
    ::ll::TypedStorage<1, 1, bool> mHasLoadedIconTextures;
    ::ll::TypedStorage<8, 192, std::array<mce::TexturePtr, 6>> mTextures;
    ::ll::TypedStorage<8, 3696, std::array<mce::Mesh, 6>> mMeshes;
    ::ll::TypedStorage<4, 8, ::Vec2> mBackgroundSize;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRenderCall;
#else // @header-generator platform
    struct ActorUniqueIDCompare;
    struct PlayerData;
#endif // @header-generator platform
    // clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudLocatorBarRenderer();
#else // @header-generator platform
    // HudLocatorBarRenderer inner types define
    struct ActorUniqueIDCompare {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudLocatorBarRenderer();
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
    struct PlayerData {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NinePatchLayer>>     mBackgroundTexture;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLoadedIconTextures;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>>    mTextures;
    ::ll::TypedStorage<8, 3696, ::std::array<::mce::Mesh, 6>>         mMeshes;
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mBackgroundSize;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastRenderCall;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudLocatorBarRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudLocatorBarRenderer();
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

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
