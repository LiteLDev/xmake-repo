#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

namespace VibrationListenerUtils {
// functions
// NOLINTBEGIN
MCNAPI int getGameEventFrequency(::GameEvent const& gameEvent);

MCNAPI bool
ignoreVibrationIfSneaking(::BlockSource&, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);
// NOLINTEND

} // namespace VibrationListenerUtils
#endif // @header-generator platform
