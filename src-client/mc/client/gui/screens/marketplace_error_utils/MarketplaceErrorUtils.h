#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace MarketplaceErrorUtils { struct StoreErrorResult; }
// clang-format on

namespace MarketplaceErrorUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::MarketplaceErrorUtils::StoreErrorResult>
tryGetStoreErrorResult(::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel);
// NOLINTEND

} // namespace MarketplaceErrorUtils
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
