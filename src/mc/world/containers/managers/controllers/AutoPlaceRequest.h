#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ItemTransferRequest.h"
#else // @header-generator platform
#endif // @header-generator platform

struct AutoPlaceRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                    mUnplacedAmount;
    ::ll::TypedStorage<8, 48, ::ItemTransferRequest> mRequest;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkef62a6;
    ::ll::UntypedStorage<8, 48> mUnk82dfb4;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    AutoPlaceRequest& operator=(AutoPlaceRequest const&);
    AutoPlaceRequest(AutoPlaceRequest const&);
    AutoPlaceRequest();
#endif // @header-generator platform
};
