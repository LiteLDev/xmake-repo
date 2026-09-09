#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
// clang-format on

namespace dragon::materials {

struct MaterialResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientResourcePointer<dragon::ResolvedMaterialResource>>> mMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                                           mUsed;
    // NOLINTEND
};

} // namespace dragon::materials
