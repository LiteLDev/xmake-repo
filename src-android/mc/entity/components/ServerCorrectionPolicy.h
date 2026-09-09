#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/components/ReplayStateConfig.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

class ServerCorrectionPolicy : public ::IReplayStatePolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                 mLastCorrection;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mLastExternalCorrection;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>  mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCorrectionPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerCorrectionPolicy();

    virtual bool isReplayNeeded(::AdvanceFrameResult) const;

    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar const, bool);

    virtual void notifyOfExternalCorrection(ulong);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isReplayNeeded(::AdvanceFrameResult) const;

    MCNAPI ::MovementCorrection
    $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar const, bool);

    MCNAPI void $notifyOfExternalCorrection(ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
