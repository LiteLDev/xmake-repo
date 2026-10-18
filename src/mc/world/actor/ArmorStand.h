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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Pose();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mLastHit;
    ::ll::TypedStorage<4, 4, int>   mLastCircuitStrength;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mLastHit;
    ::ll::TypedStorage<4, 4, int>    mLastCircuitStrength;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorStand();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ArmorStand();
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual ::InteractionResult
    getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    virtual void kill() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void kill();
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void die(::ActorDamageSource const&);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void pushActors() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void pushActors();
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ArmorStand(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI ArmorStand(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _causeDamage(float);
#else // @header-generator platform
    MCAPI void _causeDamage(float damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _destroyWithEffects(::Actor*);
#else // @header-generator platform
    MCAPI void _destroyWithEffects(::Actor* sourceActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dropHeldItems();
#else // @header-generator platform
    MCAPI void _dropHeldItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dropHeldItemsAndResource();
#else // @header-generator platform
    MCAPI void _dropHeldItemsAndResource();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _hurtByProjectile(::Actor&);
#else // @header-generator platform
    MCAPI void _hurtByProjectile(::Actor& sourceActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _trySwapItem(::Player&, ::SharedTypes::Legacy::EquipmentSlot);
#else // @header-generator platform
    MCAPI bool _trySwapItem(::Player& player, ::SharedTypes::Legacy::EquipmentSlot slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPoseIndex(int);
#else // @header-generator platform
    MCAPI void setPoseIndex(int poseIndex);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_ATHENA();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_ATHENA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_BRANDISH();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_BRANDISH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_CANCAN_A();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_CANCAN_A();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_CANCAN_B();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_CANCAN_B();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_DEFAULT();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_DEFAULT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_ENTERTAIN();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_ENTERTAIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_HERO();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_HERO();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_HONOR();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_HONOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_RIPOSTE();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_RIPOSTE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_SALUTE();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_SALUTE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_SOLEMN();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_SOLEMN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_ZERO_ROTATION();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_ZERO_ROTATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ArmorStand::Pose const& POSE_ZOMBIE();

    MCNAPI static ::std::add_lvalue_reference_t<::ArmorStand::Pose const* [13]> STAND_POSES();
#else // @header-generator platform
    MCAPI static ::ArmorStand::Pose const& POSE_ZOMBIE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::InteractionResult
    $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $kill();
#else // @header-generator platform
    MCAPI void $kill();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $pushActors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushActors();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
