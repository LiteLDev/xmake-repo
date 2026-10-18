#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class VertexDeclManager; }
namespace dragon::mesh { struct IndexSpanRegistry; }
namespace dragon::mesh { struct VertexSpanRegistry; }
// clang-format on

namespace dragon {

struct DragonBufferResourceServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<dragon::mesh::VertexDeclManager*>>  mVertexDeclManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<dragon::mesh::VertexSpanRegistry*>> mVertexSpanStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<dragon::mesh::IndexSpanRegistry*>>  mIndexSpanStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonBufferResourceServiceContext();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
