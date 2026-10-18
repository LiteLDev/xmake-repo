#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Mob;
class OnHitSubcomponent;
class Vec3;
struct ActorDefinitionIdentifier;
namespace Json { class Value; }
// clang-format on

class ProjectileFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileFactory& operator=(ProjectileFactory const&);
    ProjectileFactory(ProjectileFactory const&);
    ProjectileFactory();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ProjectileFactory(::Level&);

    MCNAPI void _applyEnchantmentsToProjectile(::Mob const&, ::Actor&);

    MCNAPI ::Actor*
    shootProjectileFromDefinition(::ActorDefinitionIdentifier const&, ::Mob*, ::Vec3, int, float, bool, bool, ::Vec3);
#else // @header-generator platform
    MCAPI ::Actor* shootProjectileFromDefinition(
        ::ActorDefinitionIdentifier const& identifier,
        ::Mob*                             owner,
        ::Vec3                             targetDir,
        int                                auxValue,
        float                              throwPower,
        bool                               useUnmodifiedDirection,
        bool                               overrideSpawnPosition,
        ::Vec3                             spawnPosition
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<OnHitSubcomponent> createSubcomponent(::Json::Value&, std::string const&);
#else // @header-generator platform
    MCAPI static void _applyEnchantmentsToProjectile(::Mob const& owner, ::Actor& projectile);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initFactory();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::OnHitSubcomponent>
    createSubcomponent(::Json::Value& trigger, ::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void shutdown();
#else // @header-generator platform
    MCAPI static void initFactory();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, std::function<std::unique_ptr<OnHitSubcomponent>()>>&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::std::function<::std::unique_ptr<::OnHitSubcomponent>()>>&
#endif // @header-generator platform
    mSubcomponentMap();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
