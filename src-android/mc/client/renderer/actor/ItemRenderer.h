#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/FitToFrame.h"
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/IconBlitGlint.h"
#include "mc/client/renderer/actor/ItemGraphics.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BannerBlockActor;
class BaseActorRenderContext;
class Block;
class BlockGraphics;
class BlockTessellator;
class BlockType;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class Item;
class ItemActor;
class ItemStack;
class Matrix;
class ScreenContext;
class ShulkerBoxBlockActor;
class SkullBlockActor;
class Tessellator;
struct TextureUVCoordinateSet;
namespace dragon { struct RenderMetadata; }
namespace mce { class MeshData; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class ItemRenderer : public ::ActorRenderer {
public:
    // ItemRenderer inner types declare
    // clang-format off
    struct GuiItemPopTransform;
    struct GuiBlockDefaultTransform;
    // clang-format on

    // ItemRenderer inner types define
    struct GuiItemPopTransform {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> translation;
        ::ll::TypedStorage<4, 4, float>   scaleX;
        ::ll::TypedStorage<4, 4, float>   scaleY;
        // NOLINTEND
    };

    struct GuiBlockDefaultTransform {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTessellator>>        mBlockTessellator;
    ::ll::TypedStorage<4, 64, float[16]>                               mRandomFloats;
    ::ll::TypedStorage<8, 40, std::unordered_map<short, ItemGraphics>> mItemGraphics;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIBlitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIIconBlitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIIconBlitMaterialMultiColorTint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIIconUnblitMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIIconBlitGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mEntityAlphatestChangeColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mEntityAlphatestChangeColorGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mEntityAlphatestMultiColorTintMaterial;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BannerBlockActor>>        mBannerEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DecoratedPotBlockActor>>  mDecoratedPotBlockEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkullBlockActor>>         mSkullEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConduitBlockActor>>       mConduitEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ShulkerBoxBlockActor>>    mShulkerBoxEntity;
    ::ll::TypedStorage<1, 1, bool>                                     mSupportsNewVertexFormat;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRenderer(std::shared_ptr<mce::TextureGroup>, bool);

    MCNAPI void _getGuiItemColors(::ItemStack const&, int&, int&) const;

    MCNAPI void _renderBannerItem(::BaseActorRenderContext&, ::ItemStack const&, ::ItemActor&, bool, float);

    MCNAPI void _renderBlockItem(
        ::BaseActorRenderContext&,
        ::ItemStack const&,
        ::ItemActor&,
        ::BlockType const*,
        ::BlockShape const,
        float,
        int
    );

    MCNAPI void _renderDecoratedPotItem(::BaseActorRenderContext&, ::ItemStack const&, ::ItemActor&, bool);

    MCNAPI void _renderGuiBlockTypeItem(
        ::BaseActorRenderContext&,
        ::ItemStack const&,
        ::BlockGraphics const*,
        ::mce::TexturePtr const&,
        float,
        float,
        float,
        float,
        float,
        float const
    );

    MCNAPI void _renderGuiDataDrivenBlockItem(
        ::BaseActorRenderContext&,
        ::Block const*,
        float,
        float,
        float,
        float const,
        int const
    );

    MCNAPI bool _renderGuiEntityBlockItem(
        ::BaseActorRenderContext&,
        ::ItemRenderChunkType,
        ::dragon::RenderMetadata const,
        ::ItemStack const&,
        float,
        float,
        float,
        float
    );

    MCNAPI void _renderItemGroup(::BaseActorRenderContext&, ::ItemActor&, int, float, float, bool const) const;

    MCNAPI void _renderShieldItem(::BaseActorRenderContext&, ::ItemStack const&, ::ItemActor&, float);

    MCNAPI void clearDataDrivenRenderers();

    MCNAPI void forceGraphicsLoad();

    MCNAPI ::ItemGraphics& getGraphics(::ItemStack const&);

    MCNAPI void iconBlit(
        ::BaseActorRenderContext&,
        ::mce::TexturePtr const&,
        float,
        float,
        float,
        ::TextureUVCoordinateSet const&,
        float,
        float,
        float,
        float,
        int,
        int,
        float,
        float,
        ::IconBlitGlint const,
        bool const
    );

    MCNAPI void renderGuiItemInChunk(
        ::BaseActorRenderContext&,
        ::ItemRenderChunkType,
        ::ItemStack const&,
        float,
        float,
        float,
        float,
        float,
        int,
        bool,
        int,
        std::optional<TextureUVCoordinateSet> const&
    );

    MCNAPI void
    renderGuiItemNew(::BaseActorRenderContext&, ::ItemStack const&, int, float, float, bool, float, float, float, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemRenderer::GuiItemPopTransform computeGuiItemPopTransform(float, float, float, float);

    MCNAPI static float getRenderYOffset(::ItemActor const&, ::BlockType const*, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, bool);
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
