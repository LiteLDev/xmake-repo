#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/agent/AgentAnimation.h"
#include "mc/world/actor/agent/AgentRenderData.h"
#include "mc/world/actor/agent/AgentTravelType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BodyControl;
class ContainerComponent;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct KnockbackParameters;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Agent : public ::Mob {
public:
    // Agent inner types define
    enum class AnimState : int {
        Idle     = 0,
        Moving   = 1,
        ArmSwing = 2,
        Shrug    = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mIsHovering;
    ::ll::TypedStorage<4, 8, ::Vec2>             mHorizontalTarget;
    ::ll::TypedStorage<4, 4, float>              mVerticalTarget;
    ::ll::TypedStorage<4, 4, int>                mSelectedSlot;
    ::ll::TypedStorage<1, 1, bool>               mHasSetName;
    ::ll::TypedStorage<1, 1, bool>               mHasFiredCreationEvent;
    ::ll::TypedStorage<8, 16, ::AgentRenderData> mRenderData;
    // NOLINTEND

public:
    // prevent constructor by default
    Agent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Agent();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void normalTick();

    virtual void baseTick();

    virtual bool isInvisible() const;

    virtual bool canShowNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual bool isTargetable() const;

    virtual void setOwner(::ActorUniqueID const);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void setCarriedItem(::ItemStack const&);

    virtual bool canBePulledIntoVehicle() const;

    virtual bool canBeAffected(uint) const;

    virtual void kill();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    virtual bool createAIGoals();

    virtual bool canExistWhenDisallowMob() const;

    virtual std::unique_ptr<BodyControl> initBodyControl();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Agent(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI ::AgentTravelType checkTravelType();

    MCNAPI void doClientTravel(::AABB const&);

    MCNAPI ::Vec3 doServerTravel(::AABB const&, ::AgentTravelType);

    MCNAPI float getMoveSpeedScalar() const;

    MCNAPI ::AgentRenderData& getRenderData();

    MCNAPI int getSelectedSlot() const;

    MCNAPI int getSwingAnimationDuration() const;

    MCNAPI void handleAnimationEvent(::AgentAnimation);

    MCNAPI bool isArmSwinging() const;

    MCNAPI bool isIdling();

    MCNAPI bool isShrugging() const;

    MCNAPI bool isValidSlotNum(int);

    MCNAPI void setGameType(::GameType);

    MCNAPI void setMoveTarget(float);

    MCNAPI void setMoveTarget(::Vec2);

    MCNAPI void setNameTagFromOwner(::Player const&);

    MCNAPI void shrug();

    MCNAPI void startCommandMode();

    MCNAPI void stopCommandMode();

    MCNAPI void swingArm();

    MCNAPI void tryFireCreateEvent(::Player&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 roundTeleportPos(::Vec3 const&);

    MCNAPI static ::Agent* tryGetFromEntity(::EntityContext&, bool const);
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
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI bool $isInvisible() const;

    MCNAPI bool $canShowNameTag() const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI void $setOwner(::ActorUniqueID const);

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $setCarriedItem(::ItemStack const&);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $canBeAffected(uint) const;

    MCNAPI void $kill();

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    MCNAPI bool $createAIGoals();

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
