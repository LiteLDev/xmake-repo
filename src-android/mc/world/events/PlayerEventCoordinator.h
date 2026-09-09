#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerEventListener.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Player;
class PlayerGameplayHandler;
struct ActorUniqueID;
struct DealKineticDamageComponent;
struct DimensionType;
// clang-format on

class PlayerEventCoordinator : public ::EventCoordinator<PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerGameplayHandler>> mPlayerGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PlayerGameplayHandler& getPlayerGameplayHandler();

    MCNAPI void registerPlayerGameplayHandler(std::unique_ptr<PlayerGameplayHandler>&&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<PlayerGameplayEvent<CoordinatorResult>> const&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutablePlayerGameplayEvent<CoordinatorResult>>);

    MCNAPI void sendEvent(::EventRef<PlayerGameplayEvent<void>> const&);

    MCNAPI void sendPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    MCNAPI void sendPlayerCaravanChanged(::Actor const&, int);

    MCNAPI void sendPlayerCraftedItem(
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

    MCNAPI void sendPlayerDestroyedBlock(::Player&, int, int, int);

    MCNAPI void sendPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);

    MCNAPI void sendPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    MCNAPI void sendPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    MCNAPI void sendPlayerItemUseInteraction(::Player&, ::ItemInstance const&);

    MCNAPI void sendPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);

    MCNAPI void sendPlayerMove(::Player&);

    MCNAPI void sendPlayerNamedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI void sendPlayerPiglinBarter(::Player&, std::string const&, bool const);

    MCNAPI void sendPlayerPortalBuilt(::Player&, ::DimensionType);

    MCNAPI void sendPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);

    MCNAPI void sendPlayerPoweredBeacon(::Player const&, int);

    MCNAPI void sendPlayerSaved(::Player&);

    MCNAPI void sendPlayerSlide(::Player&);

    MCNAPI void sendPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI void sendPlayerTargetBlockHit(::Player&, int const);

    MCNAPI void sendPlayerTeleported(::Player&);

    MCNAPI void sendPlayerTeleported(::Player&, float);

    MCNAPI void sendPlayerTick(::Player&);

    MCNAPI void sendPlayerWaxOnWaxOff(::Player&, int const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
