#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/effect/MobEffectInstance.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Arrow : public ::AbstractArrow {
public:
    // Arrow inner types define
    enum class Data : int {
        IsCritical     = 16,
        TippedAuxValue = 18,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             mLife;
    ::ll::TypedStorage<1, 1, bool>                            mHasSkippedFirstCritParticle;
    ::ll::TypedStorage<4, 4, int>                             mEnchantFlame;
    ::ll::TypedStorage<4, 4, int>                             mEnchantInfinity;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>> mMobEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    Arrow();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Arrow();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void normalTick();

    virtual void playerTouch(::Player&);

    virtual void setAuxValue(int);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void shoot(::Vec3 const&, float, float, ::Vec3 const&);

    virtual ::ItemStack _getPickupItem() const;

    virtual ::mce::Color getEffectColor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Arrow(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void addMobEffect(::MobEffectInstance);

    MCNAPI int getAuxValue() const;

    MCNAPI void setCritical(bool);

    MCNAPI void setEnchantFlame(int);

    MCNAPI void setEnchantInfinity(int);

    MCNAPI void setEnchantPower(int);

    MCNAPI void setEnchantPunch(int);
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

    MCNAPI void $normalTick();

    MCNAPI void $playerTouch(::Player&);

    MCNAPI void $setAuxValue(int);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $shoot(::Vec3 const&, float, float, ::Vec3 const&);

    MCNAPI ::ItemStack $_getPickupItem() const;

    MCNAPI ::mce::Color $getEffectColor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
