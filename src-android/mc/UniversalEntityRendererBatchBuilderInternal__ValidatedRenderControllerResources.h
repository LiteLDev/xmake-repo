#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BakedResourceOffsets;
struct GeometryData;
// clang-format on

namespace UniversalEntityRendererBatchBuilderInternal {

struct ValidatedRenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BakedResourceOffsets const*> mOffsets;
    ::ll::TypedStorage<8, 8, ::GeometryData const*>         mGeoData;
    // NOLINTEND
};

} // namespace UniversalEntityRendererBatchBuilderInternal
