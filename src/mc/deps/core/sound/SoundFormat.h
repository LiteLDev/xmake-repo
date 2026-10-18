#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SoundFormat : int {
    SOUND_FORMAT_NONE      = 0,
    SOUND_FORMAT_PCM8      = 1,
    SOUND_FORMAT_PCM16     = 2,
    SOUND_FORMAT_PCM24     = 3,
    SOUND_FORMAT_PCM32     = 4,
    SOUND_FORMAT_PCMFLOAT  = 5,
    SOUND_FORMAT_BITSTREAM = 6,
};
#else // @header-generator platform
enum class SoundFormat : int {};
#endif // @header-generator platform
