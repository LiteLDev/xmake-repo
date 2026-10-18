#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class VertexBufferResourceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexSpanRegistry : public ::dragon::mesh::SpanRegistry<dragon::mesh::VertexSpanType> {};
#else // @header-generator platform
struct VertexSpanRegistry {};
#endif // @header-generator platform

} // namespace dragon::mesh
