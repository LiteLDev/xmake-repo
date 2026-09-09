#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class EntityContext;
class ItemInstance;
class Player;
class SynchedActorDataReader;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class RedStoneOreBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLit;
    // NOLINTEND

public:
    // prevent constructor by default
    RedStoneOreBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RedStoneOreBlock();

    virtual bool canBeOriginalSurface(bool) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool attack(::Player*, ::BlockPos const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual void _lightUpBlock(::BlockSource&, ::BlockPos const&) const;

    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedStoneOreBlock(std::string const&, int, bool);

    MCNAPI void _poofParticles(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canBeOriginalSurface(bool) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI void $_lightUpBlock(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
