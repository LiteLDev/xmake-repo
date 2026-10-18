#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/block/components/BlockBakedMaterialDataComponent.h"

struct BlockBakedEmbeddedVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::BlockBakedMaterialDataComponent> mBakedBlockMaterialData;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockBakedEmbeddedVisualComponent {};
#endif // @header-generator platform
