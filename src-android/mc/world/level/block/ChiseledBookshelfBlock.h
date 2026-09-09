#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ChiseledBookshelfBlockActor;
class ItemInstance;
class ItemStack;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChiseledBookshelfBlock : public ::FaceDirectionalActorBlock {
public:
    // ChiseledBookshelfBlock inner types define
    enum class SlotState : int {
        Free     = 0,
        Occupied = 1,
        Invalid  = 2,
    };

public:
    // prevent constructor by default
    ChiseledBookshelfBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChiseledBookshelfBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChiseledBookshelfBlock(std::string const&, int);

    MCNAPI bool _retrieveBook(::Player&, ::ChiseledBookshelfBlockActor&, int const) const;

    MCNAPI void _setBook(::Player&, ::ItemStack, ::ChiseledBookshelfBlockActor&, int const) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChiseledBookshelfBlock::SlotState
    getBlockSlotState(::BlockPos const&, ::Vec3 const&, uchar const, ::BlockSource const&);
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
