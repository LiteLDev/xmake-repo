#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
struct ItemRendererData;
// clang-format on

namespace ItemRendererDataHelpers {
// functions
// NOLINTBEGIN
MCAPI void setItemRendererBindings(::ItemRendererData& itemData, ::ItemStackBase const& item);
// NOLINTEND

} // namespace ItemRendererDataHelpers
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
