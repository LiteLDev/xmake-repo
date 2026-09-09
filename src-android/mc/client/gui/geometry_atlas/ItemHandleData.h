#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

struct ItemHandleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                     mBag;
    ::ll::UntypedStorage<8, 64>                     mVisitItem;
    ::ll::TypedStorage<8, 8, ulong>                 mHash;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType> mRenderType;
    ::ll::TypedStorage<1, 1, bool>                  mIsAnimated;
    // NOLINTEND
};

} // namespace GeometryAtlas
