#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorHurtResult;
class Block;
struct HurtParameters;
// clang-format on

class MinecartTNT : public ::Minecart {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartTNT();

    virtual void normalTick();

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void destroy(::ActorDamageSource const&, bool);

    virtual ::MinecartType getType();

    virtual ::Block const* getDefaultDisplayBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getFuse() const;

    MCNAPI void primeFuse(::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_FUSE_LENGTH();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $destroy(::ActorDamageSource const&, bool);

    MCNAPI ::MinecartType $getType();

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
