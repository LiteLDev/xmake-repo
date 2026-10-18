#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace cg {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, ::cg::viewport::details::CoordinateContext T1>
#else // @header-generator platform
template <typename T0, int T1>
#endif // @header-generator platform
struct Viewport {};

} // namespace cg
