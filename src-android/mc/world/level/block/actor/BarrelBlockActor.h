#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    BarrelBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BarrelBlockActor();

    virtual void onPlace(::BlockSource&);

    virtual std::string getName() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BarrelBlockActor(::BlockPos const&);
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
    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI std::string $getName() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
