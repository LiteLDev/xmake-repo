#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/newbiome/operation_node_zooms/Alignment.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_zooms/ZoomBase.h"

namespace OperationNodeZooms {

#if defined(LL_PLAT_A) // @header-generator platform
class Zoom4xVoronoi : public ::OperationNodeZooms::ZoomBase<2, (OperationNodeZooms::Alignment)1> {};
#else // @header-generator platform
class Zoom4xVoronoi : public ::OperationNodeZooms::ZoomBase<2, 1> {};
#endif // @header-generator platform

} // namespace OperationNodeZooms
