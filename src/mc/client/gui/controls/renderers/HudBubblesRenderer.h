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

class HudBubblesRenderer : public ::MinecraftUICustomRenderer {
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

class HudBubblesRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class HudBubblesRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // HudBubblesRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BubbleType : int {
        FULL  = 0,
        POP   = 1,
        EMPTY = 2,
        COUNT = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLoadedTextures;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumFullIcons;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumPoppedIcons;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumEmptyIcons;
    ::ll::TypedStorage<1, 1, bool>                                                    mPopSoundReady;
    ::ll::TypedStorage<1, 1, bool>                                                    mWobblingLastFrame;
    ::ll::TypedStorage<8, 96, std::array<mce::TexturePtr, 3>>                         mBubbleTextures;
    ::ll::TypedStorage<8, 1848, std::array<mce::Mesh, 3>>                             mBubbleMeshes;
    ::ll::TypedStorage<4, 120, std::array<glm::vec<3, float, (glm::qualifier)0>, 10>> mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudBubblesRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudBubblesRenderer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::tuple<int, int, int> calculateBubbleData(bool, bool, short, short);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ICON_COUNT();
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
    enum class BubbleType : int {
        Full  = 0,
        Pop   = 1,
        Empty = 2,
        Count = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mHasLoadedTextures;
    ::ll::TypedStorage<8, 8, uint64>                              mNumFullIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumPoppedIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumEmptyIcons;
    ::ll::TypedStorage<1, 1, bool>                                mPopSoundReady;
    ::ll::TypedStorage<1, 1, bool>                                mWobblingLastFrame;
    ::ll::TypedStorage<8, 96, ::std::array<::mce::TexturePtr, 3>> mBubbleTextures;
    ::ll::TypedStorage<8, 1848, ::std::array<::mce::Mesh, 3>>     mBubbleMeshes;
    ::ll::TypedStorage<4, 120, ::std::array<::glm::vec3, 10>>     mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudBubblesRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudBubblesRenderer();
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
    enum class BubbleType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
