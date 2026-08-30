#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListener.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class SaveContext;
// clang-format on

class SculkShriekerBlockActor : public ::VanillaBlockActor {
public:
    // SculkShriekerBlockActor inner types declare
    // clang-format off
    struct QueuedResponse;
    // clang-format on

    // SculkShriekerBlockActor inner types define
    struct QueuedResponse {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> threatLevel;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mVibrationListener;
    ::ll::UntypedStorage<8, 80>  mListenerRegistration;
    ::ll::UntypedStorage<4, 16>  mQueuedResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkShriekerBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkShriekerBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkShriekerBlockActor(::BlockPos const&);

    MCNAPI void tryRespond(::BlockSource&, ::BlockPos const&);

    MCNAPI bool tryShriek(::BlockSource&, ::BlockPos, ::Player&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canRespond(::BlockSource const&, ::BlockPos const&);

    MCNAPI static ::SculkShriekerBlockActor* tryGet(::BlockSource&, ::BlockPos);

    MCNAPI static ::Player* tryGetPlayerInHierarchy(::Actor*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockActorType const& TypeId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
