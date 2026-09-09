#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class Raid {
public:
    // Raid inner types define
    enum class RaidState : int {
        PreparingGroup    = 0,
        PickingSpawnPoint = 1,
        SpawningGroup     = 2,
        GroupInPlay       = 3,
        AwardingRewards   = 4,
        Finished          = 5,
        Stopped           = 6,
    };

    enum class RaidStatus : int {
        ONGOING = 0,
        VICTORY = 1,
        DEFEAT  = 2,
    };

    using GroupNumberType = uchar;

    using DurationType = int;

    using ActorIDCollection = std::unordered_set<ActorUniqueID>;

    using RaiderCountType = uchar;

    using FailureCountType = uchar;

    using PickSpawnPointCallback = std::function<bool(ulong, Vec3&)>;

    using SpawnGroupCallback = std::function<bool(ulong, Vec3, uchar, std::unordered_set<ActorUniqueID>&)>;

    using DoesActorExistCallback = std::function<bool(const ActorUniqueID&)>;

    using IsVillageDefeatedCallback = std::function<bool()>;

    using NotificationCallback = std::function<void(const Raid&)>;

    using ApplyHeroOfTheVillageCallback = std::function<void(const ActorUniqueID&)>;

    using ActorRemovedFromRaidCallback = std::function<void(const ActorUniqueID&)>;

    using RaiderHealthCallback = std::function<float(const ActorUniqueID&)>;

    using CallbackCallCountType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Raid::RaidState>                  mCurrentRaidState;
    ::ll::TypedStorage<4, 4, ::Raid::RaidStatus>                 mRaidStatus;
    ::ll::TypedStorage<1, 1, uchar>                              mCurrentGroupNumber;
    ::ll::TypedStorage<1, 1, uchar>                              mNumGroupsInRaid;
    ::ll::TypedStorage<8, 8, ::Tick>                             mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick>                             mTicksInState;
    ::ll::TypedStorage<4, 4, int>                                mRaidPreparationTime;
    ::ll::TypedStorage<4, 4, int const>                          mGroupCompleteDelay;
    ::ll::TypedStorage<4, 4, int>                                mTicksUntilGroupComplete;
    ::ll::TypedStorage<4, 4, int const>                          mLocationHelpDelay;
    ::ll::TypedStorage<4, 4, int>                                mTicksUntilLocationHelp;
    ::ll::TypedStorage<4, 4, int const>                          mFinishedDelay;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mCurrentGroupSpawnPoint;
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mRaiders;
    ::ll::TypedStorage<1, 1, uchar>                              mNumRaidersSpawnedInCurrentGroup;
    ::ll::TypedStorage<4, 4, float>                              mCurrentGroupTotalMaxHealth;
    ::ll::TypedStorage<1, 1, uchar const>                        mAllowedSpawnFailures;
    ::ll::TypedStorage<1, 1, uchar>                              mSpawnFailures;
    ::ll::UntypedStorage<8, 48>                                  mHeroesOfTheVillage;
    ::ll::UntypedStorage<8, 48>                                  mPickSpawnPointCallback;
    ::ll::UntypedStorage<8, 48>                                  mSpawnGroupCallback;
    ::ll::UntypedStorage<8, 48>                                  mDoesActorExistCallback;
    ::ll::UntypedStorage<8, 48>                                  mIsVillageDefeatedCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnSpawnPointChosenCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnGroupSpawnedCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnAwardRewardsCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnHelpLocateRaidersCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnVillageDefeatedCallback;
    ::ll::UntypedStorage<8, 48>                                  mApplyHeroOfTheVillageCallback;
    ::ll::UntypedStorage<8, 48>                                  mOnActorRemovedFromRaidCallback;
    ::ll::UntypedStorage<8, 48>                                  mGetRaiderHealthCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Raid();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPlayerToHeroList(::Actor const&);

    MCNAPI void addRaider(::ActorUniqueID const&, float);

    MCNAPI float getBossBarFilledFraction() const;

    MCNAPI ulong getRemainingRaiders() const;

    MCNAPI bool isRaider(::ActorUniqueID const) const;

    MCNAPI ~Raid();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& INVALID_SPAWN_POINT();

    MCNAPI static uchar const& NUM_GROUPS_ON_EASY();

    MCNAPI static uchar const& NUM_GROUPS_ON_HARD();

    MCNAPI static uchar const& NUM_GROUPS_ON_NORMAL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
