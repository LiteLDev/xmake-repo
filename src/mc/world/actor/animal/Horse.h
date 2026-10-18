#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/actor/animal/HorseFlags.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDataDirtyFlagsComponent;
struct ActorDataHorseFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
#if defined(LL_PLAT_A) // @header-generator platform
struct RenderPositionComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VariantParameterList;
// clang-format on

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Horse();
#else // @header-generator platform
    virtual ~Horse() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& damagesource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    virtual void setHorseEating(bool state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;

    virtual bool isImmobile() const;

    virtual void onFailedTame();

    virtual void setStanding(bool);

    virtual void feed(int);

    virtual bool canFreeze() const;

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int);

    virtual void openContainerComponent(::Player&);

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void setHorseEating(bool);

    virtual float getStandAnim(float) const;
#else // @header-generator platform
    virtual float getStandAnim(float a) const;
#endif // @header-generator platform

    virtual bool isHorseEating() const;

    virtual bool isMouthOpen() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void setStanding(bool value) /*override*/;

    virtual void onFailedTame() /*override*/;

#endif // @header-generator platform
    virtual void makeMad();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool tameToPlayer(::Player&, bool);
#else // @header-generator platform
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual bool tameToPlayer(::Player& player, bool tamingParticles);

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void openContainerComponent(::Player& player) /*override*/;

    virtual ::Vec3 getInterpolatedRidingOffset(float a, int const) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void feed(int itemId) /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual bool isImmobile() const /*override*/;

    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Horse(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Horse(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setHorseFlag(::HorseFlags, bool);
#else // @header-generator platform
    MCAPI void _setHorseFlag(::HorseFlags flag, bool shouldAddFlag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void openMouth();
#else // @header-generator platform
    MCAPI void openMouth();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postAiStep();
#else // @header-generator platform
    MCAPI void postAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postNormalTick();
#else // @header-generator platform
    MCAPI void postNormalTick();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3
    getInterpolatedRidingOffset(::RenderRotationComponent const&, ::StandAnimationComponent const&, float);

    MCNAPI static ::Vec3 getNewPassengerPos(
        ::RenderPositionComponent const&,
        ::RenderRotationComponent const&,
        ::StandAnimationComponent const&,
        float,
        float
#else // @header-generator platform
    MCAPI static ::Vec3 getInterpolatedRidingOffset(
        ::RenderRotationComponent const& renderRotationComponent,
        ::StandAnimationComponent const& standAnimationComponent,
        float                            alpha
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static void
    setHorseFlag(::ActorDataHorseFlagComponent&, ::ActorDataDirtyFlagsComponent&, ::HorseFlags, bool);
#else // @header-generator platform
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& damagesource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    MCAPI void $setHorseEating(bool state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI float $getStandAnim(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isImmobile() const;
#else // @header-generator platform
    MCAPI bool $isHorseEating() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFailedTame();
#else // @header-generator platform
    MCAPI bool $isMouthOpen() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStanding(bool);
#else // @header-generator platform
    MCAPI void $setStanding(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $feed(int);
#else // @header-generator platform
    MCAPI void $onFailedTame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFreeze() const;
#else // @header-generator platform
    MCAPI void $makeMad();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getControllingPlayer() const;
#else // @header-generator platform
    MCAPI ::ActorUniqueID $getControllingPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI bool $tameToPlayer(::Player& player, bool tamingParticles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSynchedDataUpdate(int);
#else // @header-generator platform
    MCFOLD void $onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openContainerComponent(::Player&);
#else // @header-generator platform
    MCAPI void $openContainerComponent(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI ::Vec3 $getInterpolatedRidingOffset(float a, int const) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setHorseEating(bool);
#else // @header-generator platform
    MCAPI void $feed(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getStandAnim(float) const;
#else // @header-generator platform
    MCAPI bool $canFreeze() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHorseEating() const;
#else // @header-generator platform
    MCAPI bool $isImmobile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMouthOpen() const;
#else // @header-generator platform
    MCAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $makeMad();
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $tameToPlayer(::Player&, bool);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
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
