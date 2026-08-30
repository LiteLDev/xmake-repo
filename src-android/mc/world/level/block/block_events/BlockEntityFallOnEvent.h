#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Block;
class BlockPos;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockEntityFallOnEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Actor&>       mEntity;
    ::ll::TypedStorage<4, 4, float>          mFallDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEntityFallOnEvent& operator=(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEntityFallOnEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void callFallOnFor(::Block const&);

    MCNAPI void cancelOutFallDistance();

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&) const;

    MCNAPI ::Actor const& getActor() const;

    MCNAPI float getFallDistance() const;

    MCNAPI void handleActorFallDamage(float, float, ::ActorDamageSource);

    MCNAPI bool isClientSide() const;

    MCNAPI void postFallOnGameEvent();

    MCNAPI void scaleFallDistance(float);

    MCNAPI void setActorFallDistance(float);

    MCNAPI void spawnDustParticles(uint) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
