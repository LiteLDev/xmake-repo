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
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(::AngerLevelComponent::Nuisance const&, ::AngerLevelComponent::Nuisance const&) const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using ActorNuisance = ::std::pair<::Actor*, int>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Tick>                               mNextAngerDecrementTick;
    ::ll::TypedStorage<4, 4, int>                                  mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                                  mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                                  mAngerDecrementIntervalTicks;
    ::ll::TypedStorage<4, 4, int>                                  mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int>                                  mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool>                                 mRemoveTargetWhenBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                                  mAngryBoost;
    ::ll::TypedStorage<4, 4, int>                                  mTopAnger;
    ::ll::TypedStorage<8, 72, ::std::optional<::ActorFilterGroup>> mNuisanceFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::AngerLevelComponent::ConditionalSound>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, ::AngerLevelComponent::NuisanceCompare>                  mNuisanceCompare;
    ::ll::TypedStorage<8, 24, ::std::multiset<::AngerLevelComponent::Nuisance, ::AngerLevelComponent::NuisanceCompare>>
        mNuisances;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AngerLevelComponent(::AngerLevelComponent const&);
#else // @header-generator platform
    MCAPI void _decrementAnger(::Actor* owner, ::ILevel const& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _decrementAnger(::Actor*, ::ILevel const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI bool belowAngryThreshold(::ActorUniqueID id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool belowAngryThreshold(::ActorUniqueID const) const;
#else // @header-generator platform
    MCAPI bool canBeNuisance(::Actor* owner, ::Actor* target) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeNuisance(::Actor*, ::Actor*) const;
#else // @header-generator platform
    MCAPI int getAngerForAnimations(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAngerForAnimations(::Actor&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::pair<::Actor*, int>> getTopActiveNuisance(::Actor* owner, ::ILevel const& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::pair<Actor*, int>> getTopActiveNuisance(::Actor*, ::ILevel const&) const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAngry() const;
#else // @header-generator platform
    MCAPI void tryIncreaseAngerAt(::Actor& owner, ::Actor& nuisance, int anger, bool playSounds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AngerLevelComponent& operator=(::AngerLevelComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tick(::Actor*, ::ILevel const&);

    MCNAPI void tryIncreaseAngerAt(::Actor&, ::Actor&, int, bool);

    MCNAPI ~AngerLevelComponent();
#else // @header-generator platform
    MCAPI ~AngerLevelComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_ANGRY_BOOST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_ANGRY_BOOST();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_ANGRY_THRESHOLD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_ANGRY_THRESHOLD();

    MCNAPI static int const& DEFAULT_MAX_ANGER_LEVEL();

    MCNAPI static bool const& DEFAULT_SHOULD_REMOVE_TARGET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AngerLevelComponent const&);
#else // @header-generator platform
    MCAPI static int const& DEFAULT_MAX_ANGER_LEVEL();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
