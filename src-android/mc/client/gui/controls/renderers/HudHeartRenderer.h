#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class AttributeInstanceConstRef;
class IClientInstance;
class MinecraftUIRenderContext;
class Player;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHeartRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudHeartRenderer inner types declare
    // clang-format off
    struct SanitizedHealthData;
    struct HeartIconData;
    // clang-format on

    // HudHeartRenderer inner types define
    enum class HeartType : int {
        BACKGROUND        = 0,
        BACKGROUND_BLINK  = 1,
        FULL              = 2,
        FULL_POISON       = 3,
        FULL_WITHER       = 4,
        FULL_FROZEN       = 5,
        FULL_FLASH        = 6,
        FULL_POISON_FLASH = 7,
        FULL_WITHER_FLASH = 8,
        FULL_FROZEN_FLASH = 9,
        HALF              = 10,
        HALF_POISON       = 11,
        HALF_WITHER       = 12,
        HALF_FROZEN       = 13,
        HALF_FLASH        = 14,
        HALF_POISON_FLASH = 15,
        HALF_WITHER_FLASH = 16,
        HALF_FROZEN_FLASH = 17,
        FULL_ABSORPTION   = 18,
        HALF_ABSORPTION   = 19,
        COUNT             = 20,
    };

    struct SanitizedHealthData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mHealth;
        ::ll::TypedStorage<4, 4, int> mOldHealth;
        ::ll::TypedStorage<4, 4, int> mMaxHealth;
        ::ll::TypedStorage<4, 4, int> mAbsorption;
        // NOLINTEND
    };

    struct HeartIconData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::HudHeartRenderer::HeartType> mType;
        ::ll::TypedStorage<8, 8, ulong>                         mOffset;
        ::ll::TypedStorage<8, 8, ulong>                         mCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        HeartIconData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>                                                mShouldRender;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mBackgroundIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mFullFlashIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mHalfFlashIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mFullAbsorptionIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mHalfAbsorptionIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mFullIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>                  mHalfIcon;
    ::ll::TypedStorage<8, 640, std::array<mce::TexturePtr, 20>>                   mHeartTextures;
    ::ll::TypedStorage<8, 12320, std::array<mce::Mesh, 20>>                       mHeartMeshes;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHeartRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

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

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
