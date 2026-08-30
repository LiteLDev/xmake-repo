#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class BlockType;
class ItemStack;
class SerializedActorBlockActor;
class SerializedActorModel;
struct ActorTextureInfo;
struct BlockActorRenderData;
struct Brightness;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SerializedActorRenderer : public ::BlockActorRenderer {
public:
    // SerializedActorRenderer inner types declare
    // clang-format off
    struct RenderData;
    // clang-format on

    // SerializedActorRenderer inner types define
    enum class RenderType : uchar {
        World     = 0,
        ItemFrame = 1,
        Hand      = 2,
        Gui       = 3,
    };

    struct RenderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorTextureInfo const&> mTexture;
        ::ll::TypedStorage<8, 8, ::SerializedActorModel&>   mModel;
        ::ll::TypedStorage<4, 4, float>                     yOffset;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderData& operator=(RenderData const&);
        RenderData(RenderData const&);
        RenderData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual ::SerializedActorRenderer::RenderData getRenderData(::SerializedActorRenderer::RenderType, ::BlockType const&, ::SerializedActorBlockActor const*, ::ItemStack const*) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ItemStack const&,
        float,
        float,
        float,
        float
    );

    MCNAPI void renderInHand(::BaseActorRenderContext&, ::BlockActorRenderData const&, ::ItemStack const&, bool, bool);

    MCNAPI void renderInItemFrame(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ItemStack const&,
        ::BlockSource&,
        ::BlockPos const&,
        bool,
        ::Brightness const
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND
};
