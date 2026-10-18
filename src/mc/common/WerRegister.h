#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WerRegister {
// functions
// NOLINTBEGIN
MCNAPI long callWerRegisterCustomMetadata(::std::string const& key, ::std::string const& data);
// NOLINTEND

} // namespace WerRegister
#endif // @header-generator platform
