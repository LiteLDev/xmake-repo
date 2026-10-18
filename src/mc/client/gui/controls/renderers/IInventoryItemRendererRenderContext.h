#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class IInventoryItemRendererRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IInventoryItemRendererRenderContext();

    virtual void setHUDOpacity(float) = 0;

    virtual void renderGuiItemInChunk(::ItemRenderChunkType, ::ItemStack const&, float, float, float, float, float, int, bool, int, std::optional<TextureUVCoordinateSet> const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class IInventoryItemRendererRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInventoryItemRendererRenderContext() = default;

    virtual void setHUDOpacity(float opacity) = 0;

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
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IInventoryItemRendererRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform
