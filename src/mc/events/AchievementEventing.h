#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class MobEffectInstance;
class Player;
struct DimensionType;
// clang-format on

namespace Social::Events {

class AchievementEventing {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mExcludeCommonProperties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk266bfd;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AchievementEventing& operator=(AchievementEventing const&);
    AchievementEventing(AchievementEventing const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AchievementEventing& operator=(AchievementEventing const&);
    AchievementEventing(AchievementEventing const&);
    AchievementEventing();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AchievementEventing();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI AchievementEventing();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void AwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
    MCNAPI void AwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievementId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void AwardAchievementNoXBLTelemetry(::Player&, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void BossKilled(::Player const& player, int partySize, int64 bossUniqueId, int bossType);

    MCNAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCNAPI void CauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

    MCNAPI void EndOfDay(::Player const& player);

    MCNAPI void ItemSmelted(::Player const& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void BlockBroken(::Player const&, ::Block const&, int, int, ushort);
#else // @header-generator platform
    MCNAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void BlockPlaced(::Player const&, ::Block const&, bool, ushort);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void PlayerSaved(::Player& player);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void BossKilled(::Player const&, int, long, int);
#else // @header-generator platform
    MCNAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void CaravanChanged(::Mob&, int);

    MCNAPI void CauldronUsed(::Player const&, short, uint, short);

    MCNAPI void EndOfDay(::Player const&);

    MCNAPI void ItemAcquired(::Player const&, ::ItemDescriptor const&, int, uint, int);

    MCNAPI void
    ItemCrafted(::Player const&, int, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);

    MCNAPI void ItemNamed(::Player const&, ::ItemDescriptor const&);

    MCNAPI void ItemSmelted(::Player const&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI void ItemSmithied(::Player&, ::ItemDescriptor const&);

    MCNAPI void ItemUsed(::Player const&, ::ItemDescriptor const&, uint);

    MCNAPI void MobEffectChanged(::Player const&, ::MobEffectInstance const&, int);

    MCNAPI void MobInteracted(::Player const&, int, int, int, uchar);

    MCNAPI void MobKilled(::Player const&, ::Actor*, ::Mob&, uint, std::string const&, int);

    MCNAPI void PiglinBarter(::Player const&, std::string const&, bool);

    MCNAPI void PlayerBounced(::Player const&, ::Block const&, int, int);

    MCNAPI void PlayerSaved(::Player&);

    MCNAPI void PlayerTeleported(::Player&, float, int, int);

    MCNAPI void PlayerTravelled(::Player const&, float, int, int);

    MCNAPI void PortalUsed(::Player&, ::DimensionType const&, ::DimensionType const&);

    MCNAPI void PotionBrewed(::Player const&, ::ItemDescriptor const&, uint);

    MCNAPI void RaidUpdated(::Player const&, int const, int const, bool const);

    MCNAPI void TargetBlockHit(::Player&, int const);

    MCNAPI void TradeCompleted(
        ::Player const&,
        ::Actor*,
        ::ItemDescriptor const&,
        ::ItemDescriptor const&,
        ::ItemInstance const&,
        int
    );

    MCNAPI void waxedOrWaxedOf(::Player&, int const);

    MCNAPI ~AchievementEventing();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void PortalUsed(::Player& player, ::DimensionType const& dimToId, ::DimensionType const& dimFromId);

    MCNAPI void PotionBrewed(::Player const& player, ::ItemDescriptor const& item, uint itemCount);

    MCNAPI void TargetBlockHit(::Player& player, int redstoneLevel);

    MCNAPI void waxedOrWaxedOf(::Player& player, int blockID);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
