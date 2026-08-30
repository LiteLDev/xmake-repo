#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DecoratedPotBlockActor;
class ItemInstance;
class ItemStack;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class DecoratedPotBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    DecoratedPotBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratedPotBlock();

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DecoratedPotBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<CompoundTag> getItemInstanceUserData(::gsl::not_null<const DecoratedPotBlockActor*>);

    MCNAPI static std::vector<ItemStack> getSherdItems(::DecoratedPotBlockActor const&);

    MCNAPI static bool isShatteringItem(::ItemStack const&);
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
    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
