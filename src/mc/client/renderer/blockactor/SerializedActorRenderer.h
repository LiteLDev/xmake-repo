#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class SerializedActorRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // SerializedActorRenderer inner types declare
    // clang-format off
    struct RenderData;
    // clang-format on

    // SerializedActorRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class RenderType : uchar {
        World     = 0,
        ItemFrame = 1,
        Hand      = 2,
        Gui       = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class RenderType : uchar {
        World     = 0,
        ItemFrame = 1,
        Hand      = 2,
        Gui       = 3,
    };
#else // @header-generator platform
    enum class RenderType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual ::SerializedActorRenderer::RenderData getRenderData(
        ::SerializedActorRenderer::RenderType type,
        ::BlockType const&                    block,
        ::SerializedActorBlockActor const*    entity,
        ::ItemStack const*                    item
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item,
        float                           x,
        float                           y,
        float                           scale,
        float                           lightMultiplier
    );

    MCAPI void renderInHand(
        ::BaseActorRenderContext&     renderContext,
        ::BlockActorRenderData const& blockEntityRenderData,
        ::ItemStack const&            item,
        bool                          isFirstPerson,
        bool                          isInHandItem
    );

    MCAPI void renderInItemFrame(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item,
        ::BlockSource&                  region,
        ::BlockPos const&               pos,
        bool                            ignoreLighting,
        ::Brightness                    lightEmission
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND
#else // @header-generator platform
    struct RenderData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
