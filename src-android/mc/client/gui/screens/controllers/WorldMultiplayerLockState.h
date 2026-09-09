#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

class WorldMultiplayerLockState : public ::MultiplayerLockState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldMultiplayerLockState& operator=(WorldMultiplayerLockState const&);
    WorldMultiplayerLockState(WorldMultiplayerLockState const&);
    WorldMultiplayerLockState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldMultiplayerLockState();

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
