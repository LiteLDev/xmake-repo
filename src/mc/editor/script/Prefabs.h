#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace Editor::ScriptModule::Prefabs {
// functions
// NOLINTBEGIN
MCNAPI void bindPrefabScriptErrors(::Scripting::ModuleBindingBuilder& builder);

MCNAPI void bindPrefabTypes(::Scripting::ModuleBindingBuilder& builder);
// NOLINTEND

} // namespace Editor::ScriptModule::Prefabs
#endif // @header-generator platform
