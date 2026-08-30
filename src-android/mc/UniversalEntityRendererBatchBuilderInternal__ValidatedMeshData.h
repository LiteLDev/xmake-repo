#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MeshResource;
namespace mce { class MaterialPtr; }
// clang-format on

namespace UniversalEntityRendererBatchBuilderInternal {

struct ValidatedMeshData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MeshResource const*>     mMeshResource;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mMaterial;
    // NOLINTEND
};

} // namespace UniversalEntityRendererBatchBuilderInternal
