#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CampfireBlockActor;
class ItemInstance;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CampfireBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSpawnRandomParticles;
    ::ll::TypedStorage<1, 1, bool> mIsCampfireFireStarter;
    // NOLINTEND

public:
    // prevent constructor by default
    CampfireBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CampfireBlock();

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isLavaBlocking() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual ::Brightness getLightEmission(::Block const&) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CampfireBlock(std::string const&, int, bool const, bool);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isLit(::Block const&);

    MCNAPI static bool tryDouseFire(::BlockSource&, ::BlockPos const&, ::Actor*, bool);

    MCNAPI static bool tryLightFire(::BlockSource&, ::BlockPos const&, ::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool const, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
