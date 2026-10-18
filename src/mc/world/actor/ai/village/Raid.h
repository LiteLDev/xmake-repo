#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Difficulty.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ONGOING = 0,
        VICTORY = 1,
        DEFEAT  = 2,
#else // @header-generator platform
        Ongoing = 0,
        Victory = 1,
        Defeat  = 2,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using GroupNumberType = uchar;
#else // @header-generator platform
    using ActorIDCollection = ::std::unordered_set<::ActorUniqueID>;

    using ActorRemovedFromRaidCallback = ::std::function<void(::ActorUniqueID const&)>;

    using ApplyHeroOfTheVillageCallback = ::std::function<void(::ActorUniqueID const&)>;

    using CallbackCallCountType = uint64;

    using DoesActorExistCallback = ::std::function<bool(::ActorUniqueID const&)>;
#endif // @header-generator platform

    using DurationType = int;

#if defined(LL_PLAT_A) // @header-generator platform
    using ActorIDCollection = std::unordered_set<ActorUniqueID>;
#else // @header-generator platform
    using FailureCountType = uchar;

    using GroupNumberType = uchar;

    using IsVillageDefeatedCallback = ::std::function<bool()>;

    using NotificationCallback = ::std::function<void(::Raid const&)>;

    using PickSpawnPointCallback = ::std::function<bool(uint64, ::Vec3&)>;
#endif // @header-generator platform

    using RaiderCountType = uchar;

#if defined(LL_PLAT_A) // @header-generator platform
    using FailureCountType = uchar;
#else // @header-generator platform
    using RaiderHealthCallback = ::std::function<float(::ActorUniqueID const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PickSpawnPointCallback = std::function<bool(ulong, Vec3&)>;

    using SpawnGroupCallback = std::function<bool(ulong, Vec3, uchar, std::unordered_set<ActorUniqueID>&)>;

    using DoesActorExistCallback = std::function<bool(const ActorUniqueID&)>;

    using IsVillageDefeatedCallback = std::function<bool()>;

    using NotificationCallback = std::function<void(const Raid&)>;

    using ApplyHeroOfTheVillageCallback = std::function<void(const ActorUniqueID&)>;

    using ActorRemovedFromRaidCallback = std::function<void(const ActorUniqueID&)>;

    using RaiderHealthCallback = std::function<float(const ActorUniqueID&)>;

    using CallbackCallCountType = ulong;
#else // @header-generator platform
    using SpawnGroupCallback = ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Raid::RaidState>                             mCurrentRaidState;
    ::ll::TypedStorage<4, 4, ::Raid::RaidStatus>                            mRaidStatus;
    ::ll::TypedStorage<1, 1, uchar>                                         mCurrentGroupNumber;
    ::ll::TypedStorage<1, 1, uchar>                                         mNumGroupsInRaid;
    ::ll::TypedStorage<8, 8, ::Tick>                                        mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                        mTicksInState;
    ::ll::TypedStorage<4, 4, int>                                           mRaidPreparationTime;
    ::ll::TypedStorage<4, 4, int const>                                     mGroupCompleteDelay;
    ::ll::TypedStorage<4, 4, int>                                           mTicksUntilGroupComplete;
    ::ll::TypedStorage<4, 4, int const>                                     mLocationHelpDelay;
    ::ll::TypedStorage<4, 4, int>                                           mTicksUntilLocationHelp;
    ::ll::TypedStorage<4, 4, int const>                                     mFinishedDelay;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mCurrentGroupSpawnPoint;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>>        mRaiders;
    ::ll::TypedStorage<1, 1, uchar>                                         mNumRaidersSpawnedInCurrentGroup;
    ::ll::TypedStorage<4, 4, float>                                         mCurrentGroupTotalMaxHealth;
    ::ll::TypedStorage<1, 1, uchar const>                                   mAllowedSpawnFailures;
    ::ll::TypedStorage<1, 1, uchar>                                         mSpawnFailures;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>>        mHeroesOfTheVillage;
    ::ll::TypedStorage<8, 64, ::std::function<bool(uint64, ::Vec3&)> const> mPickSpawnPointCallback;
    ::ll::
        TypedStorage<8, 64, ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)> const>
                                                                                   mSpawnGroupCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ActorUniqueID const&)> const> mDoesActorExistCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool()> const>                       mIsVillageDefeatedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>>                mOnSpawnPointChosenCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>>                mOnGroupSpawnedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>>                mOnAwardRewardsCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>>                mOnHelpLocateRaidersCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>>                mOnVillageDefeatedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorUniqueID const&)>>       mApplyHeroOfTheVillageCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorUniqueID const&)>>       mOnActorRemovedFromRaidCallback;
    ::ll::TypedStorage<8, 64, ::std::function<float(::ActorUniqueID const&)>>      mGetRaiderHealthCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Raid();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPlayerToHeroList(::Actor const&);
#else // @header-generator platform
    MCAPI void addPlayerToHeroList(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRaider(::ActorUniqueID const&, float);
#else // @header-generator platform
    MCAPI float getBossBarFilledFraction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool isRaider(::ActorUniqueID actor) const;
#endif // @header-generator platform
    // NOLINTEND
};
