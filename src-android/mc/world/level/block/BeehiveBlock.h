#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class BeehiveBlockActor;
class Block;
class BlockPos;
class BlockSource;
class ItemStack;
class Player;
struct BlockAnimateTickData;
namespace BlockEvents { class ActorInternalEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    BeehiveBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeehiveBlock();

    virtual ::Block const* getNextBlockPermutation(::Block const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual int getVariant(::Block const&) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BeehiveBlock(std::string const&, int);

    MCNAPI void _fillHoneyBottle(::Player&, ::ItemStack&, ::ItemStack&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void emitHoneyComb(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void evictAll(::BlockSource&, ::BlockPos const&, bool) const;

    MCNAPI void onEvent(::BlockEvents::ActorInternalEvent&) const;

    MCNAPI void onPlayerPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void deliverNectar(::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static ::ItemStack getHiveItemWithOccupants(::Block const&, ::BeehiveBlockActor const*);

    MCNAPI static bool hasHoneyToHarvest(::Block const&);

    MCNAPI static void resetHoneyLevel(::BlockSource&, ::Block const&, ::BlockPos const&);
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
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
