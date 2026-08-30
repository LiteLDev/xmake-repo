#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorGameRulesQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldEditorGameRulesQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmWorldChangeSubscription;
    ::ll::UntypedStorage<8, 24>                                           mUseShowCoordinatesSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseShowDaysPlayedSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseRecipesUnlockSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseFireSpreadsSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseTNTExplodesSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseRespawnBlocksExplodeSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseMobsDropLootSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseNaturalRegenerationSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseTileDropsSubVal;
    ::ll::UntypedStorage<8, 24>                                           mSleepSkipNightSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseImmediateRespawnSubVal;
    ::ll::UntypedStorage<8, 24>                                           mRespawnRadiusSubVal;
    ::ll::UntypedStorage<8, 24>                                           mRandomTickSpeedSubVal;
    ::ll::UntypedStorage<8, 24>                                           mKeepInventorySubVal;
    ::ll::UntypedStorage<8, 24>                                           mMobSpawnSubVal;
    ::ll::UntypedStorage<8, 24>                                           mMobGriefingSubVal;
    ::ll::UntypedStorage<8, 24>                                           mEntityDropSubVal;
    ::ll::UntypedStorage<8, 24>                                           mWeatherCycleSubVal;
    ::ll::UntypedStorage<8, 24>                                           mCommandBlocksEnabledSubVal;
    ::ll::UntypedStorage<8, 24>                                           mFriendlyFireEnabledSubVal;
    ::ll::UntypedStorage<8, 24>                                           mPlayerWaypointModeSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldEditorGameRulesQueriesFacet(std::shared_ptr<Realms::RealmsWorldEditor>);

    MCNAPI void _refreshRealmWorldSubscriptions();

    MCNAPI bool getCommandBlocksEnabled() const;

    MCNAPI bool getEntitiesDropLoot() const;

    MCNAPI bool getFireSpreads() const;

    MCNAPI bool getFriendlyFireEnabled() const;

    MCNAPI bool getImmediateRespawn() const;

    MCNAPI bool getKeepInventory() const;

    MCNAPI bool getMobGriefing() const;

    MCNAPI bool getMobSpawn() const;

    MCNAPI bool getMobsDropLoot() const;

    MCNAPI bool getNaturalRegeneration() const;

    MCNAPI int getPlayerWaypointsMode() const;

    MCNAPI int getRandomTickSpeed() const;

    MCNAPI bool getRecipesUnlock() const;

    MCNAPI bool getRespawnBlocksExplode() const;

    MCNAPI int getRespawnRadius() const;

    MCNAPI bool getShowCoordinates() const;

    MCNAPI bool getShowDaysPlayed() const;

    MCNAPI bool getSleepSkipNight() const;

    MCNAPI int getSleepSkipNightPercent() const;

    MCNAPI bool getTNTExplodes() const;

    MCNAPI bool getTileDrops() const;

    MCNAPI bool getWeatherCycle() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[42]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsWorldEditor>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
