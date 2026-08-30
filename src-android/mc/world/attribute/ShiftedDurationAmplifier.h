#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mShiftedValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ShiftedDurationAmplifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShiftedDurationAmplifier();

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
    MCNAPI bool $shouldBuff(int, int) const;

    MCNAPI int $getTickInterval(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
