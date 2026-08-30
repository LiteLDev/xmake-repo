#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SneezeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mCooldown;
    ::ll::TypedStorage<4, 4, int>                                    mCooldownTimer;
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<4, 4, int>                                    mPreSneezeTimer;
    ::ll::TypedStorage<4, 4, float>                                  mDropItemChance;
    ::ll::TypedStorage<8, 24, std::string>                           mLootTable;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSneezeSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mPreSneezeSound;
    ::ll::TypedStorage<4, 4, float>                                  mPrepareTime;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>>            mReactMobFilters;
    ::ll::TypedStorage<4, 4, float>                                  mReactWithin;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    SneezeGoal& operator=(SneezeGoal const&);
    SneezeGoal(SneezeGoal const&);
    SneezeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SneezeGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SneezeGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
