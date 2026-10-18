#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BrightnessPair;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SubChunkBrightnessStorage {
public:
    // SubChunkBrightnessStorage inner types declare
    // clang-format off
    struct LightPair;
    // clang-format on

    // SubChunkBrightnessStorage inner types define
    struct LightPair {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 1> mField_41224c32;
#else // @header-generator platform
        union {
            struct {
                uchar blockLight : 4;
                uchar skyLight   : 4;
            };
            ::ll::TypedStorage<1, 1, uchar> raw;
        };
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2048, std::array<uchar, 2048>> mLightValues;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2048, ::std::array<uchar, 2048>> mLightValues;
#endif // @header-generator platform
    // NOLINTEND
};
