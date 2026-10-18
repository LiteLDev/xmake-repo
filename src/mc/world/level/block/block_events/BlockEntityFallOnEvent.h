#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class RenderParams;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockEntityFallOnEvent();

    virtual ::BlockSource const& getBlockSource() const;
#else // @header-generator platform
    virtual ::BlockSource const& getBlockSource() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void handleActorFallDamage(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource const& $getBlockSource() const;
#else // @header-generator platform
    MCFOLD ::BlockSource const& $getBlockSource() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
