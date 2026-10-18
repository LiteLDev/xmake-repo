#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/RenderContextBase.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/RenderContextBase.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContextNull : public ::mce::RenderContextBase {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderContextNull : public ::mce::RenderContextBase {};
#else // @header-generator platform
class RenderContextNull {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
