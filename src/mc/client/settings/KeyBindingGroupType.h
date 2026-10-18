#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::KeyboardAndMouseSettingsDetails {

#if defined(LL_PLAT_A) // @header-generator platform
enum class KeyBindingGroupType : int {
    Normal = 0,
    Chord  = 1,
    Macro  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class KeyBindingGroupType : int {
    Normal = 0,
    Chord  = 1,
    Macro  = 2,
};
#else // @header-generator platform
enum class KeyBindingGroupType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
