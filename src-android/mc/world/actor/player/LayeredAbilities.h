#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/AbilitiesLayer.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/actor/player/PermissionsHandler.h"

// auto generated forward declare list
// clang-format off
class Ability;
class CompoundTag;
// clang-format on

class LayeredAbilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>       mPermissions;
    ::ll::TypedStorage<4, 1440, std::array<Abilities, 6>> mLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayeredAbilities();

    MCNAPI LayeredAbilities(::LayeredAbilities const&);

    MCNAPI void addSaveData(::CompoundTag&) const;

    MCNAPI void forEachAbility(std::function<void(const Ability&, const char*)> const&, ::Ability::Options) const;

    MCNAPI void forEachAbility(std::function<void(const Ability&, AbilitiesIndex)> const&, ::Ability::Options) const;

    MCNAPI void forEachLayer(std::function<void(AbilitiesLayer, Abilities&)> const&);

    MCNAPI void forEachLayer(std::function<void(AbilitiesLayer, const Abilities&)> const&) const;

    MCNAPI ::Ability const& getAbility(::AbilitiesIndex) const;

    MCNAPI ::Ability& getAbility(::AbilitiesLayer, ::AbilitiesIndex);

    MCNAPI bool getBool(::AbilitiesIndex) const;

    MCNAPI std::pair<bool, AbilitiesLayer> getBoolWithLayer(::AbilitiesIndex) const;

    MCNAPI ::CommandPermissionLevel getCommandPermissions() const;

    MCNAPI float getFloat(::AbilitiesIndex) const;

    MCNAPI std::pair<float, AbilitiesLayer> getFloatWithLayer(::AbilitiesIndex) const;

    MCNAPI ::Abilities const& getLayer(::AbilitiesLayer) const;

    MCNAPI ::Abilities& getLayer(::AbilitiesLayer);

    MCNAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCNAPI bool isOperator() const;

    MCNAPI bool loadSaveData(::CompoundTag const&);

    MCNAPI void onSwitchToCustom();

    MCNAPI bool operator!=(::LayeredAbilities const&) const;

    MCNAPI ::LayeredAbilities& operator=(::LayeredAbilities const&);

    MCNAPI void setAbility(::AbilitiesIndex, bool);

    MCNAPI void setAbility(::AbilitiesIndex, float);

    MCNAPI void setCommandPermissions(::CommandPermissionLevel);

    MCNAPI void setPermissions(::PermissionsHandler const&);

    MCNAPI void setPlayerPermissions(::PlayerPermissionLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<std::string> getDiff(::LayeredAbilities const&, ::LayeredAbilities const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DIFF_LAYER_AT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LayeredAbilities const&);
    // NOLINTEND
};
