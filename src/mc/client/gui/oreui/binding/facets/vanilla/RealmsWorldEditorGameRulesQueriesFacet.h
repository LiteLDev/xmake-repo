#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsWorldEditorGameRulesQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorGameRulesQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mRealmWorldChangeSubscription;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseShowCoordinatesSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseShowDaysPlayedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseRecipesUnlockSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseFireSpreadsSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseTNTExplodesSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseRespawnBlocksExplodeSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseMobsDropLootSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseNaturalRegenerationSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseTileDropsSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mSleepSkipNightSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseImmediateRespawnSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mRespawnRadiusSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mRandomTickSpeedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mKeepInventorySubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mMobSpawnSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mMobGriefingSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mEntityDropSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mWeatherCycleSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mCommandBlocksEnabledSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mFriendlyFireEnabledSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mPlayerWaypointModeSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorGameRulesQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCAPI void _refreshRealmWorldSubscriptions();

    MCAPI bool getCommandBlocksEnabled() const;

    MCAPI bool getEntitiesDropLoot() const;

    MCFOLD bool getFireSpreads() const;

    MCAPI bool getFriendlyFireEnabled() const;

    MCAPI bool getImmediateRespawn() const;

    MCAPI bool getKeepInventory() const;

    MCAPI bool getMobGriefing() const;

    MCAPI bool getMobSpawn() const;

    MCAPI bool getMobsDropLoot() const;

    MCFOLD bool getNaturalRegeneration() const;

    MCFOLD int getPlayerWaypointsMode() const;

    MCAPI int getRandomTickSpeed() const;

    MCFOLD bool getRecipesUnlock() const;

    MCFOLD bool getRespawnBlocksExplode() const;

    MCAPI int getRespawnRadius() const;

    MCFOLD bool getShowCoordinates() const;

    MCFOLD bool getShowDaysPlayed() const;

    MCAPI bool getSleepSkipNight() const;

    MCAPI int getSleepSkipNightPercent() const;

    MCAPI bool getTNTExplodes() const;

    MCAPI bool getTileDrops() const;

    MCAPI bool getWeatherCycle() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWorldEditorGameRulesQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
