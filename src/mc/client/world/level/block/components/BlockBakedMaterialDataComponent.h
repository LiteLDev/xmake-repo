#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/BakedMaterialMap.h"

struct BlockBakedMaterialDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::ClientBlockPipeline::BakedMaterialMap> mBakedMaterials;
    ::ll::TypedStorage<1, 1, bool>                                     mIsSolidOpaque;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isSolidOpaque() const;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockBakedMaterialDataComponent {};
#endif // @header-generator platform
