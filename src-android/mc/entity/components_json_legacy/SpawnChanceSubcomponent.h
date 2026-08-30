#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>        mSpawnDefinition;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mSpawnTriggers;
    ::ll::TypedStorage<4, 4, float>                                mFirstSpawnChance;
    ::ll::TypedStorage<4, 4, float>                                mSecondSpawnChance;
    ::ll::TypedStorage<4, 4, int>                                  mFirstSpawnCount;
    ::ll::TypedStorage<4, 4, int>                                  mSecondSpawnCount;
    ::ll::TypedStorage<1, 1, bool>                                 mSpawnBaby;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnChanceSubcomponent();

    virtual void readfromJSON(::Json::Value&);

    virtual void writetoJSON(::Json::Value&) const;

    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value&);

    MCNAPI void $writetoJSON(::Json::Value&) const;

    MCNAPI void $doOnHitEffect(::Actor&, ::ProjectileComponent&);

    MCNAPI char const* $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
