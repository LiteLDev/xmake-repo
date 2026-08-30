#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class InteractionResult;
class ItemStack;
class Player;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on

    // ArmorStand inner types define
    struct Pose {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mHeadPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mBodyPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightArmPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mLeftArmPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightLegPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mLeftLegPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightItemPose;
        // NOLINTEND

    public:
        // prevent constructor by default
        Pose();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mLastHit;
    ::ll::TypedStorage<4, 4, int>   mLastCircuitStrength;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorStand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ArmorStand();

    virtual void normalTick();

    virtual float getShadowRadius() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    virtual void kill();

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void pushActors();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorStand(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _causeDamage(float);

    MCNAPI void _destroyWithEffects(::Actor*);

    MCNAPI void _dropHeldItems();

    MCNAPI void _dropHeldItemsAndResource();

    MCNAPI void _hurtByProjectile(::Actor&);

    MCNAPI bool _trySwapItem(::Player&, ::SharedTypes::Legacy::EquipmentSlot);

    MCNAPI void setPoseIndex(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ArmorStand::Pose const& POSE_ATHENA();

    MCNAPI static ::ArmorStand::Pose const& POSE_BRANDISH();

    MCNAPI static ::ArmorStand::Pose const& POSE_CANCAN_A();

    MCNAPI static ::ArmorStand::Pose const& POSE_CANCAN_B();

    MCNAPI static ::ArmorStand::Pose const& POSE_DEFAULT();

    MCNAPI static ::ArmorStand::Pose const& POSE_ENTERTAIN();

    MCNAPI static ::ArmorStand::Pose const& POSE_HERO();

    MCNAPI static ::ArmorStand::Pose const& POSE_HONOR();

    MCNAPI static ::ArmorStand::Pose const& POSE_RIPOSTE();

    MCNAPI static ::ArmorStand::Pose const& POSE_SALUTE();

    MCNAPI static ::ArmorStand::Pose const& POSE_SOLEMN();

    MCNAPI static ::ArmorStand::Pose const& POSE_ZERO_ROTATION();

    MCNAPI static ::ArmorStand::Pose const& POSE_ZOMBIE();

    MCNAPI static ::std::add_lvalue_reference_t<::ArmorStand::Pose const* [13]> STAND_POSES();
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
    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    MCNAPI void $kill();

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $pushActors();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
