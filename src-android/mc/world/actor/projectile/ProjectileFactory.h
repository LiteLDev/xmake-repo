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
    MCNAPI explicit ProjectileFactory(::Level&);

    MCNAPI void _applyEnchantmentsToProjectile(::Mob const&, ::Actor&);

    MCNAPI ::Actor*
    shootProjectileFromDefinition(::ActorDefinitionIdentifier const&, ::Mob*, ::Vec3, int, float, bool, bool, ::Vec3);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<OnHitSubcomponent> createSubcomponent(::Json::Value&, std::string const&);

    MCNAPI static void initFactory();

    MCNAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, std::function<std::unique_ptr<OnHitSubcomponent>()>>&
    mSubcomponentMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND
};
