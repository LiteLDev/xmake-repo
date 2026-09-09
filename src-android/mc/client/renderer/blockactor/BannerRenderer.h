#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureInfo;
class BannerModel;
class BaseActorRenderContext;
class BlockActor;
class ItemStack;
class ResourceLoadManager;
class ResourcePackManager;
class TextureAtlas;
struct BlockActorRenderData;
struct TextureAtlasItemTextureSetTranslation;
namespace dragon { struct RenderMetadata; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class BannerRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mAtlasLoaded;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureAtlas>>           mTextureAtlas;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mMaxTileSize;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mTexture;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BannerModel>>            mBannerModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mGuiPoleMaterial;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                  mExistanceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setConstants(::BaseActorRenderContext&, int, std::string, ::mce::Color const&) const;

    MCNAPI void _setupBannerConstants(::BaseActorRenderContext&, ::BlockActor&);

    MCNAPI void
    renderByItem(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::ItemStack const&, bool const);

    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::BlockActor&,
        float,
        float,
        float,
        bool,
        float
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& BANNER_DIRECTORY();

    MCNAPI static std::string_view const& ILLAGER_IMAGE_PATH();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
