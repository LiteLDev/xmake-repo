#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HorseContainerManagerModel;
struct ActorUniqueID;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class HorseContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<HorseContainerManagerModel>> mHorseContainerManagerModel;
    ::ll::TypedStorage<1, 1, bool>                                       mIsEquipTabOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HorseContainerManagerController();

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HorseContainerManagerController(std::weak_ptr<HorseContainerManagerModel>);

    MCNAPI bool canWearArmor() const;

    MCNAPI bool canWearCarpet() const;

    MCNAPI bool canWearSaddle() const;

    MCNAPI int getChestInventorySize() const;

    MCNAPI ::Actor* getEntity() const;

    MCNAPI void getEquipGridSize(int&, int&) const;

    MCNAPI void getInventoryGridSize(int&, int&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<HorseContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
