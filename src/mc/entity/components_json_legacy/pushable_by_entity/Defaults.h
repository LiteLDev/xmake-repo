#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PushablePreset;
// clang-format on

namespace PushableByEntity::Defaults {
// static variables
// NOLINTBEGIN
MCAPI ::PushablePreset const& BOAT_PRESET();

MCAPI ::PushablePreset const& DEFAULT_PRESET_WITHOUT_OVERLAP_CHECK();

MCAPI ::PushablePreset const& DEFAULT_PRESET_WITH_OVERLAP_CHECK();

MCAPI ::PushablePreset const& MINECART_PRESET();
// NOLINTEND

} // namespace PushableByEntity::Defaults
#endif // @header-generator platform
