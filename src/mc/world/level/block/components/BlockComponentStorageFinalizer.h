#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
namespace VoxelShapes { class VoxelShapeRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForCollisionComponentBoxDuplication(::Block&);
#else // @header-generator platform
    MCAPI void _checkForCollisionComponentBoxDuplication(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block& block);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForMissingCullingComponentForMaterialOverride(::Block&);
#else // @header-generator platform
    MCAPI void _checkForMissingCullingComponentForMaterialOverride(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForMissingGeometryComponent(::Block&);
#else // @header-generator platform
    MCAPI void _checkForMissingGeometryComponent(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForSelectionBoxComponentDuplication(::Block&);
#else // @header-generator platform
    MCAPI void _checkForSelectionBoxComponentDuplication(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeCollisionBoxComponent(::Block&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _finalizeBlockTriggerComponents(::Block& block);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeSelectionBoxComponent(::Block&);
#else // @header-generator platform
    MCAPI void _finalizeCollisionBoxComponent(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRemainingComponents(::Block&);
#else // @header-generator platform
    MCAPI void _finalizeSelectionBoxComponent(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeComponentData(::Block&);
#else // @header-generator platform
    MCAPI void addRemainingComponents(::Block& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeComponentDataForVoxelShapes(::Block&, ::VoxelShapes::VoxelShapeRegistry&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void finalizeComponentData(::Block& block);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
