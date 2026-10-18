#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor::LogTags {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::HashedString const& CONTENT_LOG();
#endif

MCNAPI ::HashedString const& EDITOR();
// NOLINTEND

} // namespace Editor::LogTags
#endif // @header-generator platform
