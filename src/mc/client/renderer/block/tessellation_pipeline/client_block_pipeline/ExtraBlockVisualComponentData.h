#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct ExtraBlockVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtraBlockVisualComponentData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ExtraBlockVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
    // NOLINTEND
};
#else // @header-generator platform
struct ExtraBlockVisualComponentData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
