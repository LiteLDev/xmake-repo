#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"

namespace NoiseUtils {

class DelegatingRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IRandom&> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const&);
    DelegatingRandom(DelegatingRandom const&);
    DelegatingRandom();
};

} // namespace NoiseUtils
