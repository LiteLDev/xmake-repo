#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class IndexBufferResourceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
struct IndexSpanRegistry : public ::dragon::mesh::SpanRegistry<dragon::mesh::IndexSpanType> {};
#else // @header-generator platform
struct IndexSpanRegistry {};
#endif // @header-generator platform

} // namespace dragon::mesh
