#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/SaveContext.h"

// auto generated forward declare list
// clang-format off
class SaveContext;
// clang-format on

namespace SaveContextFactory {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::SaveContext> createCloneSaveContext();
// NOLINTEND

} // namespace SaveContextFactory
#endif // @header-generator platform
