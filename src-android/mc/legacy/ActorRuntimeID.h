#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> rawID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getHash() const;
    // NOLINTEND
};
