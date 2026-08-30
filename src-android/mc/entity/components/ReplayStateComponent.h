#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorHistory;
class EntityContext;
class PlayerAuthInputPacket;
struct IMovementCorrection;
struct IReplayStatePolicy;
struct IReplayableActorInput;
struct MovementCorrection;
// clang-format on

class ReplayStateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mForceCorrection;
    ::ll::TypedStorage<1, 1, bool>                                mShouldReportNextCorrectionTelemetry;
    ::ll::TypedStorage<1, 1, bool>                                mIsCorrectionTelemetryEnabled;
    ::ll::TypedStorage<1, 1, uchar>                               mDivergenceCounter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorHistory>>       mHistory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IReplayStatePolicy>> mPolicy;
    ::ll::TypedStorage<8, 8, ulong>                               mCurrentTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReplayStateComponent(::ReplayStateComponent&&);

    MCNAPI ReplayStateComponent(std::unique_ptr<ActorHistory>, std::unique_ptr<IReplayStatePolicy>);

    MCNAPI ::AdvanceFrameResult _applyCorrection(std::shared_ptr<IMovementCorrection>, ::Actor&, ulong, bool) const;

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
