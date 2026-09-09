#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/DecoratedPotAnimation.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStackBase;
class Player;
class SaveContext;
// clang-format on

class DecoratedPotBlockActor : public ::RandomizableBlockActorContainer {
public:
    // DecoratedPotBlockActor inner types define
    enum PotFace : uint64 {
        Back  = 0,
        Left  = 1,
        Right = 2,
        Front = 3,
    };

    using SherdList = std::array<std::string, 4>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, std::array<std::string, 4>> mSherdItemNames;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mContainedItem;
    ::ll::TypedStorage<1, 1, ::DecoratedPotAnimation>     mAnimation;
    ::ll::TypedStorage<4, 4, int>                         mAnimationTick;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratedPotBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DecoratedPotBlockActor(::BlockPos const&);

    MCNAPI void _setContainedItem(::ItemStack const&);

    MCNAPI void fromItem(::ItemStack const&);

    MCNAPI ::DecoratedPotAnimation getAnimation() const;

    MCNAPI float getAnimationProgress(float) const;

    MCNAPI std::array<std::string, 4> const& getSherdNames() const;

    MCNAPI void tryAddItem(::Player&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _areDefaultSherds(std::array<std::string, 4> const&);

    MCNAPI static std::string getDelimitedConcatenatedSherdNames(::CompoundTag const*);

    MCNAPI static void removeDefaultSherdsFromUserData(::ItemStackBase&);

    MCNAPI static void saveSherdsToItemForInventoryRendering(::ItemStack&, std::string const&);

    MCNAPI static void saveSherdsToTag(::CompoundTag&, std::array<std::string, 4> const&, bool);

    MCNAPI static ::DecoratedPotBlockActor* tryGet(::BlockSource&, ::BlockPos const&);

    MCNAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(::CompoundTag const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<std::string, 4> const& DEFAULT_SHERD_LIST();
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
