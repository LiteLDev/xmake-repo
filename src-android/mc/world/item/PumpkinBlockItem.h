#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"

class PumpkinBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    PumpkinBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PumpkinBlockItem();

    virtual int getEnchantSlot() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PumpkinBlockItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
