#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorHistory;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class PlayerAuthInputPacket;
#else // @header-generator platform
#endif // @header-generator platform
struct IMovementCorrection;
struct IReplayStatePolicy;
struct IReplayableActorInput;
#if defined(LL_PLAT_A) // @header-generator platform
struct MovementCorrection;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ReplayStateComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                mForceCorrection;
    ::ll::TypedStorage<1, 1, bool>                                mShouldReportNextCorrectionTelemetry;
    ::ll::TypedStorage<1, 1, bool>                                mIsCorrectionTelemetryEnabled;
    ::ll::TypedStorage<1, 1, uchar>                               mDivergenceCounter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorHistory>>       mHistory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IReplayStatePolicy>> mPolicy;
    ::ll::TypedStorage<8, 8, ulong>                               mCurrentTick;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mForceCorrection;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldReportNextCorrectionTelemetry;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCorrectionTelemetryEnabled;
    ::ll::TypedStorage<1, 1, uchar>                                   mDivergenceCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorHistory>>       mHistory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayStatePolicy>> mPolicy;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ReplayStateComponent(::ReplayStateComponent&&);
#else // @header-generator platform
    MCAPI ::AdvanceFrameResult _applyCorrection(
        ::std::shared_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actor,
        uint64                                   destinationTimestamp,
        bool                                     addInput
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ReplayStateComponent(std::unique_ptr<ActorHistory>, std::unique_ptr<IReplayStatePolicy>);
#else // @header-generator platform
    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(::Actor& actor, ::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AdvanceFrameResult _applyCorrection(std::shared_ptr<IMovementCorrection>, ::Actor&, ulong, bool) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::IReplayableActorInput* getCurrentCapturedInput();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHistory const* _getHistory() const;

    MCNAPI bool _shouldReportCorrectionTelemetry() const;

    MCNAPI void advanceHistory(::EntityContext*);

    MCNAPI void advanceTick(ulong);

    MCNAPI ::ReplayCorrectionResult applyFrameCorrection(::Actor&, std::shared_ptr<IMovementCorrection>, ulong);

    MCNAPI void clearHistory();

    MCNAPI void disableNextCorrectionTelemetry();

    MCNAPI ::IReplayableActorInput* getCurrentCapturedInput();

    MCNAPI ulong getCurrentTick() const;

    MCNAPI ::IReplayableActorInput* getOrCreateNextCapturedInput();

    MCNAPI std::optional<ulong> handleAdvanceAndRewind(::Actor&);

    MCNAPI void notifyOfExternalCorrection() const;

    MCNAPI ::ReplayStateComponent& operator=(::ReplayStateComponent&&);

    MCNAPI ::MovementCorrection
    shouldSendCorrectionToClient(::EntityContext&, ::PlayerAuthInputPacket const&, bool) const;

    MCNAPI ~ReplayStateComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ReplayStateComponent&&);

    MCNAPI void* $ctor(std::unique_ptr<ActorHistory>, std::unique_ptr<IReplayStatePolicy>);
#else // @header-generator platform
    MCAPI ~ReplayStateComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
