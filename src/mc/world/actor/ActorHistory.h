#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityContext>>                             mSnapshotState;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IMovementCorrection>>> mCorrections;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayableActorInput>>               mCapturedInput;
        ::ll::TypedStorage<1, 1, bool>                                                     mIsCorrection;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong const>                                        mHistoryWindow;
    ::ll::TypedStorage<8, 48, std::deque<ActorHistory::Snapshot>>                mSnapshots;
    ::ll::TypedStorage<8, 8, ulong>                                              mOldestFrame;
    ::ll::TypedStorage<8, 8, std::bitset<2>>                                     mPendingCorrections;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IMovementCorrection>>> mQueuedCorrection;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IReplayableActorInput>>             mNextInput;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64 const>                                             mHistoryWindow;
    ::ll::TypedStorage<8, 40, ::std::deque<::ActorHistory::Snapshot>>                  mSnapshots;
    ::ll::TypedStorage<8, 8, uint64>                                                   mOldestFrame;
    ::ll::TypedStorage<4, 4, ::std::bitset<2>>                                         mPendingCorrections;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IMovementCorrection>>> mQueuedCorrection;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayableActorInput>>               mNextInput;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ActorHistory();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorHistory();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorHistory(ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ActorHistory(uint64 historyWindow);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCorrectionToFrame(std::shared_ptr<IMovementCorrection>, ulong);
#else // @header-generator platform
    MCAPI void addCorrectionToFrame(::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFrame(::EntityContext&, ulong, ::EntityRegistry&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addFrame(::EntityContext& entity, uint64 frame, ::EntityRegistry& registry);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearFrames();

    MCNAPI ::ActorHistory::Snapshot const* getFrame(ulong) const;

    MCNAPI ::ActorHistory::Snapshot* getFrame(ulong);

    MCNAPI ulong getHistoryWindow() const;

    MCNAPI ulong getOldestFrame() const;

    MCNAPI ::IReplayableActorInput* getOrCreateNextFrame();

    MCNAPI void queueCorrection(std::shared_ptr<IMovementCorrection>);

    MCNAPI void setSnapshotAsCorrection(ulong);

    MCNAPI ~ActorHistory();
#else // @header-generator platform
    MCAPI ~ActorHistory();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    prepareEntityForRewindFromCapture(::EntityContext const&, ::EntityContext const&, ::EntityContext&);

    MCNAPI static void updateHistoryEntity(::EntityContext const&, ::EntityContext&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void prepareEntityForRewindFromCapture(
        ::EntityContext const& fromCapture,
        ::EntityContext const& fromLive,
        ::EntityContext&       toRewind
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(uint64 historyWindow);
#endif
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
