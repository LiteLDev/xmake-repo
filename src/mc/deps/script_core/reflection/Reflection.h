#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {
// functions
// NOLINTBEGIN
MCNAPI bool HasBaseType(::entt::meta_type const& baseAnyType, ::entt::meta_type const& derivedAnyType);
// NOLINTEND

} // namespace Scripting::Reflection
#endif // @header-generator platform
