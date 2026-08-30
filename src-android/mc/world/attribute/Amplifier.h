#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Amplifier();

    virtual float getAmount(int, float) const;

    virtual bool shouldBuff(int, int) const;

    virtual int getTickInterval(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getAmount(int, float) const;

    MCNAPI bool $shouldBuff(int, int) const;

    MCNAPI int $getTickInterval(int) const;
    // NOLINTEND
};
