#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/client/world/level/block/components/ClientBlockComponentStorage.h"
#include "mc/platform/brstd/once_flag.h"

// auto generated forward declare list
// clang-format off
class Block;
class Matrix;
struct BlockBakedEmbeddedVisualComponent;
struct BlockBakedItemVisualComponent;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
struct BlockItemVisualComponent;
// clang-format on

class ClientBlockComponentDirectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockItemVisualComponent const*> mBlockItemVisualComponent;
    ::ll::TypedStorage<8, 24, ::ClientBlockComponentStorage>    mStorage;
    ::ll::TypedStorage<4, 4, ::brstd::once_flag>                mInitializedFlag;
    // NOLINTEND
};
#else // @header-generator platform
class ClientBlockComponentDirectData {};
#endif // @header-generator platform
