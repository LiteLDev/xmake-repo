#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> totalTime;
    ::ll::TypedStorage<4, 4, int> lastChange;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirtyTicksCounter();

    MCNAPI int getTicksSinceLastChange() const;

    MCNAPI int getTotalDirtyTicks() const;

    MCNAPI ::DirtyTicksCounter& operator++();

    MCNAPI void reset();

    MCNAPI void touch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DirtyTicksCounter max();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
