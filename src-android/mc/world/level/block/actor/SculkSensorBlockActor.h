#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListener.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class ILevel;
class SaveContext;
class SculkSensorVibrationConfig;
// clang-format on

class SculkSensorBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mVibrationListener;
    ::ll::UntypedStorage<8, 80>  mListenerRegistration;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkSensorBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkSensorBlockActor(::BlockPos const&);

    MCNAPI
    SculkSensorBlockActor(::BlockActorType, ::BlockPos const&, uint, std::unique_ptr<SculkSensorVibrationConfig>&&);

    MCNAPI int getLatestReceivedVibrationFrequency() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);

    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&, uint, std::unique_ptr<SculkSensorVibrationConfig>&&);
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

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
