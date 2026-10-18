#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Input { struct BindingInfo; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::Input {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindGeneralInputBindingPriorityEnum();

MCNAPI bool operator==(::Editor::Input::BindingInfo const&, ::Editor::Input::BindingInfo const&);
// NOLINTEND

} // namespace Editor::Input
#endif // @header-generator platform
