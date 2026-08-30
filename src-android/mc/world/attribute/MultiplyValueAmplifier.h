#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class MultiplyValueAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mScalar;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplyValueAmplifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplyValueAmplifier();

    virtual float getAmount(int, float) const;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
