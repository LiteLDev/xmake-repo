#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Attribute;
class EntityContext;
class ItemStack;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Zombie : public ::HumanoidMonster {
public:
    // Zombie inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ZombieType : uint {
        DEFAULT   = 0,
        VILLAGER  = 1,
        HUSK      = 2,
        PIGZOMBIE = 3,
        DROWNED   = 4,
#else // @header-generator platform
    enum class ZombieType : int {
        Default   = 0,
        Villager  = 1,
        Husk      = 2,
        Pigzombie = 3,
        Drowned   = 4,
#endif // @header-generator platform
    };

public:
    // prevent constructor by default
    Zombie();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Zombie();
#else // @header-generator platform
    virtual bool canPickupItem(::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPickupItem(::ItemStack const&) const;
#else // @header-generator platform
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkSpawnRules(bool);

    virtual int getArmorValue() const;
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Zombie(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void setZombieType(::Zombie::ZombieType);
#else // @header-generator platform
    MCAPI Zombie(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& SPAWN_BONUS_UUID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& SPAWN_BONUS_UUID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& SPAWN_REINFORCEMENTS_CHANCE();
#else // @header-generator platform
    MCAPI static ::Attribute const& SPAWN_REINFORCEMENTS_CHANCE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI bool $canPickupItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPickupItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
