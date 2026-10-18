#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
struct NpcDialogueScene;
// clang-format on

namespace NpcHelpers {
// functions
// NOLINTBEGIN
MCAPI ::NpcDialogueScene* tryGetScene(::WeakEntityRef const& entityRef, ::std::string const& scene);
// NOLINTEND

} // namespace NpcHelpers
#endif // @header-generator platform
