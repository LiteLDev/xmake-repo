#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientHitDetectListener.h"
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

class ClientHitDetectCoordinator : public ::EventCoordinator<ClientHitDetectListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientHitDetectCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendChangedHitResult(::HitResult&);

    MCNAPI void sendChangedPickHitResult(::HitResult&);

    MCNAPI void sendContinuousHitResult(::HitResult&);

    MCNAPI void sendContinuousPickHitResult(::HitResult&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
