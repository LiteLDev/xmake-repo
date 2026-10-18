#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DynamicTexture : uchar {
    BrightnessTexture0           = 0,
    BrightnessTexture1           = 1,
    BrightnessTexture2           = 2,
    BrightnessTexture3           = 3,
    SeasonFoliageTexture         = 4,
    WeatherOcclusionTexture0     = 5,
    WeatherOcclusionTexture1     = 6,
    WeatherOcclusionTexture2     = 7,
    WeatherOcclusionTexture3     = 8,
    WeatherSnowOcclusionTexture0 = 9,
    WeatherSnowOcclusionTexture1 = 10,
    WeatherSnowOcclusionTexture2 = 11,
    WeatherSnowOcclusionTexture3 = 12,
    BiomeBlendingTexture0        = 13,
    BiomeBlendingTexture1        = 14,
    BiomeBlendingTexture2        = 15,
    BiomeBlendingTexture3        = 16,
    Skin                         = 17,
    LoadingScreen                = 18,
    LoadingScreenFont            = 19,
    Invalid                      = 20,
    JpegCommentWriter            = 21,
    _count                       = 22,
};
#else // @header-generator platform
enum class DynamicTexture : uchar {};
#endif // @header-generator platform

}
