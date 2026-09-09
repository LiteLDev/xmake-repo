#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AngryComponent();

    MCNAPI bool canGetAngry(::Mob&, ::Mob*, ::Actor*, bool, bool) const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent const getAngrySound(::Mob const&) const;

    MCNAPI bool getBroadcastAnger() const;

    MCNAPI bool getBroadcastAngerOnAttack() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
