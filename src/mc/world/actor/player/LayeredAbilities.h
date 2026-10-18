#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/player/AbilitiesLayer.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI Ability& getAbility(::AbilitiesIndex val);
    LLNDAPI Ability& getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val);
    LLAPI bool       setAbility(::AbilitiesIndex val, float value);
    LLAPI bool       setAbility(::AbilitiesIndex val, bool value);
    // LLAPI void       setPlayerPermissions(::PlayerPermissionLevel permissions);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>       mPermissions;
    ::ll::TypedStorage<4, 1440, std::array<Abilities, 6>> mLayers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>           mPermissions;
    ::ll::TypedStorage<4, 1440, ::std::array<::Abilities, 6>> mLayers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LayeredAbilities(LayeredAbilities const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LayeredAbilities();
#else // @header-generator platform
    MCAPI LayeredAbilities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LayeredAbilities(::LayeredAbilities const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addSaveData(::CompoundTag& parentTag) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachAbility(std::function<void(const Ability&, const char*)> const&, ::Ability::Options) const;
#else // @header-generator platform
    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachAbility(std::function<void(const Ability&, AbilitiesIndex)> const&, ::Ability::Options) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities&)> const& callback);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachLayer(std::function<void(AbilitiesLayer, Abilities&)> const&);
#else // @header-generator platform
    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities const&)> const& callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachLayer(std::function<void(AbilitiesLayer, const Abilities&)> const&) const;
#else // @header-generator platform
    MCAPI ::Ability const& getAbility(::AbilitiesIndex val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Ability const& getAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI bool getBool(::AbilitiesIndex val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Ability& getAbility(::AbilitiesLayer, ::AbilitiesIndex);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool loadSaveData(::CompoundTag const& parentTag);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI ::LayeredAbilities& operator=(::LayeredAbilities const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<bool, AbilitiesLayer> getBoolWithLayer(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~LayeredAbilities();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::string> getDiff(::LayeredAbilities const&, ::LayeredAbilities const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getDiff(::LayeredAbilities const& lhs, ::LayeredAbilities const& rhs);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_LAYER_AT();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& DIFF_LAYER_AT();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LayeredAbilities const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
