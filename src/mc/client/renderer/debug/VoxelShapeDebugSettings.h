#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/debug/BlockVoxelShapeType.h"
#include "mc/deps/shared_types/legacy/Facing.h"

struct VoxelShapeDebugSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<BlockVoxelShapeType>> mDrawAroundVoxelShapeType;
    ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mDrawAroundFaceShapeFacing;
    ::ll::TypedStorage<4, 4, int>                                mDrawRadius;
    // NOLINTEND
};
#else // @header-generator platform
struct VoxelShapeDebugSettings {};
#endif // @header-generator platform
