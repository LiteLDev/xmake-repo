#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class ILevel;
// clang-format on

class AngerLevelComponent {
public:
    // AngerLevelComponent inner types declare
    // clang-format off
    struct ConditionalSound;
    struct Nuisance;
    struct NuisanceCompare;
    // clang-format on

    // AngerLevelComponent inner types define
    struct ConditionalSound {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mCondition;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const&);
        ConditionalSound();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ConditionalSound();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Nuisance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
        ::ll::TypedStorage<4, 4, int>             mAnger;
        ::ll::TypedStorage<1, 1, uchar>           mPriority;
        // NOLINTEND
    };

    struct NuisanceCompare {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mAngerThreshold;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(::AngerLevelComponent::Nuisance const&, ::AngerLevelComponent::Nuisance const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Tick> mNextAngerDecrementTick;
    ::ll::TypedStorage<4, 4, int> mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int> mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int> mAngerDecrementIntervalTicks;
    ::ll::TypedStorage<4, 4, int> mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int> mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool> mRemoveTargetWhenBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int> mAngryBoost;
    ::ll::TypedStorage<4, 4, int> mTopAnger;
    ::ll::TypedStorage<8, 72, std::optional<ActorFilterGroup>> mNuisanceFilter;
    ::ll::TypedStorage<8, 24, std::vector<AngerLevelComponent::ConditionalSound>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, ::AngerLevelComponent::NuisanceCompare> mNuisanceCompare;
    ::ll::TypedStorage<8, 32, std::multiset<AngerLevelComponent::Nuisance, AngerLevelComponent::NuisanceCompare, std::allocator<AngerLevelComponent::Nuisance>>> mNuisances;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AngerLevelComponent(::AngerLevelComponent const&);

    MCNAPI void _decrementAnger(::Actor*, ::ILevel const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool belowAngryThreshold(::ActorUniqueID const) const;

    MCNAPI bool canBeNuisance(::Actor*, ::Actor*) const;

    MCNAPI int getAngerForAnimations(::Actor&) const;

    MCNAPI std::optional<std::pair<Actor*, int>> getTopActiveNuisance(::Actor*, ::ILevel const&) const;

    MCNAPI bool isAngry() const;

    MCNAPI ::AngerLevelComponent& operator=(::AngerLevelComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tick(::Actor*, ::ILevel const&);

    MCNAPI void tryIncreaseAngerAt(::Actor&, ::Actor&, int, bool);

    MCNAPI ~AngerLevelComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS();

    MCNAPI static int const& DEFAULT_ANGRY_BOOST();

    MCNAPI static int const& DEFAULT_ANGRY_THRESHOLD();

    MCNAPI static int const& DEFAULT_MAX_ANGER_LEVEL();

    MCNAPI static bool const& DEFAULT_SHOULD_REMOVE_TARGET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AngerLevelComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
