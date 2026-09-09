#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class HashedString;
class ItemStack;
class Player;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_20_50 { struct ProjectileItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ProjectileItemComponent : public ::NetworkedItemComponent<ProjectileItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mMinCriticalPower;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorIdentifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProjectileItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectileItemComponent(::ProjectileItemComponent&&);

    MCNAPI ProjectileItemComponent(::ProjectileItemComponent const&);

    MCNAPI ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::Vec3 getShootDir(::Player const&, float const) const;

    MCNAPI ::Actor* shootProjectile(::BlockSource&, ::Vec3 const&, ::Vec3 const&, float, ::Player*) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ProjectileItemComponent&&);

    MCNAPI void* $ctor(::ProjectileItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
