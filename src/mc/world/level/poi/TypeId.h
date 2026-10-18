#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

#if defined(LL_PLAT_A) // @header-generator platform
enum TypeId : ushort {};
#else // @header-generator platform
enum class TypeId : ushort {};
#endif // @header-generator platform

}
