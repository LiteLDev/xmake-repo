#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/CreateMaterialBaseTransaction.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct MaterialDescription; }
// clang-format on

namespace dragon {

struct CreateMaterialTransaction : public ::dragon::details::CreateMaterialBaseTransaction {
public:
    // prevent constructor by default
    CreateMaterialTransaction& operator=(CreateMaterialTransaction const&);
    CreateMaterialTransaction(CreateMaterialTransaction const&);
    CreateMaterialTransaction();
};

} // namespace dragon
