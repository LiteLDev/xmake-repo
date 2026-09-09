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
    enum ZombieType : uint {
        DEFAULT   = 0,
        VILLAGER  = 1,
        HUSK      = 2,
        PIGZOMBIE = 3,
        DROWNED   = 4,
    };

public:
    // prevent constructor by default
    Zombie();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Zombie();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool canPickupItem(::ItemStack const&) const;

    virtual bool checkSpawnRules(bool);

    virtual int getArmorValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Zombie(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void setZombieType(::Zombie::ZombieType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SPAWN_BONUS_UUID();

    MCNAPI static ::Attribute const& SPAWN_REINFORCEMENTS_CHANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI bool $canPickupItem(::ItemStack const&) const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI int $getArmorValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
