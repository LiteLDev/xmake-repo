#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace LoopingSoundUtil {
// functions
// NOLINTBEGIN
MCNAPI void registerRidingLoopingSound(::Actor const& actor, uint64& soundHandle, ::std::string const& loopingSound);
// NOLINTEND

} // namespace LoopingSoundUtil
#endif // @header-generator platform
