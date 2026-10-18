#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum CharacterSelectorVisibility : uint {
    CSV_NotVisible         = 0,
    CSV_Preview_Cast_Modal = 1,
    CSV_Cast_Modal         = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CharacterSelectorVisibility : int {
    NotVisible       = 0,
    PreviewCastModal = 1,
    CastModal        = 2,
};
#else // @header-generator platform
enum class CharacterSelectorVisibility : int {};
#endif // @header-generator platform
#endif // @header-generator platform
