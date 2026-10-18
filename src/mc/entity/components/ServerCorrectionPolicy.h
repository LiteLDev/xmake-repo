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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                 mLastCorrection;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mLastExternalCorrection;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>  mConfig;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                   mLastCorrection;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastExternalCorrection;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>     mConfig;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerCorrectionPolicy();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerCorrectionPolicy();
#else // @header-generator platform
    virtual ::MovementCorrection shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isReplayNeeded(::AdvanceFrameResult) const;
#else // @header-generator platform
    virtual bool isReplayNeeded(::AdvanceFrameResult) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar const, bool);

    virtual void notifyOfExternalCorrection(ulong);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void notifyOfExternalCorrection(uint64 frame) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isReplayNeeded(::AdvanceFrameResult) const;
#else // @header-generator platform
    MCAPI ::MovementCorrection $shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MovementCorrection
    $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, ulong, uchar const, bool);
#else // @header-generator platform
    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyOfExternalCorrection(ulong);
#else // @header-generator platform
    MCAPI void $notifyOfExternalCorrection(uint64 frame);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
