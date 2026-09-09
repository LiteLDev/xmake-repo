#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ShieldModel.h"
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class ItemStack;
class LevelData;
class ResourceLoadManager;
class ResourcePackManager;
class ScreenContext;
class TextureAtlas;
namespace dragon { struct RenderMetadata; }
namespace mce { class Color; }
namespace mce { class PatternConstants; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class ShieldRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 872, ::ShieldModel>               mShieldModel;
    ::ll::TypedStorage<1, 1, bool>                          mGeometryOverridden;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mGuiBannerShieldMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mGuiGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mGuiGlintBannerShieldMaterial;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureAtlas>> mTextureAtlas;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>            mShieldPatternAtlasTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>            mShieldTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    ShieldRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShieldRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::glm::vec<4, float, (glm::qualifier)0> _getTextureUVAndScale(std::string const&) const;

    MCNAPI void _setupTextureAtlas(
        std::shared_ptr<mce::TextureGroup>,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>
    );

    MCNAPI bool isItemPatterned(::ItemStack const&, ::LevelData const&);

    MCNAPI void renderByItem(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::ItemStack const&);

    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ItemStack const&,
        float,
        float,
        float,
        float,
        bool
    );

    MCNAPI void setupPatternShaderParameters(::ScreenContext&, ::ItemStack const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<ShieldRenderer> createInstance(
        std::shared_ptr<ActorResourceDefinition> const,
        std::shared_ptr<mce::TextureGroup>,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& SHIELD_PATTERN_DIRECTORY();

    MCNAPI static std::string const& SHIELD_TEXTURE_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
