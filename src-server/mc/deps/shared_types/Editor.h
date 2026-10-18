#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Editor {
// static variables
// NOLINTBEGIN
MCAPI ::std::string_view const& CEREAL_EDITOR_SCHEMA();
// NOLINTEND

} // namespace SharedTypes::Editor
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
