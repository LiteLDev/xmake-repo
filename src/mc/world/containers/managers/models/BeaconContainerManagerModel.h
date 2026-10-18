#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ContainerID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BeaconBlockActor;
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BeaconContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerModel>> mPaymentContainerModel;
    ::ll::TypedStorage<4, 4, int>                            mPrimaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                            mSecondaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                            mSelectedPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                            mSelectedSecondaryEffectId;
    ::ll::TypedStorage<1, 1, bool>                           mEffectSelectionsChanged;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mPaymentContainerModel;
    ::ll::TypedStorage<4, 4, int>                                mPrimaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                                mSecondaryEffectPreviousId;
    ::ll::TypedStorage<4, 4, int>                                mSelectedPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                mSelectedSecondaryEffectId;
    ::ll::TypedStorage<1, 1, bool>                               mEffectSelectionsChanged;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BeaconContainerManagerModel();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BeaconContainerManagerModel();
#else // @header-generator platform
    virtual ~BeaconContainerManagerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void confirmTransaction(bool isPaymentConfirmed);

    MCAPI ::std::string getEffectHoverName(int iSlot, bool bSecondaryEffect);

    MCAPI bool isPaymentAvailable() const;

    MCAPI bool isSelected(int iSlot, bool isSecondary);

    MCAPI bool isTierAvailable(int iTier);

    MCAPI void selectEffect(int iSlot, bool bSecondaryEffect);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext $_postInit();
#else // @header-generator platform
    MCAPI ::ContainerScreenContext $_postInit();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
