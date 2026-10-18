#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/noise_utils/DelegatingRandom.h"

namespace NoiseUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {};
#else // @header-generator platform
class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float nextFloat() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $nextFloat();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace NoiseUtils
