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
class Zoom2xFuzzy : public ::OperationNodeZooms::ZoomBase<1, (OperationNodeZooms::Alignment)0> {};
#else // @header-generator platform
class Zoom2xFuzzy : public ::OperationNodeZooms::ZoomBase<1, 0> {};
#endif // @header-generator platform

} // namespace OperationNodeZooms
