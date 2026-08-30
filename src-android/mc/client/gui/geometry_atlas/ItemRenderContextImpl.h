#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IInventoryItemRenderContext.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class InventoryItemRenderer;
// clang-format on

namespace GeometryAtlas {

class ItemRenderContextImpl : public ::GeometryAtlas::details::IInventoryItemRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::InventoryItemRenderer&>  mRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRenderContextImpl& operator=(ItemRenderContextImpl const&);
    ItemRenderContextImpl(ItemRenderContextImpl const&);
    ItemRenderContextImpl();
};

} // namespace GeometryAtlas
