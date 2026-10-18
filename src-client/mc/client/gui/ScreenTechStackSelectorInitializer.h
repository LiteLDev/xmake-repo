#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace ui::ScreenTechStackSelectorInitializer {
// functions
// NOLINTBEGIN
MCAPI void initialize(
    ::ui::ScreenTechStackSelector& screenTechStackSelector,
    ::IOptionRegistry&             options,
    bool                           isEditorEnabled,
    bool                           isEduMode,
    ::std::function<bool()>        isTrial,
    ::std::function<bool()>        isRealmsEditWorldFeatureOn
);
// NOLINTEND

} // namespace ui::ScreenTechStackSelectorInitializer
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
