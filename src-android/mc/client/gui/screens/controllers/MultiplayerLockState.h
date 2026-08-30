#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplayerLockState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplayerLockState();

    virtual bool isLocked() const;

    virtual void setLockedByBehaviorPack(bool);

    virtual void setLockedByResourcePack(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isLocked() const;

    MCNAPI void $setLockedByBehaviorPack(bool);

    MCNAPI void $setLockedByResourcePack(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
