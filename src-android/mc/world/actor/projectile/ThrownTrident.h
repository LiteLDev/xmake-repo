#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class ThrownTrident : public ::AbstractArrow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mDealtDamage;
    ::ll::TypedStorage<4, 4, int>           mClientSideReturnTridentTickCount;
    ::ll::TypedStorage<8, 152, ::ItemStack> mTrident;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrownTrident();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void outOfWorld();

    virtual ~ThrownTrident();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void playerTouch(::Player&);

    virtual bool isEnchanted() const;

    virtual void despawn();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void shoot(::Vec3 const&, float, float, ::Vec3 const&);

    virtual ::ItemStack _getPickupItem() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThrownTrident(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void doNormalTick();

    MCNAPI int getClientSideReturnTridentTickCount() const;

    MCNAPI ::ItemStack getPickupItem() const;

    MCNAPI void returnWithLoyalty(int);

    MCNAPI void setTridentItem(::ItemStack const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $outOfWorld();

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $playerTouch(::Player&);

    MCNAPI bool $isEnchanted() const;

    MCNAPI void $despawn();

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $shoot(::Vec3 const&, float, float, ::Vec3 const&);

    MCNAPI ::ItemStack $_getPickupItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
