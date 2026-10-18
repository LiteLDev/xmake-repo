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
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class SemVersion;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
namespace SharedTypes::v1_20_50 { struct ProjectileItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ProjectileItemComponent : public ::NetworkedItemComponent<ProjectileItemComponent> {
#else // @header-generator platform
class ProjectileItemComponent : public ::NetworkedItemComponent<::ProjectileItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mMinCriticalPower;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProjectileItemComponent();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ProjectileItemComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ProjectileItemComponent(::ProjectileItemComponent&&);
#else // @header-generator platform
    MCAPI explicit ProjectileItemComponent(::SharedTypes::v1_20_50::ProjectileItemComponent component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ProjectileItemComponent(::ProjectileItemComponent const&);
#else // @header-generator platform
    MCAPI ProjectileItemComponent(::ActorType actorType, float minCriticalPower);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::Vec3 getShootDir(::Player const&, float const) const;

    MCNAPI ::Actor* shootProjectile(::BlockSource&, ::Vec3 const&, ::Vec3 const&, float, ::Player*) const;
#else // @header-generator platform
    MCAPI ::Actor* shootProjectile(
        ::BlockSource& region,
        ::Vec3 const&  aimPos,
        ::Vec3 const&  aimDir,
        float          power,
        ::Player*      player
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ProjectileItemComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ProjectileItemComponent component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ProjectileItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ActorType actorType, float minCriticalPower);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
