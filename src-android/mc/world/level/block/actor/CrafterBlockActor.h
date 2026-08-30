#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/CraftingContainer.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/DispenserBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Level;
class Recipe;
class SaveContext;
// clang-format on

class CrafterBlockActor : public ::DispenserBlockActor {
public:
    // CrafterBlockActor inner types declare
    // clang-format off
    class LruCache;
    // clang-format on

    // CrafterBlockActor inner types define
    class LruCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mRecencyOrderedIndexes;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<CraftingContainer, std::vector<ItemInstance>>>> mCachedValues;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<9>>                 mDisabledSlots;
    ::ll::TypedStorage<8, 48, ::CrafterBlockActor::LruCache> mCraftedRecipesCache;
    ::ll::TypedStorage<4, 4, int>                            mTicksLeftInCraftingState;
    // NOLINTEND

public:
    // prevent constructor by default
    CrafterBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrafterBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual std::string getName() const;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool isSlotDisabled(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CrafterBlockActor(::BlockPos);

    MCNAPI std::bitset<9> const& getDisabledSlots() const;

    MCNAPI int getDisabledSlotsCount() const;

    MCNAPI void onDisabledSlotToggleRequested(::BlockSource&, int, bool);

    MCNAPI void setToCraftingVisualState(::BlockSource&);

    MCNAPI bool tryMoveItemsIntoContainer(::BlockSource&, std::vector<ItemInstance>&);

    MCNAPI void unsetCraftingVisualState(::BlockSource&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ItemInstance> getCraftableItem(::CraftingContainer&, ::Level&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos);
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI std::string $getName() const;

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $isSlotDisabled(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
