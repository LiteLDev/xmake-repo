#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule::RenderHelper {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindPrimitiveTypeEnums();

MCNAPI ::Scripting::EnumBinding bindSplineEnums();
// NOLINTEND

} // namespace Editor::ScriptModule::RenderHelper
#endif // @header-generator platform
