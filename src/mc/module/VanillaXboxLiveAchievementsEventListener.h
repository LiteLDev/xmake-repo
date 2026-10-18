#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/module/IAchievementsListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class ItemInstance;
class Player;
struct ActorAcquiredItemEvent;
struct ActorUseItemEvent;
struct ItemUsedOnEvent;
// clang-format on

class VanillaXboxLiveAchievementsEventListener : public ::IAchievementsListener {
#else // @header-generator platform
class VanillaXboxLiveAchievementsEventListener {
#endif // @header-generator platform
public:
    // VanillaXboxLiveAchievementsEventListener inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class MovementAxis : int {
        UNDEFINED = -1,
        X         = 0,
        Y         = 1,
        Z         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mStartRidingPosition;
    ::ll::TypedStorage<4, 4, float>   mPrevRidingDistance;
    ::ll::TypedStorage<4, 4, int>     mTimeInWater;
    ::ll::TypedStorage<4, 4, int>     mTimeInWaterNoPotion;
    ::ll::TypedStorage<1, 1, bool>    mSleepWithFishesSent;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastStructureCheckPos;
    ::ll::TypedStorage<1, 1, bool>    mTreasureHunterSent;
    ::ll::TypedStorage<1, 1, bool>    mAhoySent;
    ::ll::TypedStorage<1, 1, bool>    mAtlantisSent;
    ::ll::TypedStorage<4, 4, float>   mStartedFloating;
    ::ll::TypedStorage<1, 1, bool>    mCastawaySent;
    ::ll::TypedStorage<4, 4, int>     mCastawayTimer;
    ::ll::UntypedStorage<1, 1>        mAteKelp;
    ::ll::UntypedStorage<2, 2>        mLastBiome;
    ::ll::TypedStorage<1, 1, bool>    mSailSeasSent;
    ::ll::TypedStorage<1, 1, bool>    mSuperSonicSent;
    ::ll::TypedStorage<1, 1, bool>    mGreatViewSent;
    ::ll::TypedStorage<1, 1, bool>    mIronBellySent;
    ::ll::TypedStorage<1, 1, bool>    mFreeDiverSent;
    ::ll::TypedStorage<1, 1, bool>    mOnARailSent;
    ::ll::TypedStorage<1, 1, bool>    mOnePickleTwoPickleSeaPickleFourSent;
    ::ll::TypedStorage<1, 1, bool>    mStickySituationSent;
    ::ll::TypedStorage<1, 1, bool>    mTotalBeeLocationSent;
    ::ll::TypedStorage<1, 1, bool>    mFloatYourGoatSent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaXboxLiveAchievementsEventListener();

    virtual ::EventResult onPlayerTick(::Player&);

    virtual ::EventResult onPlayerMove(::Player&);

    virtual ::EventResult onPlayerSlide(::Player&);

    virtual ::EventResult onPlayerStartRiding(::Player&, ::Actor&);

    virtual ::EventResult onEvent(::ItemUsedOnEvent const&);

    virtual ::EventResult onEvent(::ActorUseItemEvent const&);

    virtual ::EventResult onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _checkFloatYourGoat(::Player&, ::Actor&);

    MCNAPI void _handleCarefulRestoration(::ItemInstance const&, ::Player&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onPlayerTick(::Player&);

    MCNAPI ::EventResult $onPlayerMove(::Player&);

    MCNAPI ::EventResult $onPlayerSlide(::Player&);

    MCNAPI ::EventResult $onPlayerStartRiding(::Player&, ::Actor&);

    MCNAPI ::EventResult $onEvent(::ItemUsedOnEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorUseItemEvent const&);

    MCNAPI ::EventResult $onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    MCNAPI ::EventResult $onPlayerCraftedItem(
        ::Player&,
        ::ItemInstance const&,
        bool,
        bool,
        bool,
        int,
        int,
        int,
        bool,
        bool,
        std::vector<short> const&
    );

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class MovementAxis : int {};
#endif // @header-generator platform
};
