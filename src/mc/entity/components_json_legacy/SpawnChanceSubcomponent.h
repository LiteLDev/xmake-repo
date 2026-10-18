#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>        mSpawnDefinition;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mSpawnTriggers;
    ::ll::TypedStorage<4, 4, float>                                mFirstSpawnChance;
    ::ll::TypedStorage<4, 4, float>                                mSecondSpawnChance;
    ::ll::TypedStorage<4, 4, int>                                  mFirstSpawnCount;
    ::ll::TypedStorage<4, 4, int>                                  mSecondSpawnCount;
    ::ll::TypedStorage<1, 1, bool>                                 mSpawnBaby;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>            mSpawnDefinition;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mSpawnTriggers;
    ::ll::TypedStorage<4, 4, float>                                    mFirstSpawnChance;
    ::ll::TypedStorage<4, 4, float>                                    mSecondSpawnChance;
    ::ll::TypedStorage<4, 4, int>                                      mFirstSpawnCount;
    ::ll::TypedStorage<4, 4, int>                                      mSecondSpawnCount;
    ::ll::TypedStorage<1, 1, bool>                                     mSpawnBaby;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpawnChanceSubcomponent();
#else // @header-generator platform
    virtual void readfromJSON(::Json::Value& component) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readfromJSON(::Json::Value&);
#else // @header-generator platform
    virtual void writetoJSON(::Json::Value& component) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&);

    virtual char const* getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual char const* getName() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readfromJSON(::Json::Value&);
#else // @header-generator platform
    MCAPI void $readfromJSON(::Json::Value& component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writetoJSON(::Json::Value&) const;
#else // @header-generator platform
    MCAPI void $writetoJSON(::Json::Value& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doOnHitEffect(::Actor&, ::ProjectileComponent&);
#else // @header-generator platform
    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* $getName() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI char const* $getName() const;
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
