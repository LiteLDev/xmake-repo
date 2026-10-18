#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace Editor::ScriptModule::EditorServerBindingsModule::Betas {
// static variables
// NOLINTBEGIN
MCNAPI ::Scripting::Version const& CURRENT();
// NOLINTEND

} // namespace Editor::ScriptModule::EditorServerBindingsModule::Betas
#endif // @header-generator platform
