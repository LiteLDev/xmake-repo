#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ClientInputLockComponent;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mInputLockComponentData;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateClientInputLocksPacketPayload(::ClientInputLockComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientInputLockComponent const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
