#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
// clang-format on

namespace DefaultPlayerNameValidator {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::std::string>
validatePlayerName(::std::string const& originalName, ::GameplayUserManager const& gameplayUserManager);
// NOLINTEND

} // namespace DefaultPlayerNameValidator
#endif // @header-generator platform
