#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft::Internals {
// static variables
// NOLINTBEGIN
MCAPI ::Scripting::Version const& CURRENT();
// NOLINTEND

} // namespace ScriptModuleMinecraft::Internals
#endif // @header-generator platform
