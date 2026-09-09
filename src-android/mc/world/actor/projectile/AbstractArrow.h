#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class AbstractArrow : public ::PredictableProjectile {
public:
    // AbstractArrow inner types define
    enum class Data : int {
        OwnerID = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mFavoredSlot;
    ::ll::TypedStorage<1, 1, bool> mIsPlayerOwned;
    ::ll::TypedStorage<1, 1, bool> mIsCreative;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractArrow();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractArrow();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void lerpMotion(::Vec3 const&);

    virtual float getShadowRadius() const;

    virtual void playerTouch(::Player&);

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void shoot(::Vec3 const&, float, float, ::Vec3 const&);

    virtual ::ItemStack _getPickupItem() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbstractArrow(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI bool _canPickup(::Player const&) const;

    MCNAPI void _defineEntityData();

    MCNAPI bool isPlayerOwned() const;

    MCNAPI void setFavoredSlot(int);

    MCNAPI void setIsCreative(bool);

    MCNAPI void setIsPlayerOwned(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Actor* spawnPlayerProjectile(::ActorDefinitionIdentifier const&, ::Player&, ::Vec3);
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $lerpMotion(::Vec3 const&);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $playerTouch(::Player&);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $shoot(::Vec3 const&, float, float, ::Vec3 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
