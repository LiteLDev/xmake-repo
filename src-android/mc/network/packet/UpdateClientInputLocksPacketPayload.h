#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ClientInputLockComponent;
// clang-format on

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mInputLockComponentData;
    // NOLINTEND

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
};
