#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/prefabs/PrefabInstanceErrorState.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {
// functions
// NOLINTBEGIN
MCNAPI void bindType(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::string toString(::Editor::Prefabs::PrefabInstanceErrorState state);
// NOLINTEND

} // namespace Editor::Prefabs
#endif // @header-generator platform
