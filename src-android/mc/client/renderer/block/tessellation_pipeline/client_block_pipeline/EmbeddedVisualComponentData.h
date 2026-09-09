#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ClientBlockPipeline {

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

} // namespace ClientBlockPipeline
