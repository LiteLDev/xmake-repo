#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MissingBlobData.h"

struct ClientCacheMissResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MissingBlobData>> mBlobs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientCacheMissResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
