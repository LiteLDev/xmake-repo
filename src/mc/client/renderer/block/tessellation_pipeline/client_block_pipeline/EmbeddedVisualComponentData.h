#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/level/block/components/BlockEmbeddedVisualComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BlockBakedEmbeddedVisualComponent;
struct BlockBakedMaterialDataComponent;
struct BlockEmbeddedVisualComponent;
struct BlockGeometryComponent;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/level/block/components/BlockEmbeddedVisualComponent.h"

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
struct EmbeddedVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
    ::ll::UntypedStorage<1, 1>                                         mCorrection;
    ::ll::TypedStorage<4, 64, ::Matrix const>                          mTransform;
    // NOLINTEND

public:
    // prevent constructor by default
    EmbeddedVisualComponentData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EmbeddedVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>            mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*>   mBakedBlockMaterialData;
    ::ll::TypedStorage<1, 1, ::BlockEmbeddedVisualComponent::Correction> mCorrection;
    ::ll::TypedStorage<4, 64, ::Matrix const>                            mTransform;
    // NOLINTEND
};
#else // @header-generator platform
struct EmbeddedVisualComponentData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
