#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BeaconBlockActor;
class BlockPos;
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class BeaconContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerModel>> mPaymentContainerModel;
    ::ll::TypedStorage<4, 4, int>                            mPrimaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                            mSecondaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                            mSelectedPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                            mSelectedSecondaryEffectId;
    ::ll::TypedStorage<1, 1, bool>                           mEffectSelectionsChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BeaconContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void confirmTransaction(bool);

    MCNAPI std::string getEffectHoverName(int, bool);

    MCNAPI std::shared_ptr<ContainerModel> getPaymentContainerModel();

    MCNAPI int getSelectedPrimaryEffectId() const;

    MCNAPI int getSelectedSecondaryEffectId() const;

    MCNAPI bool hasPrimarySelection() const;

    MCNAPI bool haveEffectsChanged();

    MCNAPI bool isAnyEffectValid();

    MCNAPI bool isPaymentAvailable() const;

    MCNAPI bool isSecondaryEffect(int);

    MCNAPI bool isSelected(int, bool);

    MCNAPI bool isTierAvailable(int);

    MCNAPI void selectEffect(int, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& PAYMENT_SLOT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
