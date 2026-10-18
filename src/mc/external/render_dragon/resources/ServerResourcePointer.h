#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#endif // @header-generator platform

namespace mce {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class ServerResourcePointer {};
#else // @header-generator platform
class ServerResourcePointer : public ::mce::ResourcePointer<T0> {};
#endif // @header-generator platform

} // namespace mce
