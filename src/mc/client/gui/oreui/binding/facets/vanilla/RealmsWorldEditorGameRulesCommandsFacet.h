#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsWorldEditorGameRulesCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldEditorGameRulesCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldEditorGameRulesCommandsFacet(std::shared_ptr<Realms::RealmsWorldEditor>);

    MCNAPI void setCommandBlocksEnabled(bool);

    MCNAPI void setEntitiesDropLoot(bool);

    MCNAPI void setFireSpreads(bool);

    MCNAPI void setFriendlyFireEnabled(bool);

    MCNAPI void setImmediateRespawn(bool);

    MCNAPI void setKeepInventory(bool);

    MCNAPI void setMobGriefing(bool);

    MCNAPI void setMobSpawn(bool);

    MCNAPI void setMobsDropLoot(bool);

    MCNAPI void setNaturalRegeneration(bool);

    MCNAPI void setPlayerWaypointsMode(int);

    MCNAPI void setRandomTickSpeed(int);

    MCNAPI void setRecipesUnlock(bool);

    MCNAPI void setRespawnBlocksExplode(bool);

    MCNAPI void setRespawnRadius(int);

    MCNAPI void setShowCoordinates(bool);

    MCNAPI void setShowDaysPlayed(bool);

    MCNAPI void setSleepSkipNight(bool);

    MCNAPI void setSleepSkipNightPercent(int);

    MCNAPI void setTNTExplodes(bool);

    MCNAPI void setTileDrops(bool);

    MCNAPI void setWeatherCycle(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[43]> NAME();
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
class RealmsWorldEditorGameRulesCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorGameRulesCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorGameRulesCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCAPI void setCommandBlocksEnabled(bool commandsBlockEnabled);

    MCAPI void setEntitiesDropLoot(bool entitiesDropLoot);

    MCAPI void setFireSpreads(bool shouldFireSpread);

    MCAPI void setFriendlyFireEnabled(bool friendlyFireEnabled);

    MCAPI void setImmediateRespawn(bool shouldImmediateRespawn);

    MCAPI void setKeepInventory(bool keepInventory);

    MCAPI void setMobGriefing(bool mobGriefing);

    MCAPI void setMobSpawn(bool mobSpawn);

    MCAPI void setMobsDropLoot(bool shouldMobsDropLoot);

    MCAPI void setNaturalRegeneration(bool shouldHaveNaturalRegeneration);

    MCAPI void setPlayerWaypointsMode(int playerWaypointsMode);

    MCAPI void setRandomTickSpeed(int randomTickSpeed);

    MCAPI void setRecipesUnlock(bool shouldRecipesUnlock);

    MCAPI void setRespawnBlocksExplode(bool shouldRespawnBlocksExplode);

    MCAPI void setRespawnRadius(int respawnRadius);

    MCAPI void setShowCoordinates(bool shouldshowCoordinates);

    MCAPI void setShowDaysPlayed(bool shouldShowDaysPlayed);

    MCAPI void setSleepSkipNight(bool shouldSleepSkipNight);

    MCAPI void setSleepSkipNightPercent(int sleepSkipNightValue);

    MCAPI void setTNTExplodes(bool shouldTNTExplode);

    MCAPI void setTileDrops(bool shouldTilesDrop);

    MCAPI void setWeatherCycle(bool weatherCycle);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWorldEditorGameRulesCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
