#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonSoundEventConditions.h"
#include "mc/client/gui/controls/SliderChangeSoundEventConditions.h"

union SoundEventConditions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8> button;
    ::ll::UntypedStorage<1, 8> slider;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::ButtonSoundEventConditions>       button;
    ::ll::TypedStorage<1, 8, ::SliderChangeSoundEventConditions> slider;
#endif // @header-generator platform
    // NOLINTEND
};
#else // @header-generator platform no-eol
#endif // @header-generator platform
