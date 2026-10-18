#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_80::MusicComponentInternals {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> MUSIC_DEFINITION();

MCAPI ::std::add_lvalue_reference_t<char const[]> VOLUME_MULTIPLIER();
// NOLINTEND

} // namespace SharedTypes::v1_21_80::MusicComponentInternals
#endif // @header-generator platform
