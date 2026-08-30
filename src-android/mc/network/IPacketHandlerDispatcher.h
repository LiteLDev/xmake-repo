#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketHandlerDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPacketHandlerDispatcher();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
