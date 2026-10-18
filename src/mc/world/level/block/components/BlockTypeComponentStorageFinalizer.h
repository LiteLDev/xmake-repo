#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
namespace VoxelShapes { class VoxelShapeRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockTypeComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeCollisionBoxComponent(::BlockType&);
#else // @header-generator platform
    MCAPI void _finalizeCollisionBoxComponent(::BlockType& blockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeRedstoneProducerComponent(::BlockType&);
#else // @header-generator platform
    MCAPI void _finalizeRedstoneProducerComponent(::BlockType& blockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeSelectionBoxComponent(::BlockType&);
#else // @header-generator platform
    MCAPI void _finalizeSelectionBoxComponent(::BlockType& blockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRemainingComponents(::BlockType&);

    MCNAPI void finalizeComponentData(::BlockType&);

    MCNAPI void finalizeComponentDataForVoxelShapes(::BlockType&, ::VoxelShapes::VoxelShapeRegistry&);
#else // @header-generator platform
    MCAPI void addRemainingComponents(::BlockType& blockType);
#endif // @header-generator platform
    // NOLINTEND
};
