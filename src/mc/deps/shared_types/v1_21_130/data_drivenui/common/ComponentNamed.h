#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::DataDrivenUI {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, auto T1, char const* T2>
#else // @header-generator platform
#endif // @header-generator platform
struct ComponentNamed {};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
