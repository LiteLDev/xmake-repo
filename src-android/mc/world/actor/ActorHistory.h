#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
struct IMovementCorrection;
struct IReplayableActorInput;
// clang-format on

class ActorHistory {
public:
    // ActorHistory inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on

    // ActorHistory inner types define
    struct Snapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 32>                                                  mSnapshotState;
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IMovementCorrection>>> mCorrections;
        ::ll::TypedStorage<8, 8, std::unique_ptr<IReplayableActorInput>>             mCapturedInput;
        ::ll::TypedStorage<1, 1, bool>                                               mIsCorrection;
        // NOLINTEND

    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Snapshot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>                                        mHistoryWindow;
    ::ll::TypedStorage<8, 48, std::deque<ActorHistory::Snapshot>>                mSnapshots;
    ::ll::TypedStorage<8, 8, ulong>                                              mOldestFrame;
    ::ll::TypedStorage<8, 8, std::bitset<2>>                                     mPendingCorrections;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IMovementCorrection>>> mQueuedCorrection;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IReplayableActorInput>>             mNextInput;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorHistory(ulong);

    MCNAPI void addCorrectionToFrame(std::shared_ptr<IMovementCorrection>, ulong);

    MCNAPI void addFrame(::EntityContext&, ulong, ::EntityRegistry&);

    MCNAPI void clearFrames();

    MCNAPI ::ActorHistory::Snapshot const* getFrame(ulong) const;

    MCNAPI ::ActorHistory::Snapshot* getFrame(ulong);

    MCNAPI ulong getHistoryWindow() const;

    MCNAPI ulong getOldestFrame() const;

    MCNAPI ::IReplayableActorInput* getOrCreateNextFrame();

    MCNAPI void queueCorrection(std::shared_ptr<IMovementCorrection>);

    MCNAPI void setSnapshotAsCorrection(ulong);

    MCNAPI ~ActorHistory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    prepareEntityForRewindFromCapture(::EntityContext const&, ::EntityContext const&, ::EntityContext&);

    MCNAPI static void updateHistoryEntity(::EntityContext const&, ::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
