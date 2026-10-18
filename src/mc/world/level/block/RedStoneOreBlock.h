#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class SynchedActorDataReader;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RedStoneOreBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RedStoneOreBlock();
#else // @header-generator platform
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeOriginalSurface(bool) const;
#else // @header-generator platform
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual bool canBeOriginalSurface(bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void _lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _lightUpBlock(::BlockSource&, ::BlockPos const&) const;

    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RedStoneOreBlock(std::string const&, int, bool);
#else // @header-generator platform
    MCFOLD void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _poofParticles(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
#else // @header-generator platform
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void _poofParticles(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeOriginalSurface(bool) const;
#else // @header-generator platform
    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $canBeOriginalSurface(bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_lightUpBlock(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $_lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    MCAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;


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
