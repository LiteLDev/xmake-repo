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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 240, std::array<Ability, 20>> mAbilities;
#else // @header-generator platform
    ::ll::TypedStorage<4, 240, ::std::array<::Ability, 20>> mAbilities;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Abilities& operator=(Abilities const&);
#endif // @header-generator platform
    Abilities();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Abilities(bool);
#else // @header-generator platform
    MCAPI Abilities(::Abilities const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI explicit Abilities(bool setToDefaults);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachAbility(std::function<void(Ability&, AbilitiesIndex)> const&, ::Ability::Options);
#else // @header-generator platform
    MCAPI void addSaveData(::CompoundTag& parentTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachAbility(std::function<void(const Ability&, AbilitiesIndex)> const&, ::Ability::Options) const;
#else // @header-generator platform
    MCFOLD void forEachAbility(
        ::std::function<void(::Ability&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                         requiredOptions
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(::AbilitiesIndex) const;
#else // @header-generator platform
    MCFOLD void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAnyAbilitySet() const;
#else // @header-generator platform
    MCAPI bool loadSaveData(::CompoundTag const& parentTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool loadSaveData(::CompoundTag const&);

    MCNAPI ::Abilities& operator=(::Abilities const&);

    MCNAPI void setAbility(::AbilitiesIndex, bool);

    MCNAPI void setAbilityDiff(::AbilitiesIndex, bool, bool&);

    MCNAPI void setFromPermissions(::PlayerPermissionLevel);

    MCNAPI void unSet();

    MCNAPI void unSet(::AbilitiesIndex);
#else // @header-generator platform
    MCAPI void setFromPermissions(::PlayerPermissionLevel permissions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<const Ability, 20> _initDefaultAbilities();
#else // @header-generator platform
    MCAPI static ::std::array<::Ability const, 20> _initDefaultAbilities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* getAbilityName(::AbilitiesIndex);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getDiff(::Abilities const& lhs, ::Abilities const& rhs);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Ability const& getDefault(::AbilitiesIndex);

    MCNAPI static std::optional<std::string> getDiff(::Abilities const&, ::Abilities const&);

    MCNAPI static ::AbilitiesIndex nameToAbilityIndex(std::string const&);
#else // @header-generator platform
    MCAPI static ::AbilitiesIndex nameToAbilityIndex(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<const char*, 20>& ABILITY_NAMES();
#else // @header-generator platform
    MCAPI static ::std::array<char const*, 20>& ABILITY_NAMES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_ABILITIY_AT();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& DIFF_ABILITIY_AT();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Ability& INVALID_ABILITY();
#else // @header-generator platform
    MCAPI static ::Ability& INVALID_ABILITY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SERIALIZATION_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& SERIALIZATION_TAG();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCAPI void* $ctor(::Abilities const& rhs);

    MCAPI void* $ctor(bool setToDefaults);
#endif // @header-generator platform
    // NOLINTEND
};
