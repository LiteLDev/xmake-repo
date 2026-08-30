#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class CraftableCompounds;
class DataLoadHelper;
class ILevel;
class LabTablePacket;
class LabTableReaction;
class Player;
class Random;
class SaveContext;
struct ActorUniqueID;
// clang-format on

class ChemistryTableBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorUniqueID>>    mOpenedPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LabTableReaction>> mCurReaction;
    ::ll::UntypedStorage<8, 1376>                               mCraftableCompounds;
    ::ll::UntypedStorage<8, 0>                                  mItems;
    ::ll::TypedStorage<8, 152, ::ItemStack>                     mPendingReactionOutput;
    ::ll::TypedStorage<1, 1, bool>                              mIsTableTypeCached;
    ::ll::TypedStorage<8, 40, ::HashedString>                   mCachedTableType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryTableBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChemistryTableBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getMaxStackSize() const;

    virtual int getContainerSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChemistryTableBlockActor(::BlockPos const&);

    MCNAPI ::HashedString const& _getType(::BlockSource&);

    MCNAPI void clientLabTablePacket(::LabTablePacket const&, ::BlockSource&);

    MCNAPI bool isReactionInProgress();

    MCNAPI bool isSameType(::HashedString const&) const;

    MCNAPI void playerOpenLabTable(::Player&);

    MCNAPI void reset(::BlockSource&);

    MCNAPI void serverCombine(::BlockSource&, std::vector<ItemStack> const&);

    MCNAPI void serverLabTablePacket_DEPRECATED(::LabTablePacket const&, ::BlockSource&);
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

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
