#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
