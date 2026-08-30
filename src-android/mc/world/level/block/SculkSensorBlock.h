#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class SculkSensorBlockActor;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SculkSensorBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mActiveTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SculkSensorBlock();

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isSignalSource() const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual ::Brightness getLightEmission(::Block const&) const;

    virtual ::Brightness getEmissiveBrightness(::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SculkSensorBlock(std::string const&, int);

    MCNAPI SculkSensorBlock(std::string const&, int, ::BlockActorType, int);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isActive(::Block const&);

    MCNAPI static bool isActive(::BlockSource&, ::BlockPos const&);

    MCNAPI static bool isInactive(::Block const&);

    MCNAPI static bool isOnCooldown(::BlockSource&, ::BlockPos const&);

    MCNAPI static void setActivePhase(::BlockSource&, ::BlockPos const&, ::Actor*, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);

    MCNAPI void* $ctor(std::string const&, int, ::BlockActorType, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;

    MCNAPI ::Brightness $getEmissiveBrightness(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
