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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IReplayStatePolicy();
#else // @header-generator platform
    virtual ~IReplayStatePolicy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isReplayNeeded(::AdvanceFrameResult) const = 0;
#else // @header-generator platform
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar, bool) = 0;
#else // @header-generator platform
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyOfExternalCorrection(ulong) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void notifyOfExternalCorrection(uint64 frame) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
