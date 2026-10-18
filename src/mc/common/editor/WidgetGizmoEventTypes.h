#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Widgets::WidgetGizmoEventTypes {
// functions
// NOLINTBEGIN
MCNAPI void bindTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Editor::Widgets::WidgetGizmoEventTypes
#endif // @header-generator platform
