#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInfo.h"

struct AvailableActorIdentifiersPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorInfo>> mIdentifierList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AvailableActorIdentifiersPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
