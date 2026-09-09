#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/flat_map.h"

class PlayerLocationReceiver {
public:
    // PlayerLocationReceiver inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    // clang-format on

    // PlayerLocationReceiver inner types define
    struct ActorUniqueIDCompare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCurrentPlayerLocationData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void hideAllPlayers();

    MCNAPI void hidePlayer(::ActorUniqueID const&);

    MCNAPI void updatePlayer(::ActorUniqueID const&, ::Vec3 const&);
    // NOLINTEND
};
