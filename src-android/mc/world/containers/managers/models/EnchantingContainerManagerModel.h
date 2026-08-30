#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/item/enchanting/ItemEnchantOption.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemEnchants;
class ItemStack;
class Player;
// clang-format on

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<1, 1, bool>        mShouldBookBeOpen;
    ::ll::UntypedStorage<8, 32>           mEnchantOptions;
    ::ll::UntypedStorage<8, 48>           mOptionsChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnchantingContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void fireItemEnchantedEvent(::ItemStack const&, ::ItemEnchants const&);

    MCNAPI std::vector<ItemEnchantOption> const& getEnchantOptions() const;

    MCNAPI int getLapisCount();

    MCNAPI void getNewEnchantmentSeed();

    MCNAPI bool getShouldBookBeOpen() const;

    MCNAPI void recalculateOptions();

    MCNAPI void registerOptionsChangedCallback(std::function<void(EnchantingContainerManagerModel&)>);

    MCNAPI void setOptions(std::vector<ItemEnchantOption> const&);

    MCNAPI void setShouldBookBeOpen(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& NUM_OPTIONS();
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

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
