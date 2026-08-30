#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerTickPolicy {
public:
    // IPlayerTickPolicy inner types define
    enum class TickAction : uchar {
        ProcessTick    = 0,
        StopProcessing = 1,
        SkipTick       = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerTickPolicy();

    virtual ulong getMaxTickCount(ulong, bool) const = 0;

    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(ulong, ulong) const = 0;

    virtual bool isStrictMovement() const = 0;

    virtual bool isStrictDismount() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
