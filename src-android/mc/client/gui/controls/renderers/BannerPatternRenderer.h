#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class BannerPatternRenderer : public ::MinecraftUICustomRenderer, public ::ActorShaderManager {
public:
    // BannerPatternRenderer inner types declare
    // clang-format off
    struct BannerPatternTextureInfo;
    // clang-format on

    // BannerPatternRenderer inner types define
    struct BannerPatternTextureInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mTexture;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVScale;
        // NOLINTEND

    public:
        // prevent constructor by default
        BannerPatternTextureInfo& operator=(BannerPatternTextureInfo const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mHasLoadedTextures;
    ::ll::TypedStorage<8, 24, std::vector<BannerPatternRenderer::BannerPatternTextureInfo>> mTextures;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>>                                      mColors;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerPatternRenderer();

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
