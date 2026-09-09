#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/world/level/ITickDeltaTimeManagerProxy.h"

class TickDeltaTimeManagerProxy : public ::ITickDeltaTimeManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Stopwatch> mTickTimer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickDeltaTimeManagerProxy();

    virtual void start();

    virtual double calculateDeltaTimeAndReset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickDeltaTimeManagerProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI double $calculateDeltaTimeAndReset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
