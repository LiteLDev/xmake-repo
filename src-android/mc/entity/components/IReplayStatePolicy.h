#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

struct IReplayStatePolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IReplayStatePolicy();

    virtual bool isReplayNeeded(::AdvanceFrameResult) const = 0;

    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar, bool) = 0;

    virtual void notifyOfExternalCorrection(ulong) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
