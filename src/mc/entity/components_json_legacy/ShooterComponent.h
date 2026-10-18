#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/ShooterProjectileData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ShooterProjectileData;
#endif // @header-generator platform
// clang-format on

class ShooterComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mThrowPower;
    ::ll::TypedStorage<8, 24, std::vector<ShooterProjectileData>>    mShooterProjectileData;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>          mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                   mMagicAttacks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mThrowPower;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterProjectileData>> mShooterProjectileData;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>           mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                     mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>  mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                    mMagicAttacks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _shootProjectile(::Actor&, ::ActorDefinitionIdentifier const&, int);
#else // @header-generator platform
    MCAPI void _shootProjectile(::Actor& owner, ::ActorDefinitionIdentifier const& actorDef, int auxVal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasMagicAttacks() const;

    MCNAPI void onShoot(::Actor&);

    MCNAPI ~ShooterComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void onShoot(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};
