#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
struct BlockGeometryComponent;
// clang-format on

struct BlockComponentStorageFinalizerHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void finalizeBoneVisibility(::Block const&, ::BlockGeometryComponent*);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
struct BlockGeometryComponent;
// clang-format on

struct BlockComponentStorageFinalizerHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void finalizeBoneVisibility(::Block const& block, ::BlockGeometryComponent* geometryComponent);
    // NOLINTEND
};
#else // @header-generator platform
struct BlockComponentStorageFinalizerHelper {};
#endif // @header-generator platform
#endif // @header-generator platform
