#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Amplifier();
#else // @header-generator platform
    virtual ~Amplifier() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getAmount(int, float) const;
#else // @header-generator platform
    virtual float getAmount(int amplification, float scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldBuff(int, int) const;
#else // @header-generator platform
    virtual bool shouldBuff(int remainingDuration, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTickInterval(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int getTickInterval(int amplification) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getAmount(int, float) const;
#else // @header-generator platform
    MCFOLD float $getAmount(int amplification, float scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldBuff(int, int) const;
#else // @header-generator platform
    MCFOLD bool $shouldBuff(int remainingDuration, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getTickInterval(int) const;
#else // @header-generator platform
    MCFOLD int $getTickInterval(int amplification) const;


#endif // @header-generator platform
    // NOLINTEND
};
