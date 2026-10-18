#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IInventoryItemRendererRenderContext.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class BaseActorInventoryRenderContext : public ::IInventoryItemRendererRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorInventoryRenderContext& operator=(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseActorInventoryRenderContext();

    virtual void setHUDOpacity(float);

    virtual void renderGuiItemInChunk(::ItemRenderChunkType, ::ItemStack const&, float, float, float, float, float, int, bool, int, std::optional<TextureUVCoordinateSet> const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setHUDOpacity(float);

    MCNAPI void $renderGuiItemInChunk(
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IInventoryItemRendererRenderContext.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class BaseActorInventoryRenderContext : public ::IInventoryItemRendererRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorInventoryRenderContext& operator=(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setHUDOpacity(float opacity) /*override*/;

    virtual void renderGuiItemInChunk(
        ::ItemRenderChunkType                            itemRenderChunkType,
        ::ItemStack const&                               item,
        float                                            x,
        float                                            y,
        float                                            lightMultiplier,
        float                                            alphaMultiplier,
        float                                            scale,
        int                                              frame,
        bool                                             allowAnimation,
        int                                              zOrder,
        ::std::optional<::TextureUVCoordinateSet> const& customIconUVCoords
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setHUDOpacity(float opacity);

    MCAPI void $renderGuiItemInChunk(
        ::ItemRenderChunkType                            itemRenderChunkType,
        ::ItemStack const&                               item,
        float                                            x,
        float                                            y,
        float                                            lightMultiplier,
        float                                            alphaMultiplier,
        float                                            scale,
        int                                              frame,
        bool                                             allowAnimation,
        int                                              zOrder,
        ::std::optional<::TextureUVCoordinateSet> const& customIconUVCoords
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BaseActorInventoryRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform
