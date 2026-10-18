#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest::tags {
// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& SuiteAll();

MCNAPI ::std::string const& SuiteDefault();

MCNAPI ::std::string const& SuiteDisabled();
// NOLINTEND

} // namespace gametest::tags
#endif // @header-generator platform
