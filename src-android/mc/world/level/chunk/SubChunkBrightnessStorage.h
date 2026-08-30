#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BrightnessPair;
// clang-format on

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
        ::ll::UntypedStorage<1, 1> mField_41224c32;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2048, std::array<uchar, 2048>> mLightValues;
    // NOLINTEND
};
