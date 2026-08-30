#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
