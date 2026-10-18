#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MultiplayerLockState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplayerLockState() = default;

    virtual bool isLocked() const;

    virtual void setLockedByBehaviorPack(bool isLocked);

    virtual void setLockedByResourcePack(bool isLocked);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isLocked() const;

    MCFOLD void $setLockedByBehaviorPack(bool isLocked);

    MCFOLD void $setLockedByResourcePack(bool isLocked);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MultiplayerLockState {};
#endif // @header-generator platform
#endif // @header-generator platform
