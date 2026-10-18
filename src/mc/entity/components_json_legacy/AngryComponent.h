#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorFilterGroup;
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct Tick;
#endif // @header-generator platform
// clang-format on

class AngryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mDuration;
    ::ll::TypedStorage<1, 1, bool>                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                 mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mBroadcastFilter;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mSubjectFilter;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AngryComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AngryComponent();
#else // @header-generator platform
    MCAPI AngryComponent(::AngryComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canGetAngry(::Mob&, ::Mob*, ::Actor*, bool, bool) const;
#else // @header-generator platform
    MCAPI AngryComponent(::AngryComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent const getAngrySound(::Mob const&) const;
#else // @header-generator platform
    MCAPI bool canGetAngry(::Mob& owner, ::Mob* testMob, ::Actor* target, bool allowInvulnerable, bool mustSee) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBroadcastAnger() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent const getAngrySound(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBroadcastAngerOnAttack() const;
#else // @header-generator platform
    MCAPI void restartTimer(::Mob& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBroadcastAngerOnBeingAttacked() const;

    MCNAPI bool getBroadcastAngerWhenDying() const;

    MCNAPI ::ActorFilterGroup const& getBroadcastFilter() const;

    MCNAPI int getBroadcastRange() const;

    MCNAPI bool getHasTicked() const;

    MCNAPI ::Tick const getNextSoundEventTick() const;

    MCNAPI void restartTimer(::Mob&);

    MCNAPI void setAngry(::Mob&, bool);

    MCNAPI void setHasTicked(bool);

    MCNAPI void setNextSoundEventTick(::Mob const&);
#else // @header-generator platform
    MCAPI void setNextSoundEventTick(::Mob const& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCFOLD void* $ctor(::AngryComponent&&);

    MCFOLD void* $ctor(::AngryComponent const&);
#endif // @header-generator platform
    // NOLINTEND
};
