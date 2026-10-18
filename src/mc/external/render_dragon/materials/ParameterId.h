#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct ParameterId : public ::type_safe::strong_typedef<dragon::materials::ParameterId, ushort> {};
#else // @header-generator platform
struct ParameterId {};
#endif // @header-generator platform

} // namespace dragon::materials
