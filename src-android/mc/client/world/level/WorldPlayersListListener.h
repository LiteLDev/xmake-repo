#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

namespace World {

class WorldPlayersListListener : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayersListListener& operator=(WorldPlayersListListener const&);
    WorldPlayersListListener(WorldPlayersListListener const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayersListListener();

    virtual void playerListChanged();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
