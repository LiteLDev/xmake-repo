#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {
// functions
// NOLINTBEGIN
MCAPI void bindFilters(::Scripting::ModuleBindingBuilder& moduleBuilder);
// NOLINTEND

} // namespace ScriptModuleMinecraft::EventFilters
#endif // @header-generator platform
