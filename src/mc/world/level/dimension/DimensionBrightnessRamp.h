#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, float[16]> mBrightnessRamp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DimensionBrightnessRamp();
#else // @header-generator platform
    virtual ~DimensionBrightnessRamp() = default;
#endif // @header-generator platform

    virtual void buildBrightnessRamp();

    virtual float getBaseAmbientValue() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI float getBrightnessRampValue(int const) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildBrightnessRamp();
#else // @header-generator platform
    MCAPI void $buildBrightnessRamp();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBaseAmbientValue() const;
#else // @header-generator platform
    MCFOLD float $getBaseAmbientValue() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
