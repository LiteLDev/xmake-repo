#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/TransientResourceReference.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framegraph::detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct TransientImageReference : public ::dragon::framegraph::detail::TransientResourceReference {};
#else // @header-generator platform
struct TransientImageReference {};
#endif // @header-generator platform

} // namespace dragon::framegraph::detail
