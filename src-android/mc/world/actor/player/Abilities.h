#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Abilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 240, std::array<Ability, 20>> mAbilities;
    // NOLINTEND

public:
    // prevent constructor by default
    Abilities();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Abilities(bool);

    MCNAPI void addSaveData(::CompoundTag&) const;

    MCNAPI void forEachAbility(std::function<void(Ability&, AbilitiesIndex)> const&, ::Ability::Options);

    MCNAPI void forEachAbility(std::function<void(const Ability&, AbilitiesIndex)> const&, ::Ability::Options) const;

    MCNAPI bool getBool(::AbilitiesIndex) const;

    MCNAPI float getFloat(::AbilitiesIndex) const;

    MCNAPI bool isAnyAbilitySet() const;

    MCNAPI bool loadSaveData(::CompoundTag const&);

    MCNAPI ::Abilities& operator=(::Abilities const&);

    MCNAPI void setAbility(::AbilitiesIndex, bool);

    MCNAPI void setAbilityDiff(::AbilitiesIndex, bool, bool&);

    MCNAPI void setFromPermissions(::PlayerPermissionLevel);

    MCNAPI void unSet();

    MCNAPI void unSet(::AbilitiesIndex);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::array<const Ability, 20> _initDefaultAbilities();

    MCNAPI static char const* getAbilityName(::AbilitiesIndex);

    MCNAPI static ::Ability const& getDefault(::AbilitiesIndex);

    MCNAPI static std::optional<std::string> getDiff(::Abilities const&, ::Abilities const&);

    MCNAPI static ::AbilitiesIndex nameToAbilityIndex(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<const char*, 20>& ABILITY_NAMES();

    MCNAPI static std::string const& DIFF_ABILITIY_AT();

    MCNAPI static ::Ability& INVALID_ABILITY();

    MCNAPI static std::string const& SERIALIZATION_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND
};
