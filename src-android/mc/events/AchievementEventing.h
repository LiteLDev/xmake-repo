#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemDescriptor;
class ItemInstance;
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
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mExcludeCommonProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementEventing();

    MCNAPI void AwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    MCNAPI void AwardAchievementNoXBLTelemetry(::Player&, ::MinecraftEventing::AchievementIds);

    MCNAPI void BlockBroken(::Player const&, ::Block const&, int, int, ushort);

    MCNAPI void BlockPlaced(::Player const&, ::Block const&, bool, ushort);

    MCNAPI void BossKilled(::Player const&, int, long, int);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
