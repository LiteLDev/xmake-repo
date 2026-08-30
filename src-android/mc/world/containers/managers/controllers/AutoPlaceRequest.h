#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ItemTransferRequest.h"

struct AutoPlaceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                    mUnplacedAmount;
    ::ll::TypedStorage<8, 48, ::ItemTransferRequest> mRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutoPlaceRequest();

    MCNAPI ~AutoPlaceRequest();
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
};
